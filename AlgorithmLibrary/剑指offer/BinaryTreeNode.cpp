//
//  BinaryTreeNode.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/7.
//  Copyright © 2019年 imera. All rights reserved.
//

#include "BinaryTreeNode.hpp"

BinaryTreeNode * AddLeftNode(BinaryTreeNode *node, int value) {
    BinaryTreeNode *leftNode = new BinaryTreeNode();
    leftNode->value = value;
    node->leftNode = leftNode;
    return leftNode;
}

BinaryTreeNode * AddRightNode(BinaryTreeNode *node, int value) {
    BinaryTreeNode *rightNode = new BinaryTreeNode();
    rightNode->value = value;
    node->rightNode = rightNode;
    return rightNode;
}
