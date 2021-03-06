//
//  ListNode.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/5.
//  Copyright © 2019年 imera. All rights reserved.
//

#include "ListNode.hpp"

ListNode * CreateListNode(int *data, int length) {
    if (data == NULL || length <= 0) {
        return NULL;
    }
    
    ListNode *lastNode = NULL;
    for (int i=length - 1; i>=0; i--) {
        ListNode *node = new ListNode(0);
        node->val = data[i];
        node->next = lastNode;
        lastNode = node;
    }
    
    return lastNode;
}

void PrintListNode(ListNode *nodeHead) {
    if (nodeHead == NULL) {
        return;
    }
    
    ListNode *node = nodeHead;
    printf("%d ", node->val);
    
    while (node->next != NULL) {
        node = node->next;
        printf("%d ", node->val);
    }
    printf("\n");
}
