#pragma once
template<class T>
class NodoDoble
{

	private:
		T dato;
		NodoDoble* siguiente;
		NodoDoble* anterior ;

	public:
		NodoDoble(T dat) :dato(dat), siguiente(nullptr), anterior(nullptr) {};
		NodoDoble* getSiguiente() { return siguiente; }
		void setSiguiente(NodoDoble* sig) { siguiente = sig; }
		NodoDoble* getAnterior() { return anterior; }
		void setAnterior(NodoDoble* ant) { anterior=ant; }
		void setDatos(T data) { dato = data; }
		T getDatos() { return dato; }



};

