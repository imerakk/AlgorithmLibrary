//
//  InterviewProblem63.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/9.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  给定一个二叉搜索树，请找出其中的第k大的结点

#include "InterviewProblem63.hpp"

BinaryTreeNode *KthNode(BinaryTreeNode *root, unsigned int k, unsigned int *count) {
    if (root == NULL) {
        return NULL;
    }
    
    BinaryTreeNode *node = KthNode(root->leftNode, k, count);
    if (node != NULL) {
        return node;
    }
    
    if (*count == k) {
        return root;
    }
    (*count)++;
    
    node = KthNode(root->rightNode, k, count);
    if (node != NULL) {
        return node;
    }
    
    return NULL;
}

BinaryTreeNode *KthNode(BinaryTreeNode *node, unsigned int k) {
    if (node == NULL || k == 0) {
        return NULL;
    }
    
    unsigned int count = 1;
    return KthNode(node, k, &count);
}
