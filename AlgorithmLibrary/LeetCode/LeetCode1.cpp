//
//  LeetCode1.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/5/22.
//  Copyright © 2019年 imera. All rights reserved.
//  给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那两个整数，并返回他们的数组下标

#include "LeetCode1.hpp"

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    if (nums.size() == 0) {
        return res;
    }
    
    map<int, int> tempMap;
    for (int i=0; i<nums.size(); i++) {
        if (tempMap.count(target - nums[i])) {
            res.push_back(tempMap[target - nums[i]]);
            res.push_back(i);
            break;
        }
        
        tempMap[nums[i]] = i;
    }
    
    return res;
}

