//
//  InterviewProblem10.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/28.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数，输入一个整数，输出该数二进制表示中1的个数。例如把9
//  表示成二进制是1001，有两位是1.因此如果输入9，该函数输出2。

#include "InterviewProblem10.hpp"

int NumberOf1(int n) {
    int count = 0;
    while (n) {
        n = (n - 1) & n;
        count++;
    }
    return count;
}


