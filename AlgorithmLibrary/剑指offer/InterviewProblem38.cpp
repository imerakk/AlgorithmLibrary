//
//  InterviewProblem38.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/20.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  统计一个数字在排序数组中出现的次数。例如输入排序数组{1,2,3,3,3,3,4,5}
//  和数字3，由于3在这个数组中出现了4次，因此输出4

#include "InterviewProblem38.hpp"

int GetFirstIndexOfK(int *data, int k, int start, int end) {
    if (start > end) {
        return -1;
    }
    
    int mid = (start + end) >> 1;
    if (data[mid] == k) {
        if ((mid != start && data[mid - 1] != k) || mid == start) {
            return mid;
        }
        else {
            end = mid - 1;
        }
    }
    else if (data[mid] > k) {
        end = mid - 1;
    }
    else {
        start = mid + 1;
    }
    
    return GetFirstIndexOfK(data, k, start, end);
}

int GetLastIndexOfK(int *data, int k, int start, int end) {
    if (start > end) {
        return -1;
    }
    
    int mid = (start + end) >> 1;
    if (data[mid] == k) {
        if ((mid != end && data[mid + 1] != k) || mid == end) {
            return mid;
        }
        else {
            start = mid + 1;
        }
    }
    else if (data[mid] > k) {
        end = mid - 1;
    }
    else {
        start = mid + 1;
    }
    
    return GetLastIndexOfK(data, k, start, end);
}

int GetNumberOfK(int *data, int length, int k) {
    if (data == NULL || length <= 0) {
        return 0;
    }
    
    int firstIndex = GetFirstIndexOfK(data, k, 0, length - 1);
    int lastIndex = GetLastIndexOfK(data, k, 0, length - 1);
    
    int number = 0;
    if (firstIndex > -1 && lastIndex > -1) {
        number = lastIndex - firstIndex + 1;
    }
    
    return number;
}
