//
//  Sort.hpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/2/26.
//  Copyright © 2019年 imera. All rights reserved.
//

#ifndef Sort_hpp
#define Sort_hpp

#include <stdio.h>

void QuickSort(int *data, int length, int start, int end);
void BubbleSort(int data[], int length);
void SelectionSort(int data[], int length);
void InsertSort(int data[], int length);
void ShellSort(int data[], int length);
void MergeSort(int data[], int length);

#endif /* Sort_hpp */
