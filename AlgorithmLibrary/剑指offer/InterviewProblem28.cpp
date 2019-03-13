//
//  InterviewProblem28.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/13.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个字符串，打印出该字符串中字符的所有排列。例如
//  输入字符串abc，则打印出a，b，c所能排列出来的所有字符
//  abc，acb，bac，bca，cab和cba

#include "InterviewProblem28.hpp"

void Permutation(char *str, char *begin) {
    if (*begin == '\0') {
        printf("%s\t", str);
    }
    else {
        for (char *pChar = begin; *pChar != '\0'; pChar++) {
            char temp = *begin;
            *begin = *pChar;
            *pChar = temp;
            
            Permutation(str, begin + 1);
            
            *pChar = *begin;
            *begin = temp;
        }
    }
}

void Permutation(char *str) {
    if (str == NULL) {
        return;
    }
    
    Permutation(str, str);
}
