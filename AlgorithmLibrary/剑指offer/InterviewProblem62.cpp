//
//  InterviewProblem62.cpp
//  AlgorithmLibrary
//
//  Created by liuchunxi on 2019/4/9.
//  Copyright © 2019年 imera. All rights reserved.
//  题目
//  请实现两个函数，分别用来序列化和反序列化二叉树。

#include "InterviewProblem62.hpp"

void Serialize(BinaryTreeNode *node, string *str) {
    if (node == NULL) {
        *str += "#";
        return;
    }
    
    string r = to_string(node->value);
    *str += r;
    *str += ",";
    Serialize(node->leftNode, str);
    Serialize(node->rightNode, str);
}

char * Serialize(BinaryTreeNode *pRoot) {
    if (pRoot == NULL) {
        return NULL;
    }
    string str;
    Serialize(pRoot, &str);
    
    char *res = new char[str.length() + 1];
    int i;
    for (i=0; i<str.length(); i++) {
        res[i] = str[i];
    }
    res[i] = '\0';
    return res;
}

BinaryTreeNode * Deserialize(char **str) {
    if (**str == '#') {
        (*str)++;
        return NULL;
    }
    
    int num = 0;
    while (**str != '\0' && **str != ',') {
        num = num * 10 + (**str - '0');
        (*str)++;
    }
    
    BinaryTreeNode *node = new BinaryTreeNode(num);
    if (**str == '\0') {
        return node;
    }
    else {
        (*str)++;
    }
    
    node->leftNode = Deserialize(str);
    node->rightNode = Deserialize(str);
    
    return node;
}

BinaryTreeNode * Deserialize(char *str) {
    if (str == NULL) {
        return NULL;
    }
    
    BinaryTreeNode *pRoot = Deserialize(&str);
    return pRoot;
}



