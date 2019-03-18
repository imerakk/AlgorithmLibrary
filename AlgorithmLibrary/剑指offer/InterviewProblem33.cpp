//
//  InterviewProblem33.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/18.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个正整数数组，把数组里所有数字拼接成起来排成一个数，
//  打印能拼接处的所有数字中最小的一个。例如输入数组{3, 32, 321}
//  则打印出这3个数字能排成的最小数字321323

#include "InterviewProblem33.hpp"
#include <string>

static bool Compare(int a, int b) {
    string A = to_string(a) + to_string(b);
    string B = to_string(b) + to_string(a);
    
    return A < B;
}

void PrintMinNumber(vector<int> number) {
    if (number.size() <= 0) {
        return;
    }

    sort(number.begin(), number.end(), Compare);
    
    string res;
    for (int i=0; i<number.size(); i++) {
        res += to_string(number[i]);
    }
    
    printf("%s", res.c_str());
}


