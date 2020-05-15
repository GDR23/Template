#pragma once
template<class T>
class Nodo
{
private:
	T dato;
	Nodo* siguiente;

public:
	Nodo(T dat):dato(dat), siguiente(nullptr) {};
	Nodo* getSiguiente() { return siguiente; }
	void setSiguiente(Nodo* sig) { siguiente = sig; }
	void setDatos(T data) { dato = data; }
	T getDatos() { return dato; }
};

