//
//  InterviewProblem41.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/22.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个递增的数组和一个数字s，在数组中查找两个数，
//  使得它们的和正好是s。如果有多对数字的和等于s，输出
//  任意一对即可

#include "InterviewProblem41.hpp"

bool FindNumberWithSum(int *data, int length, int sum) {
    bool found = false;
    if (data == NULL || length <= 1) {
        return found;
    }
    
    int ahead = 0;
    int behind = length - 1;
    
    while (ahead < behind) {
        int currentSum = data[ahead] + data[behind];
        if (currentSum == sum) {
            printf("firstNumber:%d \t sencondNumber:%d", data[ahead], data[behind]);
            found = true;
            break;
        }
        else if (currentSum > sum) {
            behind--;
        }
        else {
            ahead++;
        }
    }
    
    return found;
}


//  输入一个正数s，打印出所有和为s的连续正数序列（至少含有两个数）。例如输入15
//  由于1+2+3+4+5=4+5+6=7+8=15，所以结果打印出三个连续序列1~5，4~6，7~8

void PrintSequenceNum(int small, int big) {
    for (int i=small; i<=big; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void FindNumbersWithSum(int sum) {
    if (sum < 3) {
        return;
    }
    int small = 1;
    int big = 2;
    int currentSum = small + big;
    while (small < (sum + 1) / 2) {
        if (currentSum == sum) {
            PrintSequenceNum(small, big);
            big++;
            currentSum += big;
        }
        else if (currentSum > sum) {
            currentSum -= small;
            small++;
        }
        else if (currentSum < sum) {
            big++;
            currentSum += big;
        }
    }
}
