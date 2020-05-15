#pragma once
#include"Person.h"
template<class T>

class Acumulador
{
private :
	T _total;
public:
	Acumulador(T valorInicio) :_total(valorInicio) {};
	T operator+=(const T& t) { return _total= _total + t; };
	T getTotal()const { return _total; };
};

template<>

class Acumulador<Person>
{
private:
	int _total;
public:
	Acumulador(int valorInicio) :_total(valorInicio) {};
	int operator+=(Person& t) { 
		_total= _total + t.getNumeroAleatorio();
		return _total; }
	int getTotal()const { return _total; };
};

