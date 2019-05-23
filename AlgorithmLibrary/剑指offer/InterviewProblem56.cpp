//
//  InterviewProblem56.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/3.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  一个链表中包含环，请找出该链表的环的入口结点

#include "InterviewProblem56.hpp"
#include "ListNode.hpp"

ListNode * EntryNodeOfLoop(ListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    
    ListNode *pSlow = pHead;
    ListNode *pFast = pHead;
    
    do {
        if (pFast->next->next != NULL && pSlow->next != NULL) {
            pFast = pFast->next->next;
            pSlow = pSlow->next;
        }
        else {
            return NULL;
        }
    } while (pFast != pSlow);
    
    pFast = pHead;
    while (pFast != pSlow) {
        pFast = pFast->next;
        pSlow = pSlow->next;
    }
    
    return pFast;
}
