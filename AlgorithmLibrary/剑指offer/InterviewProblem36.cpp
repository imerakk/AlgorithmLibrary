//
//  InterviewProblem36.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/19.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  在数组中的两个数字如果前面一个数字大于后面的数字，则这两个数字组成
//  逆序对。输入一个数组，求出这个数组中的逆序对的总数

#include "InterviewProblem36.hpp"

int MergeSort(int *array, int *copyArray, int start, int end) {
    if (start >= end) {
        return 0;
    }
    
    int mid = (start + end) >> 1;
    int left = MergeSort(array, copyArray, start, mid);
    int right = MergeSort(array, copyArray, mid + 1, end);
    
    int lowIndex = start;
    int highIndex = mid + 1;
    int copyIndex = start;
    int count = 0;
    while (lowIndex <=mid && highIndex <= end) {
        if (array[lowIndex] <= array[highIndex]) {
            copyArray[copyIndex++] = array[lowIndex++];
        }
        else {
            copyArray[copyIndex++] = array[highIndex++];
            count += mid - lowIndex + 1;
        }
    }
    
    while (lowIndex <= mid) {
        copyArray[copyIndex++] = array[lowIndex++];
    }
    
    while (highIndex <= end) {
        copyArray[copyIndex++] = array[highIndex++];
    }
    
    for (int i=start; i<=end; i++) {
        array[i] = copyArray[i];
    }
    
    return left + right + count;
}

int InversePairs(int *array, int length) {
    if (array == NULL || length <= 1) {
        return 0;
    }
    
    int *copyArray = new int[length];
    for (int i=0; i<length; i++) {
        copyArray[i] = 0;
    }
    
    int count = MergeSort(array, copyArray, 0, length - 1);
    delete [] copyArray;
    return count;
}
