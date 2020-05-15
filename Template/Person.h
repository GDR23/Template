#pragma once
#include <string>
using std::string;
class Person
{

private:
	string _nombre;
	string _apellido;
	int _numeroRandom;

public:
	Person(string name, string apellido, int valor);
	~Person();
	string GetNombre();
    int  getNumeroAleatorio()const { return _numeroRandom; };
	void setNumeroAleatorio(int valor) { _numeroRandom = valor; }
	bool operator<(  const Person& person)const;
	
};

