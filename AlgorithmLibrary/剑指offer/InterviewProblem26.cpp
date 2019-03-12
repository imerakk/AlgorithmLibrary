//
//  InterviewProblem26.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/12.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现函数ComplexListNode *Clone(ComplexListNode *pHead),复制
//  一个复杂链表。在复杂链表中，每个结点除了有一个m_pNext指针指向下一个结点
//  外，还有一个m_pSibling指向链表中的任意结点或者NULL。结点的C++定义如下

struct ComplexListNode {
    int value;
    ComplexListNode *pNext;
    ComplexListNode *pSibling;
};

#include "InterviewProblem26.hpp"

ComplexListNode *Clone(ComplexListNode *pHead) {
    if (pHead == NULL) {
        return NULL;
    }
    
    ComplexListNode *currNode = pHead;
    while (currNode != NULL) {
        ComplexListNode *node = new ComplexListNode();
        node->value = currNode->value;
        
        ComplexListNode *nextNode = currNode->pNext;
        currNode->pNext = node;
        node->pNext = nextNode;
        currNode = nextNode;
    }
    
    currNode = pHead;
    while (currNode != NULL) {
        ComplexListNode *cloneNode = currNode->pNext;
        if (cloneNode->pSibling != NULL) {
            cloneNode->pSibling = currNode->pSibling->pNext;
        }
        else {
            cloneNode->pSibling = NULL;
        }
        
        currNode = currNode->pNext->pNext;
    }
    
    currNode = pHead;
    ComplexListNode *pNewHead = pHead->pNext;
    ComplexListNode *pNode = pHead->pNext;
    while (currNode != NULL) {
        currNode->pNext = currNode->pNext->pNext;
        if (pNode->pNext != NULL) {
            pNode->pNext = pNode->pNext->pNext;
        }
        else {
            pNode->pNext = NULL;
        }
        
        currNode = currNode->pNext;
        pNode = pNode->pNext;
    }
    
    return pNewHead;
    
}

