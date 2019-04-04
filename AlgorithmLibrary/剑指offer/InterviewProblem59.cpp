//
//  InterviewProblem59.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/4.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数，用来判断一颗二叉树是不是对称的。
//  请注意，如果一个二叉树同此二叉树的镜像是同样的，定义为对称

#include "InterviewProblem59.hpp"
#include "BinaryTreeNode.hpp"
#include "stack"

using namespace std;

bool isSymmetrical(BinaryTreeNode *leftNode, BinaryTreeNode *rightNode) {
    if (leftNode == NULL && rightNode == NULL) {
        return true;
    }
    
    if (leftNode == NULL || rightNode == NULL) {
        return false;
    }
    
    if (leftNode->value != rightNode->value) {
        return false;
    }
    
    return isSymmetrical(leftNode->leftNode, rightNode->rightNode) && isSymmetrical(leftNode->rightNode, rightNode->leftNode);
}

bool isSymmetrical(BinaryTreeNode *pRoot) {
    if (pRoot == NULL) {
        return false;
    }
    
    return isSymmetrical(pRoot->leftNode, pRoot->rightNode);
}


