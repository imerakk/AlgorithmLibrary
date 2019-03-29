//
//  InterviewProblem51.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/29.
//  Copyright © 2019年 imera. All rights reserved.
//  在一个长度为N的数组里所有数字都在0到N-1范围内
//  数组中某些数字是重复的，但不知道有几个数字是重复的
//  也不知道每个数字重复几次。请找出数组中任意一个重复的数字
//  例如。如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是重复的
//  数字2或者3

#include "InterviewProblem51.hpp"

bool Duplicate(int *number, int length, int *duplicateNumber) {
    if (number == NULL || length <= 0 || duplicateNumber == NULL) {
        return false;
    }
    
    *duplicateNumber = -1;
    
    for (int i=0; i<length; i++) {
        if (number[i] < 0 || number[i] >= length) {
            return false;
        }
    }
    
    int flag[length];
    for (int i=0; i<length; i++) {
        flag[i] = 0;
    }
    
    bool finded = false;
    for (int i=0; i<length; i++) {
        if (flag[number[i]] == 1) {
            *duplicateNumber = number[i];
            finded = true;
            break;
        }
        
        flag[number[i]] = 1;
    }
    
    return finded;
}
