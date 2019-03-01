//
//  InterviewProblem11.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/1.
//  Copyright © 2019年 imera. All rights reserved.
//
//  题目
//  实现函数 double power(double base， int exponent)，求base的exponent次方。不得使用库函数，同时不需要考虑大数问题

#include "InterviewProblem11.hpp"

bool equal(double num1, double num2) {
    if (num1 - num2 < 0.00000001 && num1 - num2 > -0.00000001) {
        return true;
    }
    
    return false;
}

double Power(double base, int exponent) {
    if (equal(base, 0.0) && exponent < 0) {
        throw "base must not 0.0 when exponent < 0";
        return 0.0;
    }
    
    int absExponent = 0.0;
    if (exponent < 0) {
        absExponent = -exponent;
    } else {
        absExponent = exponent;
    }
    
    double result = 1.0;
    for (int i=0; i<absExponent; i++) {
        result *= base;
    }
    
    if (exponent < 0) {
        result = 1.0 / result;
    }
    
    return result;
}

