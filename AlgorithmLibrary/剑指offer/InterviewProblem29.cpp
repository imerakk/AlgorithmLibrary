//
//  InterviewProblem29.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/14.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  数组中有一个数字出现的次数超过数组长度的一半，请
//  找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}
//  由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2

#include "InterviewProblem29.hpp"

int MoreThanHalfOfNum(int *number, int length) {
    if (number == NULL || length <= 0) {
        return 0;
    }
    
    int num = 0;
    int count = 0;
    for (int i=0; i<length; i++) {
        if (count == 0) {
            num = number[i];
            count = 1;
        }
        else {
            if (num == number[i]) {
                count++;
            }
            else {
                count--;
            }
        }
    }
    
    count = 0;
    for (int i=0; i<length; i++) {
        if (num == number[i]) {
            count++;
        }
    }
    
    if (count * 2 > length) {
        return num;
    }
    else {
        return 0;
    }
}
