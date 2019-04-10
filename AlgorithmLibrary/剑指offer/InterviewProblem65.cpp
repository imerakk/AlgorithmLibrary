//
//  InterviewProblem65.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/10.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  给定一个数组和滑动窗口的大小，找出所有滑动窗口里数值的最大值

#include "InterviewProblem65.hpp"

vector<int> maxInWindows(vector<int> num, int size) {
    vector<int> res;
    if (num.size() == 0 || size <= 0) {
        return res;
    }
    
    deque<int> queue;
    for (int i=0; i<num.size(); i++) {
        while (queue.size() > 0 && num[queue.back()] <= num[i]) {
            queue.pop_back();
        }
        
        while (queue.size() > 0 && i - queue.front() >= size) {
            queue.pop_front();
        }
        
        queue.push_back(i);
        
        if (i >= size-1) {
            res.push_back(num[queue.front()]);
        }
    }
    
    return res;
}
