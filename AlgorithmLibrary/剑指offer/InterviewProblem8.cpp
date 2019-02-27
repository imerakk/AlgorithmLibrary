//
//  InterviewProblem8.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/27.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  把一个数组最开始的若干元素搬到数组的末尾，我们称之为数组的旋转
//  输入一个递增排序的数组的一个旋转，输出旋转数组的最小元素。例如
//  数组{3, 4, 5, 1, 2}为{1, 2, 3, 4, 5}的一个旋转，该数组的
//  最小值为1。

#include "InterviewProblem8.hpp"

int Min(int *number, int length) {
    if (number == NULL || length <= 0) {
        printf("invail input");
        return -1;
    }
    
    if (length == 1) {
        return number[0];
    }

    int start = 0;
    int end = length - 1;
    while (end - start > 1) {
        int middle = (start + end) / 2;
        
        if (number[middle] == number[start] && number[middle] == number[end]) {
            int min = number[0];
            for (int i = 1; i < length; i++) {
                if (number[i] < min) {
                    min = number[i];
                    
                }
            }
            return min;
        }
        
        if (number[middle] >= number[start]) {
            start = middle;
        }
        
        if (number[middle] <= number[end]) {
            end = middle;
        }
    }

    return number[end];
}

int HalfFind(int *number, int start, int end) {
    if (end - start > 1) {
        int middle = (start + end) / 2;
        if (number[middle] == number[start] && number[middle] == number[end]) {
            int min = number[0];
            int index = 0;
            for (int i = 1; i <= start - end; i++) {
                if (number[i] < min) {
                    min = number[i];
                    index = i;
                }
            }
            return index;
        }

        if (number[middle] >= number[start]) {
            start = middle;
        }
        
        if (number[middle] <= number[end]) {
            end = middle;
        }
        
        end = HalfFind(number, start, end);
    }
    
    return end;
}

int Min1(int *number, int length) {
    if (number == NULL || length <= 0) {
        printf("invail input");
        return -1;
    }
    
    if (length == 1) {
        return number[0];
    }
    
    int start = 0;
    int end = length - 1;
    int index = HalfFind(number, start, end);
    
    return number[index];
}


