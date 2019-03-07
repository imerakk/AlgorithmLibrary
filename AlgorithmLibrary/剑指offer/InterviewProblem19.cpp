//
//  InterviewProblem19.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/7.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请完成一个函数，输入一个二叉树，该函数输出它的镜像

#include "InterviewProblem19.hpp"
#include "BinaryTreeNode.hpp"
#include <stack>

using namespace std;

void Mirror(BinaryTreeNode *pRoot) {
    if (pRoot == NULL || (pRoot->leftNode == NULL && pRoot->rightNode == NULL)) {
        return;
    }
    
    BinaryTreeNode *temp = pRoot->leftNode;
    pRoot->leftNode = pRoot->rightNode;
    pRoot->rightNode = temp;

    if (pRoot->leftNode != NULL) {
        Mirror(pRoot->leftNode);
    }
    
    if (pRoot->rightNode != NULL) {
        Mirror(pRoot->rightNode);
    }
}

void MirrorLoop(BinaryTreeNode *pRoot) {
    if (pRoot == NULL || (pRoot->leftNode == NULL && pRoot->rightNode == NULL)) {
        return;
    }
    
    stack<BinaryTreeNode *> nodeStack;
    nodeStack.push(pRoot);
    while (!nodeStack.empty()) {
        BinaryTreeNode *node = nodeStack.top();
        nodeStack.pop();
        
        BinaryTreeNode *tempNode = node->leftNode;
        node->leftNode = node->rightNode;
        node->rightNode = tempNode;
        
        if (node->leftNode != NULL) {
            nodeStack.push(node->leftNode);
        }
        
        if (node->rightNode != NULL) {
            nodeStack.push(node->rightNode);
        }
    }
}
