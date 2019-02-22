//
//  InterviewProblem3.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/21.
//  Copyright © 2019年 imera. All rights reserved.
//

//题目描述:
//在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//
//输入描述
//array:待查找的二维数组 target:查找的数字
//
//输出描述
//查找到返回true，查找不到返回false

#include "InterviewProblem3.hpp"

bool FindNumber(int *array, int rows, int cols, int target) {
    bool finded = false;
    if (array != NULL && rows > 0 && cols > 0) {
        int row = 0;
        int col = cols - 1;
        while (row < rows && col >= 0) {
            if (array[row * cols + col] == target) {
                finded = true;
                break;
            }
            else if (array[row * cols + col] > target) {
                col--;
            }
            else {
                row++;
            }
        }
    }
    
    return finded;
}

