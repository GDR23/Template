#include "BTree.h"
BNode::BNode(int _num, bool newhojita)
{

    num = 0;
    tnum = _num;
    hojita = newhojita;
    keys = new int[2 * tnum - 1];
    Children = new BNode * [2 * tnum];

}

void BNode::printN()
{
    int x=0;
    while (x < num)
    {
        if (hojita == false)
            Children[x]->printN();
            std::cout << "\t" << keys[x];
            x++;
    }

    if (hojita == false)
        Children[x]->printN();
}

BNode* BNode::search(int k)
{
    int x = 0;
    while (x < num && k > keys[x]) {
        x++;
    }

    if (keys[x] == k) {
        return this;
    }

    if (hojita == true) {
        return NULL;
    }

    return Children[x]->search(k);
}

void BTree::insert(int newnum)
{
    if (root == NULL)
    {
        root = new BNode(orden, true);
        root->keys[0] = newnum;
        root->num = 1;
    }
    else
    {
        if (root->num == 2 * orden - 1)
        {
            BNode* tmp = new BNode(orden, false);

            tmp->Children[0] = root;

            tmp->separar(0, root);

            int x = 0;
            if (tmp->keys[0] < newnum) {
                x++;
            }
            tmp->Children[x]->insert(newnum);

            root = tmp;
        }
        else
            root->insert(newnum);
    }
}

void BNode::insert(int newnum)
{
    int x = num - 1;

    if (hojita == true)
    {
        while (x >= 0 && keys[x] > newnum)
        {
            keys[x + 1] = keys[x];
            x--;
        }

        keys[x + 1] = newnum;
        num = num + 1;
    }
    else
    {
        while (x >= 0 && keys[x] > newnum)
            x--;

        if (Children[x + 1]->num == 2 * tnum - 1)
        {
            separar(x + 1, Children[x + 1]);

            if (keys[x + 1] < newnum)
                x++;
        }
        Children[x + 1]->insert(newnum);
    }
}

void BNode::separar(int x, BNode* node)
{
    BNode* tmp = new BNode(node->tnum, node->hojita);
    tmp->num = tnum - 1;

    for (int y = 0; y < tnum - 1; y++) {
        tmp->keys[y] = node->keys[y + tnum];
    }
    if (node->hojita == false)
    {
        for (int y = 0; y < tnum; y++) {
            tmp->Children[y] = node->Children[y + tnum];
        }
    }

    node->num = tnum - 1;
    int w = 0;
    while ( w >= x + 1) {
        Children[w + 1] = Children[w];
        w--;
    }

    Children[x + 1] = tmp;

    for (int y = num - 1; y>= x; y--) {
        keys[y + 1] = keys[y];
    }

    keys[x] = node->keys[tnum - 1];
    num = num + 1;
}

