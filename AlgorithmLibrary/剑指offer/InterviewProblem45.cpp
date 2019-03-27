//
//  InterviewProblem45.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/26.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  0,1,...,n-1这n个数子排成一个圆圈，从数字0开始每次从这个圆圈里删除第
//  m个数子。求出这个圆圈里剩下的最后一个数字

#include "InterviewProblem45.hpp"

int LastRemain(int n, int m) {
    if (n <= 0 || m <= 0) {
        return -1;
    }
    
    int arr[n];
    for (int i=0; i<n; i++) {
        arr[i] = i;
    }
    
    int step = 0;
    int count = n;
    int i=-1;
    while (count > 0) {
        i++;
        if (i >= n) {
            i=0;
        }
        
        if (arr[i] == -1) {
            continue;
        }
        
        step++;
        if (step == m) {
            arr[i] = -1;
            step = 0;
            count--;
        }
    }
    
    return i;
}
