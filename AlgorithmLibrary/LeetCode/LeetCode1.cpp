//
//  LeetCode1.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/23.
//  Copyright © 2019年 imera. All rights reserved.
//  Given a binary tree, find its minimum depth.The minimum depth is the number of nodes
//  along the shortest path from the root node down to the nearest leaf node.

#include "LeetCode1.hpp"
#include "BinaryTreeNode.hpp"
#include <queue>

using namespace std;

int run(BinaryTreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    
    queue<BinaryTreeNode *> nodes;
    nodes.push(root);
    int depth = 0;
    while (!nodes.empty()) {
        depth ++;
        
        size_t len = nodes.size();
        for (size_t i=0; i<len; i++) {
            BinaryTreeNode *node = nodes.front();
            nodes.pop();
            if (node->leftNode == NULL && node->rightNode == NULL) {
                return depth;
            }
            
            if (node->leftNode != NULL) {
                nodes.push(node->leftNode);
            }
            
            if (node->rightNode != NULL) {
                nodes.push(node->rightNode);
            }
        }
    }
    
    return 0;
}
