//
//  InterviewProblem58.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/4.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem58_hpp
#define InterviewProblem58_hpp

#include <stdio.h>

struct TreeLinkNode {
    int val;
    TreeLinkNode *left;
    TreeLinkNode *right;
    TreeLinkNode *parent;
};

TreeLinkNode *FindNextNode(TreeLinkNode *pRoot, TreeLinkNode *node);

#endif /* InterviewProblem58_hpp */
