//
//  InterviewProblem24.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/12.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果
//  如果是则返回true，否则返回false。假设输入的数组的任意两个
//  数字都互不相同

#include "InterviewProblem24.hpp"

bool VerifySquenceOfBST(int *seqence, int length) {
    if (seqence == NULL || length <= 0) {
        return false;
    }
    
    int root = seqence[length - 1];
    
    int i = 0;
    for (; i < length - 1; i++) {
        if (seqence[i] > root) {
            break;
        }
    }
    
    int j = i;
    for (; j < length - 1; j++) {
        if (seqence[j] < root) {
            return false;
        }
    }
    
    bool left = true;
    if (i > 0) {
        left = VerifySquenceOfBST(seqence, i);
    }
    
    bool right = true;
    if (j < length - 1) {
        right = VerifySquenceOfBST(seqence + i, length - i - 1);
    }
    
    return (left && right);
}
