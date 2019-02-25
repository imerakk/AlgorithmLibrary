//
//  InterviewProblem6.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/25.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem6_hpp
#define InterviewProblem6_hpp

#include <stdio.h>

struct BinaryTreeNode {
    int value;
    BinaryTreeNode *leftNode;
    BinaryTreeNode *rightNode;
};

void prePrintBinaryTree(BinaryTreeNode *rootNode);

BinaryTreeNode * Construct(int *preorder, int *inorder, int length);

#endif /* InterviewProblem6_hpp */


