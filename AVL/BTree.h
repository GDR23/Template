#pragma once
#include<iostream>
#include "BNode.h"
class BTree
{
    BNode* root;
    int orden;

public:
    BTree(int _orden)
    {
        root = NULL;
        orden= _orden;
    }

    void traverse()
    {
        if (root != NULL)
            root->printN();
    }

    BNode* search(int k)
    {
        return (root == NULL) ? NULL : root->search(k);
    }

    void insert(int k);
    void deletion(int k);


};



