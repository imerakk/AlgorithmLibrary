//
//  InterviewProblem55.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/2.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数用来找出字符流中第一个只出现一次的字符。例如，当从字符流
//  中只读出前两个字符"go"时，第一个只出现一次的字符是"g"。当从该字符
//  中读出前六个字符"google"时，第一个只出现一次的字符是"l"。
//  如果当前字符流没有存在出现一次的字符，返回#字符。

#include "InterviewProblem55.hpp"

char FindAppearingOnce(char *str) {
    if (str == NULL || *str == '\0') {
        return '#';
    }
    
    char hash[256];
    for (int i=0; i<256; i++) {
        hash[i] = 0;
    }
    
    char *head = str;
    while (*str != '\0') {
        hash[*str] += 1;
        str ++;
    }
    
    str = head;
    while (*str != '\0') {
        if (hash[*str] == 1) {
            return *str;
        }
        else {
            str ++;
        }
    }
    
    return '#';
}
