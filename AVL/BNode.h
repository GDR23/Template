#pragma once
class BNode
{
public:
    int* keys;
    int num;
    int tnum;
    bool hojita;
    BNode** Children;

    BNode(int temp, bool hojita);

    void insert(int numero);
    BNode* search(int numero);
    void separar(int numero, BNode* node);
    void printN();

   


};
