#pragma once
#include "MiLista.h"
template <class T>
 
class MiQueue {
private:
    MiLista<T> list;
public:
    void encolar(T data) {
        list.addColita(data);

    }
    T desencolar() {
        T dato = list.getPrimero()->getDatos();
        list.desenColita();
        return dato;
    }

    T peek() {
        return list.getPrimero()->getDatos();
    }
};

