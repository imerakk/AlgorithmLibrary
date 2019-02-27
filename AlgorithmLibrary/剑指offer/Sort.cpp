//
//  Sort.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/26.
//  Copyright © 2019年 imera. All rights reserved.
//

#include "Sort.hpp"
#include <iostream>

using namespace std;

//快速排序
int Partition(int data[], int start, int end) {
    int index = end;
    
    int small = start - 1;
    for (int i=start; i<end; i++) {
        if (data[i] < data[index]) {
            small++;
            if (i != small) {
                swap(data[i], data[small]);
            }
        }
    }
    
    small++;
    swap(data[index], data[small]);
    
    for (int i = start; i <= end; i++) {
        printf("%d ", data[i]);
        
        if (i == end) {
            printf("\n");
        }
    }
    return small;
}

void QuickSort(int *data, int length, int start, int end) {
    if (data == NULL || length <= 0 || start == end) {
        return;
    }
    
    int index = Partition(data, start, end);
    if (index > start) {
        QuickSort(data, length, start, index - 1);
    }
    
    if (index < end) {
        QuickSort(data, length, index + 1, end);
    }
}
