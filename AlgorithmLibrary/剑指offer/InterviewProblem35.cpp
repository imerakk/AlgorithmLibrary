//
//  InterviewProblem35.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/19.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  在字符串中找出第一个只出现一次的字符。如输入"abaccdeff"，则输出'b'

#include "InterviewProblem35.hpp"

char FindFirstNotRepeatingChar(char *pString) {
    if (pString == NULL) {
        return '\0';
    }
    
    unsigned int hashTable[256];
    for (int i=0; i<256; i++) {
        hashTable[i] = 0;
    }
    
    char *pHashKey = pString;
    while (*pHashKey != '\0') {
        hashTable[*pHashKey]++;
        pHashKey++;
    }
    
    pHashKey = pString;
    while (*pHashKey != '\0') {
        if (hashTable[*pHashKey] == 1) {
            return *pHashKey;
        }
        pHashKey ++;
    }
    
    return '\0';
}
