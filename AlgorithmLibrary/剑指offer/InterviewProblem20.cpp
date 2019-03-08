//
//  InterviewProblem20.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/8.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字
//  例如：如果输入如下矩阵
//  1  2  3  4
//  5  6  7  8
//  9  10 11 12
//  13 14 15 16
//  则依次打印1，2，3，4，8，12，16，15，14，13，9，5，6，7，10，11

#include "InterviewProblem20.hpp"

void PrintMatrixInCircle(int **number, int rows, int columns, int start) {
    int endCol = columns - start - 1;
    int endRow = rows - start - 1;
    
    for (int i=start; i<=endCol; i++) {
        printf("%d", number[start][i]);
    }
    
    if (start < endRow) {
        for (int i=start+1; i<=endRow; i++) {
            printf("%d", number[i][endCol]);
        }
    }

    if (start < endCol && start < endRow) {
        for (int i=endCol-1; i>=start; i--) {
            printf("%d", number[endRow][i]);
        }
    }
    
    if (start < endCol && start < endRow - 1) {
        for (int i=endRow-1; i>start; i--) {
            printf("%d", number[i][start]);
        }
    }
}

void PrintMatrixInCircleClockwisely(int **number, int rows, int columns) {
    if (number == NULL || rows <= 0 || columns <= 0) {
        return;
    }
    
    int start = 0;
    while (rows <= start * 2 && columns <= start * 2) {
        PrintMatrixInCircle(number, rows, columns, start);
        
        start++;
    }
}


