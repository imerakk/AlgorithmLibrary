//
//  InterviewProblem34.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/18.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  我们把只包含因子2，3和5的数称作丑数。求按
//  小到大的顺序大的第1500个丑数。例如6，8都是
//  丑数，但14不是，因为它包含因子7。习惯上我们
//  把1当做第一个丑数

#include "InterviewProblem34.hpp"
#include <vector>

using namespace std;

int Min(int a, int b, int c) {
    int min = a < b ? a : b;
    min = min < c ? min : c;
    return min;
}

int GetUglyNumber(int index) {
    if (index <= 0) {
        return 0;
    }
    
    vector<int> number(index);
    number[0] = 1;
    int p2 = 0;
    int p3 = 0;
    int p5 = 0;
    for (int i=1; i<index; i++) {
        number[i] = Min(number[p2]*2, number[p3]*3, number[p5]*5);
        
        if (number[i] == number[p2]*2) {
            p2++;
        }
        if (number[i] == number[p3]*3) {
            p3++;
        }
        if (number[i] == number[p5]*5) {
            p5++;
        }
    }
    
    return number[index - 1];
}



