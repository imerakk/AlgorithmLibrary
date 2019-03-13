//
//  InterviewProblem27.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/13.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一颗二叉搜索树，将该二叉树转换成一个排序的双向链表
//  要求不能创建任何新的结点，只能调整树中结点指针的指向

#include "InterviewProblem27.hpp"

BinaryTreeNode *ConvertRecursion(BinaryTreeNode *pNode, BinaryTreeNode **pLastNode) {
    BinaryTreeNode *pHead = pNode;
    
    if (pNode->leftNode != NULL) {
        pHead = ConvertRecursion(pNode->leftNode, pLastNode);
    }
    
    pNode->leftNode = *pLastNode;
    if (*pLastNode != NULL) {
        (*pLastNode)->rightNode = pNode;
    }
    *pLastNode = pNode;

    if (pNode->rightNode != NULL) {
        ConvertRecursion(pNode->rightNode, pLastNode);
    }
    
    return pHead;
}

BinaryTreeNode *Convert(BinaryTreeNode *pRootTree) {
    if (pRootTree == NULL) {
        return NULL;
    }
    
    BinaryTreeNode *pLastNode = NULL;
    BinaryTreeNode *headNode = ConvertRecursion(pRootTree, &pLastNode);
    return headNode;
}



