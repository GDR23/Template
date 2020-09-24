#pragma once
#include "Nodo.h"
enum EstadoArbol {
	Balanceado,
	PesoAlLadoIzquierdo,
	PesoAlLadoDerecho
};
class AVLFunctions
{
public:
	Nodo* Raiz;
	AVLFunctions();
	Nodo* Insertar(Nodo*,Nodo*, int);
	Nodo* Agregar(int);
	Nodo* Balancear(Nodo*);
	Nodo* RotacionDerecha(Nodo*);
	Nodo* RotacionIzquierda(Nodo*);
	Nodo* RotacionIzquierdaDerecha(Nodo*);
	Nodo* RotacionDerechaIzquierda(Nodo*);
	int cabeza();
	int cabezaHi();
    int cabezaHd();
	int GetAltura(Nodo*);
	int	Inorder(Nodo*);
	void Print();
	Nodo* Buscar(int valor);
	Nodo* Eliminar(Nodo*,int valor);
	Nodo* Encontrar(Nodo*, int );
	Nodo* MinimumValue(Nodo* node);
};

