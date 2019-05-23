//
//  LeetCode2.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/5/23.
//  Copyright © 2019年 imera. All rights reserved.
//  题目:
//  给出两个非空的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
//  如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//  您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
//  输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
//  输出：7 -> 0 -> 8
//  原因：342 + 465 = 807

#include "LeetCode2.hpp"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if (l1 == NULL || l2 == NULL) {
        return NULL;
    }
    
    bool flag = 0;
    ListNode *root = new ListNode(0);
    ListNode *currentNode = root;
    while (l1 != NULL && l2 != NULL) {
        int value = l1->val + l2->val + flag;
        if (value >= 10) {
            flag = 1;
        }
        else {
            flag = 0;
        }
        ListNode *node = new ListNode(value % 10);
        currentNode->next = node;
        currentNode = node;
        
        l1 = l1->next;
        l2 = l2->next;
    }
    
    while (l1 != NULL) {
        int val = l1->val + flag;
        if (val >= 10) {
            flag = 1;
        }
        else {
            flag = 0;
        }
        currentNode->next = new ListNode(val % 10);
        currentNode = currentNode->next;
        l1 = l1->next;
    }
    
    while (l2 != NULL) {
        int val = l2->val + flag;
        if (val >= 10) {
            flag = 1;
        }
        else {
            flag = 0;
        }
        currentNode->next = new ListNode(val % 10);
        currentNode = currentNode->next;
        l2 = l2->next;
    }
    
    if (flag == 1) {
        currentNode->next = new ListNode(flag);
    }
    
    return root->next;
}
