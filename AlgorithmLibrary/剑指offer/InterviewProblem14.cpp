//
//  InterviewProblem14.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/4.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个整数数组，实现一个函数来调整该数组中数字的顺序，
//  使得所有奇数位于数组的前半部分，所有的偶数位于数组的后半部分

#include "InterviewProblem14.hpp"

void ReorderOddEven(int *pData, int length) {
    if (pData == NULL || length <= 0) {
        return;
    }
    
    int *pBegin = pData;
    int *pEnd = pData + length - 1;
    
    while (pBegin < pEnd) {
        while (pBegin < pEnd && (*pBegin & 0x1) != 0) {
            pBegin++;
        }
        
        while (pBegin < pEnd && (*pEnd & 0x1) == 0) {
            pEnd--;
        }
        
        if (pBegin < pEnd) {
            int temp = *pBegin;
            *pBegin = *pEnd;
            *pEnd = temp;
        }
    }
}
