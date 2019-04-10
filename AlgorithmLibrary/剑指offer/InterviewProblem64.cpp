//
//  InterviewProblem64.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/10.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  如何得到一个数据流中的中位数？如果从数据流中读出奇数个数值，那么中位数
//  就是所有数值排序之后位于中间的数值。如果从数据流中读出偶数个数值，那么
//  中位数就是所有数值排序之后中间两个数的平均值

#include "InterviewProblem64.hpp"

void Solution64::Insert(int value) {
    if ((min.size() + max.size() & 1) == 0) {
        if (max.size() > 0 && value > max[0]) {
            max.push_back(value);
            push_heap(max.begin(), max.end(), less<int>());
            
            value = max[0];
            pop_heap(max.begin(), max.end(), less<int>());
            max.pop_back();
        }
        
        min.push_back(value);
        push_heap(min.begin(), min.end(), greater<int>());
    }
    else {
        if (min.size() > 0 && value < min[0]) {
            min.push_back(value);
            push_heap(min.begin(), min.end(), greater<int>());
            
            value = min[0];
            pop_heap(min.begin(), min.end(), greater<int>());
            min.pop_back();
        }
        
        max.push_back(value);
        push_heap(max.begin(), max.end(), less<int>());
    }
}

double Solution64::GetMedian() {
    if (max.size() == 0 && min.size() == 0) {
        return 0.0;
    }
    
    if ((max.size() + min.size() & 1) == 0) {
        return (max[0] + min[0]) / 2.0;
    }
    else {
        return min[0] * 1.0;
    }
}
