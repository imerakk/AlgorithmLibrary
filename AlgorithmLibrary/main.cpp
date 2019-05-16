//
//  main.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/21.
//  Copyright © 2019年 imera. All rights reserved.
//

#include <iostream>
#include "Sort.hpp"
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
#include "InterviewProblem22.hpp"
#include "InterviewProblem23.hpp"
#include "InterviewProblem24.hpp"
#include "InterviewProblem27.hpp"
#include "InterviewProblem28.hpp"
#include "InterviewProblem29.hpp"
#include "InterviewProblem30.hpp"
#include "InterviewProblem31.hpp"
#include "InterviewProblem32.hpp"
#include "InterviewProblem33.hpp"
#include "InterviewProblem34.hpp"
#include "InterviewProblem35.hpp"
#include "InterviewProblem36.hpp"
#include "InterviewProblem37.hpp"
#include "InterviewProblem38.hpp"
#include "InterviewProblem40.hpp"
#include "InterviewProblem41.hpp"
#include "InterviewProblem42.hpp"
#include "InterviewProblem43.hpp"
#include "InterviewProblem44.hpp"
#include "InterviewProblem45.hpp"
#include "InterviewProblem46.hpp"
#include "InterviewProblem47.hpp"
#include "InterviewProblem49.hpp"
#include "InterviewProblem51.hpp"
#include "InterviewProblem52.hpp"
#include "InterviewProblem54.hpp"
#include "InterviewProblem55.hpp"
#include "InterviewProblem57.hpp"
#include "InterviewProblem60.hpp"
#include "InterviewProblem61.hpp"
#include "InterviewProblem62.hpp"
#include "InterviewProblem63.hpp"
#include "InterviewProblem64.hpp"
#include "InterviewProblem65.hpp"
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
    
    /*
    int data[] = {4, 6, 7, 7, 10};
    int data1[] = {1, 4, 5};
    ListNode *nodeHead1 = CreateListNode(data, 5);
    ListNode *nodeHead2 = CreateListNode(data1, 3);
    ListNode *node = MergeListNode(nodeHead1, nodeHead2);
    PrintListNode(node);
    */

    /*
//    int pushOrder[] = {1, 2, 3, 4, 5};
//    int popOrder[] = {4, 5, 3, 2, 1};
//    int popOrder1[] = {4, 3, 5, 1, 2};
    int pushOrder[] = {1};
    int popOrder[] = {2};
    
    bool isPopOrder = IsPopOrder(pushOrder, popOrder, 1);
    */
    
    /*
    BinaryTreeNode *node = new BinaryTreeNode();
    node->value = 1;
    BinaryTreeNode *leftNode = AddLeftNode(node, 2);
    BinaryTreeNode *rightNode = AddRightNode(node, 3);
    AddLeftNode(leftNode, 4);
    AddRightNode(leftNode, 5);
    AddLeftNode(rightNode, 6);
    PrintFromTopToBottom(node);
    */
    
    /*
    int seq[] = {5, 7, 6, 9, 11, 10, 8};
    bool isBST = VerifySquenceOfBST(seq, 7);
    */
    
    /*
    //    10
    //  7   11
    // 1 8
    BinaryTreeNode *node = new BinaryTreeNode();
    node->value = 10;
    BinaryTreeNode *leftNode = AddLeftNode(node, 7);
    BinaryTreeNode *rightNode = AddRightNode(node, 11);
    AddLeftNode(leftNode, 1);
    AddRightNode(leftNode, 8);
    
    BinaryTreeNode *pHead = Convert(node);
    while (pHead != NULL) {
        printf("%d\t", pHead->value);
        pHead = pHead->rightNode;
    }
    */
    
    /*
    char str[] = "abc";
    Permutation(str);
    */
    
    /*
    int number[] = {1, 2};
    int num = MoreThanHalfOfNum(NULL, 2);
    */
    
    /*
    int number[] = {3, 6, 2, 4, 5};
    int output[5];
    GetLeastNumber(number, output, 5, 5);
    */
    
    /*
//    int data[] = {1, -2, 3, 10, -4, 7, 2, -5};
    int data[] = {3, 2, 2};
    int maxSum = FindMaxSumOfSubArray(data, 3);
    */
    
    
    /*
    int count = NumberOf1Between1AndN(123113);
    */
    
    
    /*
    int arr[] = {321, 320, 122};
    vector<int> num(arr, arr+3);
    PrintMinNumber(num);
    */
    
    /*
    int ugly = GetUglyNumber(7);
    */
    
    /*
    char str[] = "abaccdeff";
    char ch = FindFirstNotRepeatingChar(str);
    */
    
    /*
    int array[] = {4, 3, 3, 1};
    int count = InversePairs(array, 1);
    */
    
    /*
    ListNode *headNode1 = new ListNode();
    headNode1->value = 4;
    
    ListNode *listNode2 = new ListNode();
    listNode2->value = 7;
    headNode1->pNext = listNode2;

    ListNode *headNode2 = new ListNode();
    headNode2->value = 3;
    
    ListNode *listNode1 = new ListNode();
    listNode1->value = 1;
    listNode2->pNext = listNode1;
    
    headNode2->pNext = listNode1;
    
    ListNode *sameNode = FindFirstSameNode(headNode1, headNode1);
    */
    
    /*
    int data[] = {1, 2, 3, 3, 3, 3, 4, 5};
    int count = GetNumberOfK(data, 8, 5);
    */
    
    /*
    int data[] = {1, 5, 5, 4, 4, 5};
    int num1 = 0;
    int num2 = 0;
    FindFirstNumber(data, 6, &num1, &num2);
    */
    
    /*
    int data[] = {1, 5, 5, 4, 4, 5};
    bool found = FindNumberWithSum(data, 6, 20);
    
    FindNumbersWithSum(99999);
    */
    
    /*
    char ch[] = "I am dada";
    ReverseSentence(ch);

    char ch[] = "";
    LeftRotateReverse(ch, 2);
    */
    
    /*
    PrintProbability(2);
     */
    
    /*
    int number[] = {2, 4, 3, 5, 11};
    bool isContinuous = IsContinuous(number, 5);
    */
    
    /*
    int lastRemain = LastRemain(3, 4);
    */
    
    /*
    int sum = SumRecursion(10000);
    */
    
    /*
    int sum = Add(-4, 5);
    */
    
    /*
    char str[] = "+31123";
    int num = StrToInt(str);
    printf("num:%d invailInput:%d", num, g_InvailInput);
    */
    
    /*
    int num[] = {4, 3, 1, 2, 0};
    int a = 0;
    Duplicate(num, 5, NULL);
    */
    
    /*
    int data[] = {1, 2, 3, 4, 5};
    int multiArray[5];
    Multiply(data, 5, multiArray);
    */
    
    /*
    char str[] = "-1E-16";
    bool ss = IsNumber(str);
    */
    
    /*
    char str[] = "google";
    char firstChar = FindAppearingOnce(NULL);
    */
    
//    int data[] = {1, 2, 3, 3, 4, 4, 5};
//    ListNode *node = CreateListNode(data, 7);
//    ListNode *pHead = DeleteDuplication(node);
    
    /*
    BinaryTreeNode *left1 = new BinaryTreeNode(4);
    
    BinaryTreeNode *left = new BinaryTreeNode(2);
    left->leftNode = left1;
    
    BinaryTreeNode *right1 = new BinaryTreeNode(511);
    BinaryTreeNode *right = new BinaryTreeNode(3);
    right->rightNode = right1;
    
    BinaryTreeNode *root = new BinaryTreeNode(1);
    root->leftNode = left;
    root->rightNode = right;
    
//    Print(root);
//
//    Print1(root);
    
//    char *str = Serialize(root);
//    BinaryTreeNode *root1 = Deserialize(str);
    BinaryTreeNode *node = KthNode(root, 1);
    */
    
    /*
    Solution64 sol;
    sol.Insert(11);
    sol.Insert(2);
    sol.Insert(20);
    double val =  sol.GetMedian();
    */
    
    /*
    int num[] = {2, 2, 5};
    vector<int> vector(num, num+3);
    
    std::vector<int> res = maxInWindows(vector, 3);
    */
    
//    int arr[] = {7, 4, 2, 1, 2, 3, 8, 6};
//    BubbleSort(arr, 8);
//    SelectionSort(arr, 8);
//    InsertSort(arr, 8);
//    ShellSort(arr, 8);
//    MergeSort(arr, 2);
    
    int arr[] = {7, 4, 2, 2, 2, 7, 8, 6};
    int newArr[8];
    for (int i=0; i<8; i++) {
        newArr[i] = 0;
    }
    DeleteDuplicate(arr, 8, newArr);
    
    

    return 0;
}
