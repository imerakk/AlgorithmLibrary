//
//  InterviewProblem7.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/26.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef InterviewProblem7_hpp
#define InterviewProblem7_hpp

#include <stdio.h>
#include <stack>

using namespace std;

class Queue {
public:
    void appendTail(int node);
    int deleteHead();
    
private:
    stack<int> stackIn;
    stack<int> stackOut;
};

#endif /* InterviewProblem7_hpp */
