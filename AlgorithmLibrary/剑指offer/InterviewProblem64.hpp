//
//  InterviewProblem64.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/10.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem64_hpp
#define InterviewProblem64_hpp

#include <stdio.h>
#include <vector>
#include <functional>

using namespace std;

class Solution64 {
protected:
    vector<int> min; // 大顶堆，前半部分较小的值
    vector<int> max; // 小顶堆，后半部分较大的值
    
public:
    void Insert(int value);
    double GetMedian();
};

#endif /* InterviewProblem64_hpp */
