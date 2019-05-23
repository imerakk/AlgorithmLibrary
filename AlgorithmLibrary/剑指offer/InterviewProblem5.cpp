//
//  InterviewProblem5.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/23.
//  Copyright © 2019年 imera. All rights reserved.
//
//  题意：
//  输入一个链表的头结点，从尾到头反回来打印每个结点的值

#include "InterviewProblem5.hpp"
#include "stack"

struct ListNode {
    int val;
    ListNode *pNext;
};

void AddToTail(ListNode **pHead, int value) {
    ListNode *newNode = new ListNode();
    newNode->val = value;
    newNode->pNext = NULL;
    
    if (*pHead == NULL) {
        *pHead = newNode;
    }
    else {
        ListNode *pNode = *pHead;
        
        while (pNode->pNext != NULL) {
            pNode = pNode->pNext;
        }
        
        pNode->pNext = newNode;
    }
}

void PrintListReverse(ListNode *headNode) {
    std::stack<ListNode *>nodes;
    
    ListNode *pNode = headNode;
    while (pNode != NULL) {
        nodes.push(pNode);
        pNode = pNode->pNext;
    }
    
    while (!nodes.empty()) {
        printf("%d", nodes.top()->val);
        nodes.pop();
    }
}

void PrintListReverse1(ListNode *headNode) {
    if (headNode != NULL) {
        if (headNode->pNext != NULL) {
            PrintListReverse1(headNode->pNext);
        }
        
        printf("%d", headNode->val);
    }
}
