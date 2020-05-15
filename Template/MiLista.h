#pragma once
#include"Nodo.h"
template<class T>
class MiLista
{
private:
	Nodo<T>* primero;
     Nodo<T>* ultimo;

public:
	int count;
	MiLista() {
		primero = nullptr;
		ultimo = nullptr;
		count = 0;
	}

	Nodo<T>* getPrimero() {
		return primero;
	}
	//Complejidad de tiempo o(1)

	void addColita(T data) {
		Nodo<T>* nuevo = new Nodo<T>(data);
		if (count == 0) {
			primero = nuevo;
			ultimo = primero;
			count++;
		}
		else {
			ultimo->setSiguiente(nuevo);
			ultimo = nuevo;
			count++;

		}
	}

	void desenColita() {
		Nodo<T>* tmp = primero->getSiguiente();
		primero = tmp;
		count--;
	}
	void AddFirst(T data) {
		Nodo<T>* nuevo = new Nodo<T>(data);
		Nodo<T>* temp = primero;

		primero = nuevo;
		primero->setSiguiente(temp);

		if (count == 0) {
			ultimo = primero;
		}

		count++;
	}
	void Add(T data) {
		if (primero == nullptr) {//o(1)
			primero = new Nodo<T>(data);//o(1)
			ultimo = primero;//o(1)
			count++;
		}
		else {
			Nodo<T>* tmp = new Nodo<T>(data);//o(1)
			ultimo->setSiguiente(tmp);//o(1)
			ultimo = ultimo->getSiguiente();//o(1)
			count++;
		}
	}

	void RemoveLast() {
		if (count == 1) {
			primero = nullptr;
			ultimo = nullptr;
			count--;
		}
		else {
			Nodo<T>* tmp = primero;
			while (tmp->getSiguiente() != ultimo) {
				tmp = tmp->getSiguiente();
			}
			tmp->setSiguiente(nullptr);
			ultimo = tmp;
			count--;

		}
	

	}

	void RemoveFirst() {
		if (count !=0) {
			primero = primero->getSiguiente();
			count--;
			if (count == 0) {
				ultimo->setSiguiente(nullptr);
			}
		}
		


	}

	void Remove(T item) {
		if (count == 0) {
			
		}

			else {
				Nodo<T>* anterior = nullptr;
				Nodo<T>* tmp = primero;
				while (tmp != nullptr) {
			
					if (tmp->getDatos() == item) {
						if (anterior != nullptr) {
							anterior->setSiguiente(tmp->getSiguiente());
							if (tmp->getSiguiente() == nullptr) {
								ultimo = anterior;
							}
							count--;
						}
						else {
							RemoveFirst();
						}
						
					}
					anterior = tmp;
					tmp = tmp->getSiguiente();
				}
			}
		}
	
};

