//
//  InterviewProblem39.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/21.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个二叉树的根节点，求该树的深度。从根节点到叶节点依次经过的结点
//  （含根，叶节点）形成树的一条路径，最长路径的长度为树的深度

#include "InterviewProblem39.hpp"
#include "BinaryTreeNode.hpp"

int TreeDepth(BinaryTreeNode *pRoot) {
    if (pRoot == NULL) {
        return 0;
    }
    int nLeft = TreeDepth(pRoot->leftNode);
    int nRight = TreeDepth(pRoot->rightNode);
    
    return nLeft > nRight ? (nLeft + 1) : (nRight + 1);
}

bool IsBalancedTree(BinaryTreeNode *pRoot, int *depth) {
    if (pRoot == NULL) {
        return true;
    }
    
    int leftDepth = 0;
    int rightDepth = 0;
    if (IsBalancedTree(pRoot->leftNode, &leftDepth) && IsBalancedTree(pRoot->rightNode, &rightDepth)) {
        int diff = rightDepth - leftDepth;
        if (diff <= 1 && diff >= -1) {
            *depth = (rightDepth > leftDepth ? rightDepth : leftDepth) + 1;
            return true;
        }
    }
    
    return false;
}

bool IsBalancedTree(BinaryTreeNode *pRoot) {
    int depth = 0;
    return IsBalancedTree(pRoot, &depth);
}
