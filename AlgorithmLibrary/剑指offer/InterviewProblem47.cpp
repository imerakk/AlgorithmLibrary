//
//  InterviewProblem47.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/27.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  写一个函数，求两个整数之和，要求在函数体内不得使用+，-，*，/
//  四则运算符

#include "InterviewProblem47.hpp"

int Add(int a, int b) {
    int temp = 0;
    while (b != 0) {
        temp = a ^ b;
        b = (a & b) << 1;
        a = temp;
    }
    
    return temp;
}
