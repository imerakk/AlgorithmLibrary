//
//  InterviewProblem30.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/14.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入n个整数，找出其中最小的k个数。例如输入4，5，1，6，2，7，3，8
//  这8个数字，则最小的4个数字是1，2，3，4

#include "InterviewProblem30.hpp"

int Partition(int *number, int length, int start, int end) {
    if (number == NULL || length <= 0) {
        return -1;
    }
    
    int index = start - 1;
    int small = end;
    for (int i=start; i<end; i++) {
        if (number[i] < number[small]) {
            index++;
            if (index != i) {
                int temp = number[index];
                number[index] = number[i];
                number[i] = temp;
            }
        }
    }
    
    index++;
    int temp = number[small];
    number[small] = number[index];
    number[index] = temp;
    
    for (int i=0; i<length; i++) {
        printf("%d ", number[i]);
    }
    
    printf("\n");
    
    return index;
}

void GetLeastNumber(int *number, int *output, int length, int k) {
    if (number == NULL || output == NULL || length <= 0 || k <= 0 || k > length) {
        return;
    }
    
    int start = 0;
    int end = length - 1;
    int index = Partition(number, length, start, end);
    
    while (index != k - 1) {
        if (index > k - 1) {
            end = index - 1;
            index = Partition(number, length, start, end);
        }
        
        if (index < k - 1) {
            start = index + 1;
            index = Partition(number, length, start, end);
        }
    }
    
    for (int i=0; i<k; i++) {
        output[i] = number[i];
    }
}
