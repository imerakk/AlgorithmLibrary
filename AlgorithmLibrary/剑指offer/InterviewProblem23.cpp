//
//  InterviewProblem23.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/11.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  从上往下打印出二叉树的每个结点，同一层的结点按照从左到右的顺序打印

#include "InterviewProblem23.hpp"
#include <queue>

using namespace std;

void PrintFromTopToBottom(BinaryTreeNode *treeNodeRoot) {
    if (treeNodeRoot == NULL) {
        return;
    }
    
    queue<BinaryTreeNode *> treeNodes;
    treeNodes.push(treeNodeRoot);
    
    while(!treeNodes.empty()) {
        BinaryTreeNode *node = treeNodes.front();
        treeNodes.pop();
        printf("%d ", node->value);        
        
        if (node->leftNode != NULL) {
            treeNodes.push(node->leftNode);
        }
        
        if (node->rightNode != NULL) {
            treeNodes.push(node->rightNode);
        }
    }
}
