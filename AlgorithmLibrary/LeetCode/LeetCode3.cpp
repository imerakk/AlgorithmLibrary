//
//  LeetCode3.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/5/24.
//  Copyright © 2019年 imera. All rights reserved.
//  题目：
//  给定一个字符串，请你找出其中不含有重复字符的最长子串的长度。
//  示例 1:
//  输入: "abcabcbb"
//  输出: 3
//  解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。

#include "LeetCode3.hpp"
#include <unordered_set>

int lengthOfLongestSubstring(string s) {
    if(s.size() == 0) {
        return 0;
    }
    
    unordered_set<char> lookup;
    int maxLength = 0;
    int left = 0;
    for (int i=0; i<s.size(); i++) {
        while (lookup.find(s[i]) != lookup.end()) {
            lookup.erase(s[left++]);
        }
        
        maxLength = max(maxLength, i-left+1);
        lookup.insert(s[i]);
    }
    
    return maxLength;
    }
