//
//  InterviewProblem16.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/5.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  定义一个函数，输入一个链表的头结点，反转该链表
//  并输出反转后链表的头结点

#include "InterviewProblem16.hpp"

ListNode * ReverseListNode(ListNode *nodeHead) {
    if (nodeHead == NULL) {
        return NULL;
    }
    
    ListNode *node = nodeHead;
    ListNode *nextNode = NULL;
    ListNode *preNode = NULL;
    while (node != NULL) {
        nextNode = node->next;
        node->next = preNode;
        
        preNode = node;
        node = nextNode;
    }
    
    return preNode;
}

ListNode * ReversListNode1(ListNode *nodeHead) {
    if (nodeHead == NULL || nodeHead->next == NULL) {
        return nodeHead;
    }

    ListNode *newHead = ReverseListNode(nodeHead->next);
    nodeHead->next->next = nodeHead;
    nodeHead->next = NULL;
    
    return newHead;
}

