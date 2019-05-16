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

//快速排序 O(Nlog2N)
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

//冒泡排序 时间复杂度 O（N2）
void BubbleSort(int data[], int length) {
    if (data == NULL || length <= 0) {
        return;
    }
    
    for (int i=0; i<length-1; i++) {
        for (int j=0; j<length-1-i; j++) {
            if (data[j] > data[j+1]) {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

//选择排序 时间复杂度 O（N2）
void SelectionSort(int data[], int length) {
    if (data == NULL || length <= 0) {
        return;
    }
    
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (data[j] < data[i]) {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
}

//插入排序 时间复杂度 O（N2）
void InsertSort(int data[], int length) {
    if (data == NULL || length <= 0) {
        return;
    }
    
    int current = 0;
    for (int i=1; i<length; i++) {
        int preIndex = i - 1;
        current = data[i];
        while (preIndex >=0 && data[preIndex] > current) {
            data[preIndex + 1] = data[preIndex];
            preIndex--;
        }
        data[preIndex+1] = current;
    }
}

//希尔排序 时间复杂度跟步长有关 目前知道最好的时间复杂度 O(N3/2)
void ShellSort(int data[], int length) {
    int i, j, gap;
    
    for (gap = length/2; gap>0; gap /= 2) {
        for (i=gap; i<length; i++) {
            for (j=i-gap; j>=0 && data[j] > data[j+gap]; j-=gap) {
                int temp = data[j];
                data[j] = data[j+gap];
                data[j+gap] = temp;
            }
        }
    }
}

//归并排序 时间复杂度 O(Nlog2N)
void MergeSort(int data[], int begin, int mid, int end, int length) {
    int temp[length];
    for (int i=0; i<length; i++) {
        temp[i] = data[i];
    }
    
    int i = begin, j = mid + 1, index = begin;
    while (i <= mid && j <= end) {
        data[index++] = temp[i] < temp[j] ? temp[i++] : temp[j++];
    }
    while (i <= mid) {
        data[index++] = temp[i++];
    }
    while (j <= end) {
        data[index++] = temp[j++];
    }
}

void MergeSort(int data[], int begin, int end, int length) {
    if (begin < end) {
        int mid = (begin + end) / 2;
        MergeSort(data, begin, mid, length);
        MergeSort(data, mid+1, end, length);
        MergeSort(data, begin, mid, end, length);
    }
}

void MergeSort(int data[], int length) {
    if (data == NULL || length <= 0) {
        return;
    }
    
    MergeSort(data, 0, length-1, length);
}
