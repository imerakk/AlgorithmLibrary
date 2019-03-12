//
//  InterviewProblem25.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/12.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一棵二叉树和一个整数，打印出二叉树中结点的值的和为
//  输入整数的所有路径。从树的根节点开始往下一直到树结点所
//  经过的结点形成一条路径。

#include "InterviewProblem25.hpp"
#include "BinaryTreeNode.hpp"
#include <vector>

using namespace std;

void FindPath(BinaryTreeNode *pRoot, vector<int> path, int expectNumber, int currentNumber) {
    currentNumber += pRoot->value;
    path.push_back(pRoot->value);
    
    if (currentNumber == expectNumber && (pRoot->leftNode == NULL && pRoot->rightNode == NULL)) {
        for (int i=0; i<path.size(); i++) {
            printf("%d\t", path[i]);
        }
    }
    
    if (pRoot->leftNode != NULL) {
        FindPath(pRoot->leftNode, path, expectNumber, currentNumber);
    }
    
    if (pRoot->rightNode != NULL) {
        FindPath(pRoot->rightNode, path, expectNumber, currentNumber);
    }
}

void FindPath(BinaryTreeNode *pRoot, int num) {
    if (pRoot == NULL) {
        return;
    }
    
    vector<int> path;
    FindPath(pRoot, path, num, 0);
}


