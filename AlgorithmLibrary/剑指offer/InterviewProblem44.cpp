//
//  InterviewProblem44.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/26.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  从扑克牌中随机抽取5张牌，判断是不是一个顺子，即这5张牌
//  是不是连续的。2~10为数字本身，A为1，j为11，q为12，k为13
//  而大小王可以看成任意数子。

#include "InterviewProblem44.hpp"
#include <stdlib.h>

int compare(const void *arg1, const void *arg2) {
    return *(int *)arg1 - *(int *)arg2;
}

bool IsContinuous(int *number, int length) {
    if (number == NULL || length <= 0) {
        return false;
    }
    
    qsort(number, length, sizeof(int), compare);
    
    int numberOfZero = 0;
    for (int i=0; i<length; i++) {
        if (number[i] == 0) {
            numberOfZero ++;
        }
        else {
            break;
        }
    }
    
    if (numberOfZero >= length) {
        return false;
    }
    
    int small = numberOfZero;
    int big = small + 1;
    int numberOfGap = 0;
    while (big < length) {
        if (number[small] == number[big]) {
            return false;
        }
        
        numberOfGap = number[big] - number[small] - 1;
        small = big;
        big++;
    }
    
    return numberOfZero >= numberOfGap;
}
