//
//  InterviewProblem54.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/2.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数用来判断字符串是否表示数值
//  字符串"+100","5e2","-123","3.1416"和"-E-16"都表示
//  数值。但是"12e"，"1a3.14","1.2.3","+-5"和"12e+4.3"
//  都不是

#include "InterviewProblem54.hpp"

bool IsNumber(char *str) {
    if (str == NULL || *str == '\0') {
        return false;
    }
    
    if (*str == '+' || *str == '-') { //符号位
        str ++;
    }
    
    if (*str == 'e' || *str == 'E' || *str == '.') {
        return false;
    }
    
    bool isDigits = false;
    bool isExponential = false;
    bool isNumber = true;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            str ++;
        }
        else if (*str == '.') {
            if (!isDigits) {
                str ++;
                isDigits = true;
            }
            else {
                isNumber = false;
                break;
            }
        }
        else if (*str == 'e' || *str == 'E') {
            str++;
            isExponential = true;
            break;
        }
        else {
            isNumber = false;
            break;
        }
    }
    
    if (isExponential) {
        if (*str == '\0') {
            isNumber = false;
        }
        else {
            if (*str == '+' || *str == '-') {
                str++;
            }
            
            while (*str != '\0') {
                if (*str >= '0' && *str <= '9') {
                    str++;
                }
                else {
                    isNumber = false;
                    break;
                }
            }
        }
    }
    
    return isNumber;
}
