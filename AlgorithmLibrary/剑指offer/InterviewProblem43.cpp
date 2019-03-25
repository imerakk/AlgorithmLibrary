//
//  InterviewProblem43.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/25.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  把N个骰子扔在地上，所有骰子朝上一面的点数之和为s。
//  输入n，打印出s的所有可能的值出现的概率

#include "InterviewProblem43.hpp"
#include <math.h>

int g_maxValue = 6;

void PrintProbability(int n) {
    if (n <= 0) {
        return;
    }
    
    int *probability[2];
    probability[0] = new int[n * g_maxValue + 1];
    probability[1] = new int[n * g_maxValue + 1];
    
    for (int i=0; i<n*g_maxValue+1; i++) {
        probability[0][i] = 0;
        probability[1][i] = 1;
    }
    
    int flag = 0;
    for (int i=1; i<=g_maxValue; i++) {
        probability[flag][i] = 1;
    }
    
    for (int k=2; k<=n; k++) {
        for (int i=0; i<k; i++) {
            probability[1-flag][i] = 0;
        }
        
        for (int i=k; i<=k*g_maxValue; i++) {
            probability[1-flag][i] = 0;
            
            for (int j=1; j<=g_maxValue && j<=i; j++) {
                probability[1-flag][i] += probability[flag][i-j];
            }
        }
        
        flag = 1 - flag;
    }
    
    int total = pow((double)g_maxValue, n);
    for (int i=n; i<=n*g_maxValue; i++) {
        printf("s = %d, probability = %f \n", i, (double)probability[flag][i] / total);
    }
    
    delete [] probability[0];
    delete [] probability[1];
}
