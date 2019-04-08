//
//  InterviewProblem6.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/25.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的是前序遍历和中序遍历的结果中都不含
//  重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}

#include "InterviewProblem6.hpp"

BinaryTreeNode * Construct(int *preorder, int *inorder, int length) {
    if (preorder == NULL || inorder == NULL || length <= 0) {
        return NULL;
    }
    
    int root = preorder[0];
    BinaryTreeNode *rootNode = new BinaryTreeNode(root);
    
    int *rootInorder = inorder;
    int rootIndex = 0;
    while (rootInorder - inorder <= length - 1 && *rootInorder != root) {
        rootInorder++;
        rootIndex++;
    }
    
    if (rootIndex >= length) {
        printf("invaild input");
        return NULL;
    }
    
    if (rootIndex > 0) {
        rootNode->leftNode = Construct(preorder+1, inorder, rootIndex);
    }
    
    if (rootIndex < length - 1) {
        rootNode->rightNode = Construct(preorder + rootIndex + 1, rootInorder + 1, length - rootIndex - 1);
    }
    
    return rootNode;
}

void prePrintBinaryTree(BinaryTreeNode *rootNode) {
    if (rootNode == NULL) {
        return;
    }
    
    printf("%d", rootNode->value);
    
    if (rootNode->leftNode != NULL) {
        prePrintBinaryTree(rootNode->leftNode);
    }
    
    if (rootNode->rightNode != NULL) {
        prePrintBinaryTree(rootNode->rightNode);
    }
}
