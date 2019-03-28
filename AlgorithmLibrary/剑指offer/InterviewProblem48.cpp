//
//  InterviewProblem48.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/3/28.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  用C++设计一个不能被继承的类

#include "InterviewProblem48.hpp"

class SealedClass {
public:
    static SealedClass *GetInstance() {
        return new SealedClass();
    }
    
    static void DeleteInstance(SealedClass *pInstance) {
        delete pInstance;
    }

private:
    SealedClass() {}
    ~SealedClass() {}
    
};
