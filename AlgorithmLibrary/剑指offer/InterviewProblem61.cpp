//
//  InterviewProblem61.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/8.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现一个函数按照之字形打印二叉树，即第一行按照从左到右
//  的顺序打印，第二层按照从右到左的顺序打印，第三行按照从左
//  到右的顺序打印，其它行以此类推

#include "InterviewProblem61.hpp"
#include <vector>
#include <queue>

using namespace std;

void Print1(BinaryTreeNode *pRoot) {
    if (pRoot == NULL) {
        return;
    }
    
    queue<BinaryTreeNode *> queue;
    queue.push(pRoot);
    bool even = false;
    
    while (!queue.empty()) {
        vector<BinaryTreeNode *> vector;
        size_t size = queue.size();
        
        for (int i=0; i<size; i++) {
            BinaryTreeNode *node = queue.front();
            queue.pop();
            vector.push_back(node);
            
            if (node->leftNode) {
                queue.push(node->leftNode);
            }
            if (node->rightNode) {
                queue.push(node->rightNode);
            }
        }
        
        if (even) {
            reverse(vector.begin(), vector.end());
        }
        even = !even;

        size = vector.size();
        for (int i=0; i<size; i++) {
            BinaryTreeNode *node = vector[i];
            printf("%d ", node->value);
        }
        printf("\n");
    }
}
