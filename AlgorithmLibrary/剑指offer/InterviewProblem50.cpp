//
//  InterviewProblem50.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/29.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  求二叉搜索树中两个结点的最低公共祖先

#include "InterviewProblem50.hpp"
#include "BinaryTreeNode.hpp"

BinaryTreeNode * GetLastCommonNode(BinaryTreeNode *pRoot, BinaryTreeNode *pNode1, BinaryTreeNode *pNode2) {
    if (pRoot == NULL || pNode1 == NULL || pNode2 == NULL) {
        return NULL;
    }
    
    int flag1 = pRoot->value - pNode1->value;
    int flag2 = pRoot->value - pNode2->value;
    BinaryTreeNode *commonNode = NULL;
    if (flag1 > 0 && flag2 > 0) {
        commonNode = GetLastCommonNode(pRoot->leftNode, pNode1, pNode2);
    }
    else if (flag1 < 0 && flag2 < 0) {
        commonNode = GetLastCommonNode(pRoot->rightNode, pNode1, pNode2);
    }
    
    return commonNode;
}



