#include "Person.h"
using namespace std;

Person::Person(string name, string apellido, int valor): _nombre(name), _apellido(apellido), _numeroRandom(valor) {

}

string Person::GetNombre() {
	return _nombre + " -" + _apellido;
}

Person::~Person() {

}

bool Person::operator<(Person const& person)const {
	return _numeroRandom < person._numeroRandom;
}