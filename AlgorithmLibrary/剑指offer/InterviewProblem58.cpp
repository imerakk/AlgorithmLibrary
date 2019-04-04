//
//  InterviewProblem58.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/4.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  给定一个二叉树和其中的一个结点，请找出中序遍历顺序下
//  的下一个结点并且返回。注意，树中的结点不仅包含左右
//  结点，同时包含指向父节点的指针

#include "InterviewProblem58.hpp"

TreeLinkNode *FindNextNode(TreeLinkNode *pRoot, TreeLinkNode *node) {
    if (pRoot == NULL || node == NULL) {
        return NULL;
    }
    
    if (node->right != NULL) {
        TreeLinkNode *nextNode = node->right;
        while (nextNode->left != NULL) {
            nextNode = nextNode->left;
        }
        
        return nextNode;
    }
    else {
        TreeLinkNode *parentNode = node->parent;
        
        while (parentNode != NULL && parentNode->right == node) {
            node = parentNode;
            parentNode = parentNode->parent;
        }
        return parentNode;
    }
}
