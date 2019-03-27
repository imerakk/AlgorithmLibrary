//
//  InterviewProblem46.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/27.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  求1+2+...+n，要求不能使用乘除法，for，while，if，else，switch，case
//  等关键字及条件判断语句（A?B:C）

#include "InterviewProblem46.hpp"

int SumRecursion(int n) {
    int sum = n;
    sum && (sum += SumRecursion(n - 1));
    return sum;
}
