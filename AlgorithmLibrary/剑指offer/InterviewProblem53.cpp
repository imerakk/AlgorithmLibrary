//
//  InterviewProblem53.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/1.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数用来匹配包括'.'和'*'正则表达式。模式中的字符'.'任意一个字符
//  而'*'表示它前面的字符可以出现在任意次（包含0次）。在本题中，匹配是指字符串的所有字
//  符匹配整个模式。例如，字符串"aaa"与模式"a.a"和"ab*ac*a"匹配，但是"aa.a"和"ab*a"
//  均不匹配

#include "InterviewProblem53.hpp"

bool Math(char *str, char *pattern) {
    if (*str == '\0' && *pattern == '\0') {
        return true;
    }
    
    if (*str != '\0' && *pattern == '\0') {
        return false;
    }
    
    if (*(pattern+1) != '*') {
        if (*str == *pattern || (*str != '\0' && *pattern == '.')) {
            return Math(str+1, pattern+1);
        }
        else {
            return false;
        }
    }
    else {
        if (*str == *pattern || (*str != '\0' && *pattern == '.')) {
            return Math(str+1, pattern) || Math(str, pattern+2);
        }
        else {
            return Math(str, pattern+2);
        }
    }
}
