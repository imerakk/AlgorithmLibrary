//
//  InterviewProblem32.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/15.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  输入一个整数N，求从1到N这N个整数的十进制表示中1出现的次数。
//  例如输入12，从1到12这些整数中包含1的数字有1，10，11和12，
//  1一共出现了5次

#include "InterviewProblem32.hpp"

int NumberOf1Between1AndN(int n) {
    int count = 0;
    for (int i=1; i<=n; i=i*10) {
        int a = n / i;
        int b = n % i;
        if (a % 10 == 0) {
            count += a/10*i;
        }
        else if (a % 10 == 1) {
            count += a/10*i + b+1;
        }
        else {
            count += (a/10 + 1)*i;
        }
    }
    
    return count;
}
