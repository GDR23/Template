#pragma once
#include "NodoDoble.h"
template<class T>
class ListaDoble
{
private:
	
	NodoDoble<T>* primero;
	NodoDoble<T>* ultimo;

public:

	int count;
	ListaDoble() {
		primero = nullptr;
		ultimo = nullptr;
		count = 0;
	}

	void Add(T data) {
		if (primero == nullptr) {//o(1)
			primero = new NodoDoble<T>(data);//o(1)
			ultimo = primero;//o(1)

			count++;
		}
		else {
			NodoDoble<T>* tmp = new NodoDoble<T>(data);//o(1)
			ultimo->setSiguiente(tmp);//o(1)
			tmp->setAnterior(ultimo);
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
			NodoDoble<T>* tmp = primero;
			while (tmp->getSiguiente() != ultimo) {
				tmp = tmp->getSiguiente();
			}
			tmp->setSiguiente(nullptr);
			ultimo = tmp;
			count--;

		}


	}

	void RemoveFirst() {
		if (count != 0) {
			primero = primero->getSiguiente();
			primero->setAnterior(nullptr);
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
			NodoDoble<T>* tmp = primero;
			while (tmp != nullptr) {

				if (tmp->getDatos() == item) {
					if (tmp == primero) {
						RemoveFirst();
					}
					else if (tmp == ultimo) {
						RemoveLast();
					}
					else {
						tmp->getAnterior()->setSiguiente(tmp->getSiguiente());
						tmp->getSiguiente()->setAnterior(tmp->getAnterior());
						delete tmp;
					}
				}

				tmp = tmp->getSiguiente();
			}
		}
	}


};

