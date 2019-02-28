//
//  InterviewProblem9.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/28.
//  Copyright © 2019年 imera. All rights reserved.
//  题目：斐波那契数列
//  写一个函数，输入n，求斐波那契数列的第n项。斐波那契数列定义如下：
//  n = 0, f(n) = 0;
//  n = 1, f(n) = 1;
//  n > 1, f(n) = f(n - 1) + f(n - 2)
//
//  斐波那契数列应用
//  一只青蛙一次可以跳上一级台阶，也可以跳上2级。求该青蛙跳上n级台阶总共有多少解法

#include "InterviewProblem9.hpp"

/*
// 递归,效率低
long long Fibonacci(unsigned int n) {
    if (n <= 0) {
        return 0;
    }
    
    if (n == 1) {
        return 1;
    }
    
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/

long long Fibonacci(unsigned int n) {
    if (n <= 0) {
        return 0;
    }
    
    if (n == 1) {
        return 1;
    }
    
    int num1 = 0;
    int num2 = 1;
    int totalCount = 0;
    for (int i = 2; i <= n; i++) {
        totalCount = num1 + num2;
        num1 = num2;
        num2 = totalCount;
    }
    
    return totalCount;
}

long long TotalCount(unsigned int n) {
    if (n <= 2) {
        return n;
    }
    
    int num1 = 1;
    int num2 = 2;
    int totalCount = 0;
    for (unsigned int i = 3; i <= n; i++) {
        totalCount = num1 + num2;
        num1 = num2;
        num2 = totalCount;
    }
    
    return totalCount;
}

