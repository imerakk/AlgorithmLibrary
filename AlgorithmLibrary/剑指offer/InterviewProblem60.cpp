//
//  InterviewProblem60.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/8.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。

#include "InterviewProblem60.hpp"
#include <queue>

using namespace std;

void Print(BinaryTreeNode *pRoot) {
    if (pRoot == NULL) {
        return;
    }
    
    queue<BinaryTreeNode *> queue;
    queue.push(pRoot);
    
    while (!queue.empty()) {
        size_t size = queue.size();
        for (size_t index = 0; index < size; index++) {
            BinaryTreeNode *node = queue.front();
            queue.pop();
            printf("%d ", node->value);
            if (node->leftNode) {
                queue.push(node->leftNode);
            }
            if (node->rightNode) {
                queue.push(node->rightNode);
            }
        }
        printf("\n");
    }
}


