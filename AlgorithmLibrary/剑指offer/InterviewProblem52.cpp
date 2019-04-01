//
//  InterviewProblem52.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/1.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1]
//  其中B中的元素B[i]=A[0]A[1]...*A[i-1]A[i+1]...*A[n-1]
//  不能使用除法

#include "InterviewProblem52.hpp"

void Multiply(int *data, int length, int *multiArray) {
    if (data == NULL || length <= 0) {
        return;
    }
    
    for (int i=0; i<length; i++) {
        if (i == 0) {
            multiArray[i] = 1;
        }
        else {
            multiArray[i] = multiArray[i-1]*data[i-1];
        }
    }
    
//    for (int i=0; i<length; i++) {
//        printf("%d ", data[i]);
//    }
//    
//    printf("\n");
//    for (int i=0; i<length; i++) {
//        printf("%d ", multiArray[i]);
//    }
    
    int temp = 1;
    for (int i=length-1; i>=0; i--) {
        multiArray[i] *= temp;
        temp *= data[i];
    }
}
