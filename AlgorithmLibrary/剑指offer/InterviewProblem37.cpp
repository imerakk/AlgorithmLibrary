//
//  InterviewProblem37.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/20.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入两个链表，找出它们的第一个公共结点。

#include "InterviewProblem37.hpp"

int GetListNodeLength(ListNode *pRootNode) {
    int length = 0;
    while (pRootNode != NULL) {
        length ++;
        pRootNode = pRootNode->next;
    }
    
    return length;
}

ListNode *FindFirstSameNode(ListNode *pRootNode1, ListNode *pRootNode2) {
    if (pRootNode1 == NULL || pRootNode2 == NULL) {
        return NULL;
    }
    
    int length1 = GetListNodeLength(pRootNode1);
    int length2 = GetListNodeLength(pRootNode2);
    
    ListNode *pShortHead = NULL;
    ListNode *pLongHead = NULL;
    int lengthDiff = 0;
    if (length1 > length2) {
        lengthDiff = length1 - length2;
        pShortHead = pRootNode2;
        pLongHead = pRootNode1;
    }
    else {
        lengthDiff = length2 - length1;
        pShortHead = pRootNode1;
        pLongHead = pRootNode2;
    }
    
    for (int i=0; i<lengthDiff; i++) {
        pLongHead = pLongHead->next;
    }
    
    ListNode *sameNode = NULL;
    while (pLongHead != NULL && pShortHead != NULL) {
        if (pLongHead == pShortHead) {
            sameNode = pLongHead;
            break;
        }
        
        pLongHead = pLongHead->next;
        pShortHead = pShortHead->next;
    }
    
    return sameNode;
}

