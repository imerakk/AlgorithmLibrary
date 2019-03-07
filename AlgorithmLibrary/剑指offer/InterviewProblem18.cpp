//
//  InterviewProblem18.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/7.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入两棵树二叉树A和B，判断B是不是A的子结构。

#include "InterviewProblem18.hpp"

bool DoesTree1HaveTree2(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    if (pRoot2 == NULL) return true;
    if (pRoot1 == NULL) return false;
    if (pRoot1->value != pRoot2->value) return false;
    
    return DoesTree1HaveTree2(pRoot1->leftNode, pRoot2->leftNode) && DoesTree1HaveTree2(pRoot1->rightNode, pRoot2->rightNode);
}

bool HasSubTree(BinaryTreeNode *pRoot1, BinaryTreeNode *pRoot2) {
    if (pRoot1 == NULL || pRoot2 == NULL) {
        return false;
    }
    
    bool result = false;
    if (pRoot1->value == pRoot2->value) {
        result = DoesTree1HaveTree2(pRoot1, pRoot2);
    }
    
    if (!result) {
        result = HasSubTree(pRoot1->leftNode, pRoot2);
    }
    
    if (!result) {
        result = HasSubTree(pRoot1->rightNode, pRoot2);
    }
    
    return result;
}
