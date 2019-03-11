//
//  InterviewProblem21.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/8.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素min函数
//  在该栈中，调用min，push及pop的时间复杂度都是O(1)

#include "InterviewProblem21.hpp"
#include <stack>

using namespace std;

class MyStack {
protected:
    stack<int> data;
    stack<int> minData;
    
public:
    void push(int value) {
        data.push(value);
        
        if (minData.empty()) {
            minData.push(value);
        }
        else {
            int minValue = minData.top();
            if (value < minValue) {
                minData.push(value);
            }
            else {
                minData.push(minValue);
            }
        }
    }
    
    void pop() {
        if (data.empty() || minData.empty()) {
            printf("data is empty");
            return;
        }
        
        data.pop();
        minData.pop();
    }
    
    int min() {
        if (minData.empty()) {
            printf("data is empty");
            return 0;
        }
        
        return minData.top();
    }
};
