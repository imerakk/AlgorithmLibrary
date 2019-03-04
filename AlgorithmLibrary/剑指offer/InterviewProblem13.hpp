//
//  InterviewProblem13.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/4.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem13_hpp
#define InterviewProblem13_hpp

#include <stdio.h>

struct ListNode {
    int value;
    ListNode *pNext;
};

void DeleteNode(ListNode **pListNode, ListNode *pToBeDeleted);

#endif /* InterviewProblem13_hpp */
