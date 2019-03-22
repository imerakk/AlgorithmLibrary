//
//  InterviewProblem42.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/22.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变
//  为简单起见，标点符号和普通字母一样处理。例如输入字符串”I am a student“
//  则输出”student a am I“

#include "InterviewProblem42.hpp"

void Reverse(char *pBegin, char *pEnd) {
    if (pBegin == NULL || pEnd == NULL) {
        return;
    }
    
    while (pBegin < pEnd) {
        char temp = *pBegin;
        *pBegin = *pEnd;
        *pEnd = temp;
        pBegin ++;
        pEnd --;
    }
}

void ReverseSentence(char *pData) {
    if (pData == NULL) {
        return;
    }
    
    char *pBegin = pData;
    char *pEnd = pData;
    while (*pEnd != '\0') {
        pEnd++;
    }
    pEnd--;
    
    Reverse(pBegin, pEnd);
    
    pBegin = pEnd = pData;
    while (*pBegin != '\0') {
        if (*pBegin == ' ') {
            pBegin ++;
            pEnd ++;
        }
        else if (*pEnd == ' ' || *pEnd == '\0') {
            Reverse(pBegin, --pEnd);
            pBegin = ++pEnd;
        }
        else {
            pEnd++;
        }
    }
}

// 字符串的坐旋转操作是把字符串前面的若干字符转移到字符串的尾部
// 请定义一个函数实现字符串左旋转操作的功能。比如输入字符串
// ”abcdefg“和数字2，该函数将返回左旋转2位得到的结果”cdefgab“
void LeftRotateReverse(char *pData, int n) {
    if (pData == NULL || n <= 0) {
        return;
    }
    
    char *pEnd = pData;
    while (*pEnd != '\0') {
        pEnd++;
    }
    
    long length = pEnd - pData;
    if (length <= 0 || n > length) {
        return;
    }
    
    char *pFirstStrStart = pData;
    char *pFirstStrEnd = pData + n - 1;
    char *pSecondStrStart = pData + n;
    char *pSecondStrEnd = pData + length - 1;
    Reverse(pFirstStrStart, pFirstStrEnd);
    Reverse(pSecondStrStart, pSecondStrEnd);
    Reverse(pFirstStrStart, pSecondStrEnd);
}
