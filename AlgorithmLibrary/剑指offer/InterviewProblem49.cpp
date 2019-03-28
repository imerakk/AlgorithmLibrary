//
//  InterviewProblem49.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/28.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  实现一个StrToInt函数，实现把字符串转为整数

#include "InterviewProblem49.hpp"

bool g_InvailInput = false;

int StrToInt(char *str) {
    if (str == NULL || *str == '\0') {
        g_InvailInput = true;
        return -1;
    }
    
    int flag = 1;
    if (*str == '+') {
        flag = 1;
        str++;
    }
    else if (*str == '-') {
        flag = -1;
        str++;
    }
    
    long long num = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            num = num * 10 + (*str - '0');
            if (flag*num > 0x7fffffff || flag*num < (signed int)0x80000000) {
                g_InvailInput = true;
                num = -1;
                break;
            }
            str++;
        }
        else {
            num = -1;
            g_InvailInput = true;
            break;
        }
    }
    
    return (int)num*flag;
}

