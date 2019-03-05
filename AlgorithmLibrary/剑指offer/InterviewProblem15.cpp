//
//  InterviewProblem15.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/5.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个链表，输出该链表倒数第k个结点。为了符合大多数人的习惯。本题从1开始计数，即
//  链表的尾结点是倒数第一个结点。例如一个链表有6个结点，从头k结点开始它们的值依次
//  是1，2，3，4，5，6。这个链表的倒数第三个结点的值为4的结点

#include "InterviewProblem15.hpp"

ListNode * FindKthToTail(ListNode *listHead, unsigned int k) {
    if (listHead == NULL || k == 0) {
        return NULL;
    }
    
    ListNode *pAhead = listHead;
    ListNode *pBehind = listHead;
    
    while (pAhead->pNext != NULL) {
        if (k == 1) {
            pBehind = pBehind->pNext;
        }
        else {
            k--;
        }
        
        pAhead = pAhead->pNext;
    }
    
    if (k > 1) {
        return NULL;
    }
    
    return pBehind;
}
