#include "AVLFunctions.h"
#include <iostream>
AVLFunctions::AVLFunctions() {
	Raiz = nullptr;
}
Nodo* AVLFunctions::Insertar(Nodo* padre,Nodo*anterior, int valor ) {
    if (padre == nullptr)
    {
     
            padre = new Nodo(valor);
            padre->padre = anterior;
      
    }
    else if (valor < padre->Valor)
    {
       
        padre->Izquierdo = Insertar(padre->Izquierdo,padre, valor);
    }
    else if (valor > padre->Valor)
    {
        padre->Derecho = Insertar(padre->Derecho,padre, valor);
    }

    padre = Balancear(padre);

    return padre;
}
Nodo* AVLFunctions::Agregar(int valor) {

    Raiz = Insertar(Raiz,nullptr,valor);
    return Raiz;
}
Nodo* AVLFunctions::Balancear(Nodo* padre) {
    if (padre != nullptr)
    {
        int ladoIzquierdo = GetAltura(padre->Izquierdo);
        int ladoDerecho = GetAltura(padre->Derecho);

        int desbalance = ladoIzquierdo - ladoDerecho;
        EstadoArbol peso = EstadoArbol::Balanceado;

        if (desbalance == 2)
            peso = EstadoArbol::PesoAlLadoIzquierdo;
        if (desbalance == -2)
            peso = EstadoArbol::PesoAlLadoDerecho;

        if (peso == EstadoArbol::PesoAlLadoDerecho)
        {
            int ladoDerechoIzquierdo = GetAltura(padre->Derecho->Izquierdo);
            int ladoDerechoDerecho = GetAltura(padre->Derecho->Derecho);
            int desbalanceDerecho = ladoDerechoDerecho - ladoDerechoIzquierdo;

            if (padre->Derecho != nullptr && desbalanceDerecho < 0)
            {
                         
                return RotacionDerechaIzquierda(padre);
                
            }
            else
            {
                return RotacionIzquierda(padre);
            }
        }
        else if (peso == EstadoArbol::PesoAlLadoIzquierdo)
        {
            int ladoDerechoIzquierdo = GetAltura(padre->Izquierdo->Izquierdo);
            int ladoDerechoDerecho = GetAltura(padre->Izquierdo->Derecho);
            int desbalanceIzquierdo = ladoDerechoDerecho - ladoDerechoIzquierdo;

            if (padre->Izquierdo != nullptr && desbalanceIzquierdo > 0)
            {
                         
                return RotacionIzquierdaDerecha(padre);
            }
            else {
                return RotacionDerecha(padre);
            }
        }
    }

    return padre;
}
Nodo* AVLFunctions::RotacionDerecha(Nodo* padre) {
    Nodo* remplaso = padre->Izquierdo;
    padre->Izquierdo = remplaso->Derecho;
    remplaso->Derecho = padre;
    return remplaso;
}
Nodo* AVLFunctions::RotacionIzquierda(Nodo* padre) {
    Nodo* remplaso = padre->Derecho;
    padre->Derecho = remplaso->Izquierdo;
    remplaso->Izquierdo = padre;



    return remplaso;
}
Nodo* AVLFunctions::RotacionIzquierdaDerecha(Nodo* padre) {
    Nodo* remplaso = padre->Izquierdo;
    Nodo* resultado = RotacionIzquierda(remplaso);
    padre->Izquierdo = resultado;
    Nodo* Terminado = RotacionDerecha(padre);

    return Terminado;

}
Nodo* AVLFunctions::RotacionDerechaIzquierda(Nodo* padre) {
    Nodo* remplaso = padre->Derecho;
    Nodo* resultado = RotacionDerecha(remplaso);
    padre->Derecho = resultado;
    Nodo* Terminado = RotacionIzquierda(padre);

    return Terminado;
}

int AVLFunctions::cabeza() {
    return Raiz->Valor;
}
int AVLFunctions::cabezaHi() {
    return Raiz->Izquierdo->Valor;
}
int AVLFunctions::cabezaHd() {
    return Raiz->Derecho->Valor;
}
int AVLFunctions::GetAltura(Nodo* nodoActual) {
    if (nodoActual == nullptr)
        return 0;

    int ladoDerecho = GetAltura(nodoActual->Derecho);
    int ladoIzquierdo = GetAltura(nodoActual->Izquierdo);

    if (ladoDerecho > ladoIzquierdo)
        return ladoDerecho + 1;
    else
        return ladoIzquierdo + 1;
}
int	AVLFunctions::Inorder(Nodo* Nodo) {
    if (Nodo == nullptr) {
        return 0;
    }
    else {

        Inorder(Nodo->Izquierdo);
        std::cout << Nodo->Valor<< std::endl;
        Inorder(Nodo->Derecho);

    }

}

void AVLFunctions::Print() {
    Inorder(Raiz);
}
Nodo* AVLFunctions::MinimumValue(Nodo* node) {
    Nodo* tmp = node;
    while (tmp->Izquierdo != nullptr) {
        tmp = tmp->Izquierdo;
    }
    return tmp;
}
Nodo* AVLFunctions::Eliminar(Nodo* root, int valor)
{
    if (root == nullptr) {
        return root;
    }
    if (valor < root->Valor) {
        root->Izquierdo = Eliminar(root->Izquierdo, valor);
    }
    else if (valor > root->Valor) {
        root->Derecho = Eliminar(root->Derecho, valor);
    }
       else {
            if ((root->Izquierdo== nullptr) || (root->Derecho == nullptr)) {
                Nodo* tmp = root->Izquierdo ? root->Izquierdo: root->Derecho;
                if (tmp == nullptr) {
                    tmp = root;
                    root = nullptr;
                }
                else
                    *root = *tmp;
                     free(tmp);
            }
            else {
                Nodo* tmp = MinimumValue(root->Derecho);
                root->Valor = tmp->Valor;
                root->Derecho = Eliminar(root->Derecho, tmp->Valor);
            }
        }

    if (root == nullptr) {
        return root;
    }

        root = Balancear(root);
        return root;
    }


Nodo* AVLFunctions::Buscar(int valor)
{
    return Encontrar(Raiz, valor);
}


Nodo* AVLFunctions::Encontrar(Nodo* nodoPadre, int valor)
{

    if (nodoPadre == nullptr)
        return nullptr;
    else if (nodoPadre->Valor == valor)
        return nodoPadre;
    else if (valor < nodoPadre->Valor)
        return Encontrar(nodoPadre->Izquierdo, valor);
    else
        return Encontrar(nodoPadre->Derecho, valor);
}



