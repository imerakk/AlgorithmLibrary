//
//  InterviewProblem13.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/4.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  给定单向链表的头指针和一个结点指针，定义一个函数在O(1)时间
//  删除该结点。该链表结点与函数的定义如下：

#include "InterviewProblem13.hpp"

void DeleteNode(ListNode **pListNode, ListNode *pToBeDeleted) {
    if (*pListNode == NULL || pListNode == NULL || pToBeDeleted == NULL) {
        return;
    }
    
    if (pToBeDeleted->next != NULL) { //不是尾结点
        ListNode *nextNode = pToBeDeleted->next;
        pToBeDeleted->next = nextNode->next;
        pToBeDeleted->val = nextNode->val;
        nextNode->next = NULL;
        
        delete nextNode;
        nextNode = NULL;
    }
    else {
        ListNode *headNode = *pListNode;
        if (headNode == pToBeDeleted) {
            delete pToBeDeleted;
            pToBeDeleted = NULL;
            *pListNode = NULL;
            headNode = NULL;
        }
        else {
            while (headNode->next != pToBeDeleted) {
                headNode = headNode->next;
            }
            
            headNode->next = NULL;
            delete pToBeDeleted;
            pToBeDeleted = NULL;
        }
    }
}
