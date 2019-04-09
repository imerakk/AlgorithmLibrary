//
//  InterviewProblem62.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/9.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem62_hpp
#define InterviewProblem62_hpp

#include <stdio.h>
#include <string>
#include "BinaryTreeNode.hpp"

using namespace std;

char * Serialize(BinaryTreeNode *pRoot);
BinaryTreeNode * Deserialize(char *str);

#endif /* InterviewProblem62_hpp */
