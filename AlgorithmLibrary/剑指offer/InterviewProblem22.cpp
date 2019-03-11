//
//  InterviewProblem22.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/11.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否为该栈
//  的弹出顺序。假设压入栈的所有数字均不相等。

#include "InterviewProblem22.hpp"
#include <stack>

using namespace std;

bool IsPopOrder(int *pushOrder, int *popOrder, int length) {
    if (pushOrder == NULL || popOrder == NULL || length <= 0) {
        return false;
    }
    
    stack<int> stack;
    int *popNext = popOrder;
    int *pushNext = pushOrder;
    
    while (popNext - popOrder < length) {
        while (stack.empty() || stack.top() != *popNext) {
            if (pushNext - pushOrder == length) {
                break;
            }
            
            stack.push(*pushNext);
            pushNext++;
        }
        
        if (stack.top() != *popNext) {
            break;
        }
        
        stack.pop();
        popNext++;
    }
    
    if (stack.empty() && popNext - popOrder == length) {
        return true;
    }
    else {
        return false;
    }
}

