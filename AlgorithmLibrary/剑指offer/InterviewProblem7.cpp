//
//  InterviewProblem7.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/26.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  用两个栈实现一个队列。队列的声明如下，请实现它的两个函数appendTail和deleteHead
//  分别完成在队列尾部插入结点和队列头部删除结点的功能

#include "InterviewProblem7.hpp"

void Queue::appendTail(int node) {
    stackIn.push(node);
}

int Queue::deleteHead() {
    if (stackIn.empty() && stackOut.empty()) {
        printf("当前队列为空");
        return -1;
    }
    
    if (stackOut.empty()) {
        while (!stackIn.empty()) {
            stackOut.push(stackIn.top());
            stackIn.pop();
        }
    }
    
    int head = stackOut.top();
    stackOut.pop();
    return head;
}
