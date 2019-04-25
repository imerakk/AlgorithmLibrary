//
//  LeetCode2.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/25.
//  Copyright © 2019年 imera. All rights reserved.
//
//  Evaluate the value of an arithmetic expression in Reverse Polish Notation.
//  Valid operators are+,-,*,/. Each operand may be an integer or another expression.
//  Some examples:
//  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
//  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6

#include "LeetCode2.hpp"
#include <vector>
#include <stack>
#include <string>

using namespace std;

int evalRPN(vector<string> &tokens) {
    int size = tokens.size();
    if (size == 0) {
        return -1;
    }
    
    stack<int> st;
    for (int i=0; i<size; i++) {
        string str = tokens[i];
        if (str == "+" || str == "-" || str == "*" || str == "/") {
            if (st.size() >= 2) {
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                
                if (str == "+") st.push(second + first);
                if (str == "-") st.push(second - first);
                if (str == "*") st.push(second * first);
                if (str == "/") {
                    if (first == 0) {
                        st.push(-1);
                        break;
                    }
                    else {
                        st.push(second / first);
                    }
                }
            }
            else {
                st.push(-1);
                break;
            }
        }
        else {
            int num = atoi(str.c_str());
            st.push(num);
        }
    }
    
    return st.top();
}
