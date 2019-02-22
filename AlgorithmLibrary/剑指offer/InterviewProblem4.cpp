//
//  InterviewProblem4.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/22.
//  Copyright © 2019年 imera. All rights reserved.
//
//  题目描述
//  请实现一个函数，将一个字符串中的空格替换成“%20”。 例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

#include "InterviewProblem4.hpp"

void ReplaceBlank(char str[], int length) {
    if (str == NULL || length <= 0) {
        return;
    }
    
    int originalLength = 0;
    int blankNumber = 0;
    while (str[originalLength] != '\0') {
        if (str[originalLength] == ' ') {
            blankNumber ++;
        }
        originalLength ++;
    }
    
    int p1 = originalLength - 1;
    int p2 = originalLength - 1 + blankNumber * 2;
    if (p2 + 1 > length) {
        return;
    }
    
    while (p1 >= 0) {
        if (str[p1] == ' ') {
            str[p2--] = '0';
            str[p2--] = '2';
            str[p2--] = '%';
        }
        else {
            str[p2--] = str[p1];
        }
        
        p1--;
    }
}
