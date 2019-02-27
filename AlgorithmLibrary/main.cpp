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
    
    
    int number[] = {3, 4, 5, 1, 2};
//    int min = Min(number, 5);
    int min1 = Min1(number, 5);
    printf("%d", min1);
    
    
    
    
    return 0;
}
