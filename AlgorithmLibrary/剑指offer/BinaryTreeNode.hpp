//
//  BinaryTreeNode.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/7.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include <stdio.h>

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *leftNode;
    BinaryTreeNode *rightNode;
    
    BinaryTreeNode(int x): value(x),leftNode(NULL),rightNode(NULL) {};
};

BinaryTreeNode * AddLeftNode(BinaryTreeNode *node, int value);
BinaryTreeNode * AddRightNode(BinaryTreeNode *node, int value);


#endif /* BinaryTreeNode_hpp */
