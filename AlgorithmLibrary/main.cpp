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


    // problem 4
    char str1[50] = " we  are happay ";
    ReplaceBlank(str1, 50);
    printf("%s \n", str1);

    
    
    
    return 0;
}
