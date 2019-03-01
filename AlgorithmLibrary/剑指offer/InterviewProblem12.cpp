//
//  InterviewProblem12.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/1.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入数字n，按顺序打印出从1到最大的n位十进制数。比如输入3，则打印出1，2，3一直到最大的三位数即999

#include "InterviewProblem12.hpp"
#include <string.h>

void PrintNumberChar(char *number) {
    int beginPrint = false;
    int index = 0;
    
    while (number[index] != '\0') {
        if (!beginPrint && number[index] != '0') {
            beginPrint = true;
        }
        
        if (beginPrint) {
            printf("%c", number[index]);
        }
        index++;
    }
    
    printf("\t");
}

bool Increase(char *number) {
    bool isOverFlow = false;
    size_t length = strlen(number);
    int flag = 1;
    for (size_t i=length - 1; i>=0; i--) {
        int num = number[i] - '0' + flag;
        
        if (num >= 10) {
            if (i == 0) {
                isOverFlow = true;
                break;
            }
            number[i] = num - 10 + '0';
        }
        else {
            number[i] = num + '0';
            break;
        }
    }

    return isOverFlow;
}

void PinrtNumber(int n) {
    if (n <= 0) {
        return;
    }

    char *number = new char[n + 1];
    memset(number, '0', n);
    number[n] = '\0';
    
    while (!Increase(number)) {
        PrintNumberChar(number);
    }
    delete []number;
}


