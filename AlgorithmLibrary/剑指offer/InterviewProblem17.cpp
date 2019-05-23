//
//  InterviewProblem17.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/6.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入两个递增排序的链表，合并这两个链表并使新链表中的结点仍然是按照递增排序的。

#include "InterviewProblem17.hpp"

ListNode * MergeListNode(ListNode *pHead1, ListNode *pHead2) {
    if (pHead1 == NULL) {
        return pHead2;
    }
    
    if (pHead2 == NULL) {
        return pHead1;
    }
    
    ListNode *headNode = NULL;
    if (pHead1->val < pHead2->val) {
        headNode = pHead1;
        pHead1 = pHead1->next;
    }
    else {
        headNode = pHead2;
        pHead2 = pHead2->next;
    }
    
    ListNode *newNode = headNode;
    while (pHead1 != NULL && pHead2 != NULL) {
        if (pHead1->val < pHead2->val) {
            newNode->next = pHead1;
            newNode = pHead1;
            pHead1 = pHead1->next;
        }
        else {
            newNode->next = pHead2;
            newNode = pHead2;
            pHead2 = pHead2->next;
        }
    }
    
    if (pHead1 == NULL) {
        newNode->next = pHead2;
    }
    else if (pHead2 == NULL) {
        newNode->next = pHead1;
    }
    
    return headNode;
}
