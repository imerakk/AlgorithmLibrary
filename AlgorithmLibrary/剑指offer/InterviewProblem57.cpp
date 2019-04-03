//
//  InterviewProblem57.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/3.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点
//  重复的结点不保留，返回链表头指针

#include "InterviewProblem57.hpp"

ListNode * DeleteDuplication(ListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    
    ListNode *pFirst = new ListNode();
    pFirst->pNext = pHead;
    ListNode *pLast = pFirst;
    while (pHead != NULL && pHead->pNext != NULL) {
        if (pHead->value == pHead->pNext->value) {
            int value = pHead->value;
            while (pHead != NULL && pHead->value == value) {
                pHead = pHead->pNext;
            }
            
            pLast->pNext = pHead;
        }
        else {
            pLast = pHead;
            pHead = pHead->pNext;
        }
    }
    
    return pFirst->pNext;
}
