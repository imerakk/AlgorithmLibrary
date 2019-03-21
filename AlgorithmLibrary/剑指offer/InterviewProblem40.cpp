//
//  InterviewProblem40.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/21.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  一个整型数组里除了两个数字之外。其他数字都出现了两次。
//  请写程序找出这两个只出现一次的数字。要求时间复杂度O(n)，
//  空间复杂度O(1)

#include "InterviewProblem40.hpp"

void FindFirstNumber(int *data, int length, int *num1, int *num2) {
    if (data == NULL || length <= 1) {
        return;
    }
    
    int number = 0;
    for (int i=0; i<length; i++) {
        number ^= data[i];
    }
    
    int index = 0;
    for (; index<8*sizeof(int); index++) {
        if (number & 1) {
            break;
        }
        number >>= 1;
    }
    
    if (index == 8*sizeof(int)) {
        return;
    }
    
    *num1 = *num2 = 0;
    for (int i=0; i<length; i++) {
        if ((data[i] >> index) & 1) {
            *num1 ^= data[i];
        }
        else {
            *num2 ^= data[i];
        }
    }
}
