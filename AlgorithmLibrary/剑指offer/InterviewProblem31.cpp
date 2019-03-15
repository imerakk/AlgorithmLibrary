//
//  InterviewProblem31.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/15.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个整型数组，数组里有正数也有负数。数组中一个或连续多个整数组成
//  一个子数组。求所有子数组的和的最大值。要求时间复杂度为O(n)

#include "InterviewProblem31.hpp"

bool g_InvaildInput = false;

int FindMaxSumOfSubArray(int *data, int length) {
    if (data == NULL || length <= 0) {
        g_InvaildInput = true;
        return 0;
    }
    
    g_InvaildInput = false;
    
    int currentSum = 0;
    int maxSum = 0;
    for (int i=0; i<length; i++) {
        currentSum += data[i];
        
        if (i == 0) {
            maxSum = currentSum;
        }
        else if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    
    return maxSum;
}
