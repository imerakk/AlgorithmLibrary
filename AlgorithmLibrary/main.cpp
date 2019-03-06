//
//  main.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/21.
//  Copyright © 2019年 imera. All rights reserved.
//

#include <iostream>
#include "InterviewProblem3.hpp"
#include "InterviewProblem4.hpp"
#include "InterviewProblem5.hpp"
#include "InterviewProblem6.hpp"
#include "InterviewProblem7.hpp"
#include "InterviewProblem8.hpp"
#include "InterviewProblem9.hpp"
#include "InterviewProblem10.hpp"
#include "InterviewProblem11.hpp"
#include "InterviewProblem12.hpp"
#include "InterviewProblem13.hpp"
#include "InterviewProblem14.hpp"
#include "InterviewProblem15.hpp"
#include "InterviewProblem16.hpp"
#include "InterviewProblem17.hpp"
#include "Sort.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
/*
    // problem 3
    int array[] = {
        1, 2, 8, 9,
        2, 4, 9, 12,
        4, 5, 10, 13,
        5, 6, 11, 14
    };
    
    int testArray[] = {1, 14, 5, 0, 20, 7};
    
    for (int i = 0; i < 6; i++) {
        bool finded = FindNumber(array, 4, 4, testArray[i]);
        printf("find %d: %d \n", testArray[i], finded);
    }
*/
    
/*
    // problem 4
    char str1[50] = " we  are happay ";
    ReplaceBlank(str1, 50);
    printf("%s \n", str1);
*/
    
/*
    // problem 6
    int preorder[] = {1, 2, 4, 7, 3, 5, 6, 8};
    int inorder[] = {4, 7, 2, 1, 5, 3, 8, 6};
    
    BinaryTreeNode *node = Construct(preorder, inorder, 8);
    prePrintBinaryTree(node);
 */
    
/*
    // problem 7
    Queue queue;
    queue.appendTail(1);
    queue.appendTail(2);
    queue.appendTail(3);
    int head = queue.deleteHead();
*/
    
/*
    int data[] = {3, 7, 2, 12, 4, 5, 6, 1};
    QuickSort(data, 8, 0, 7);
    
    for (int i = 0; i < 8; i++) {
        printf("%d ", data[i]);
    }
*/
    
/*
    int number[] = {3, 4, 5, 1, 2};
//    int min = Min(number, 5);
    int min1 = Min1(number, 5);
    printf("%d", min1);
*/

/*
    long long count = TotalCount(5);
*/
    
/*
    int count1 = NumberOf1(0);
    int count2 = NumberOf1(5);
    int count3 = NumberOf1(-2);
*/
  
/*
    double num1 = Power(0.0, -1);
    double num2 = Power(3.0, 5.0);
    double num3 = Power(2.0, -3);
    double num4 = Power(-3, 5.0);
    double num5 = Power(-2.0, -3);
    double num6 = Power(6.0, 0.0);
 */
    
/*
    PinrtNumber(1);
    PinrtNumber(0);
    PinrtNumber(-1);
*/
    
/*
    ListNode *headNode = new ListNode();
    headNode->value = 1;
    ListNode **pHeadNode = &headNode;
    ListNode *deleteNode = headNode;
    DeleteNode(pHeadNode, deleteNode);
*/

    /*
    int data[] = {2, 3};
    ReorderOddEven(data, 5);
    */

    /*
    int data[] = {2, 3, 4, 6, 1};
    ListNode *nodeHead = CreateListNode(data, 5);
    ListNode *kNode = FindKthToTail(nodeHead, 3);
    */
    
    /*
    int data[] = {2, 3, 4, 6, 1};
    ListNode *nodeHead = CreateListNode(data, 5);
    ListNode *newNodeHead = ReversListNode1(nodeHead);
    PrintListNode(newNodeHead);
    */
    
    int data[] = {4, 6, 7, 7, 10};
    int data1[] = {1, 4, 5};
    ListNode *nodeHead1 = CreateListNode(data, 5);
    ListNode *nodeHead2 = CreateListNode(data1, 3);
    ListNode *node = MergeListNode(nodeHead1, nodeHead2);
    PrintListNode(node);
    
    return 0;
}
