//
//  ListNode.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/5.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef ListNode_hpp
#define ListNode_hpp

#include <stdio.h>

struct ListNode {
    int value;
    ListNode *pNext;
};

ListNode * CreateListNode(int *data, int length);
void PrintListNode(ListNode *nodeHead);

#endif /* ListNode_hpp */
