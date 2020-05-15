// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"MiQueue.h"
#include"ArbolBinario.h"
//#include"Acumulador.h"
//#include"MiLista.h"
using namespace std;
using std::string;
//#include "Person.h"
//#include"MyHashTable.h"
template<class T>
T max(T const& t1, T const& t2) {
    if (t1 < t2) {
        return t2;
    }
    return t1;
}
void cambio(int a[]) {
    a[0] = 5;
}
int main()
{

    ArbolBinario arbolito;
    arbolito.Agregar("21");
    arbolito.Agregar("77");
    arbolito.Agregar("37");
    arbolito.Agregar("4");
    arbolito.Agregar("51");

   // MiQueue<int>cola;
   // cola.encolar(1);
   // cola.encolar(2);
   //int n= cola.desencolar();
   //cout << n;
   // n = cola.desencolar();
   //cout << n;
    //int a[1];
    //a[0] = 1;
    //cambio(a);
    //cout << a[0];
    //int valor1 = 1;
    //int valor2 = 2;
    //std::cout << "mayor 2 que 1= "<<max(valor1, valor2)<<endl;

    //Person persona1("Selvin", "Rodriguez", 50);
    //Person persona2("Gabriela", "Diaz", 60);
    //std::cout << "mayor 2 que 1= " << endl;
    //Acumulador<int>acc(10);
    //cout << "valor incial 1 " << acc.getTotal()<<endl;
    //acc += 9;
    //cout << "valor incial 1 " << acc.getTotal()<<endl;

    //Acumulador<string>palabra("");
    ////cout << "valor incial 2 " << palabra.getTotal()<<endl;
    //palabra += "holis";
    //palabra += "holis";
    //cout << "valor incial 2" << palabra.getTotal()<<endl;

    //Acumulador<Person>persons(0);
    //cout << "valor incial 3" << persons.getTotal()<<endl;
    //persons += persona1;
    //persons += persona2;
    //cout << "valor incial 3 " << persons.getTotal()<<endl;
    //MiLista<string>listaAlumnos;
    //listaAlumnos.Add("SELVIN");
    //listaAlumnos.Add("GABY");
    //listaAlumnos.Add("CARLOS");

    //Nodo<string>* cursor = listaAlumnos.getPrimero();
    //while (cursor != nullptr) {
    //    cout << "list= " << cursor->getDatos() << endl;
    //    cursor = cursor->getSiguiente();
    //}
    //listaAlumnos.Remove("GABY");
    //    
    //    
    //Nodo<string>* cursor1 = listaAlumnos.getPrimero();
    //while (cursor1 != nullptr) {
    //    cout << "list= " << cursor1->getDatos() << endl;
    //    cursor1 = cursor1->getSiguiente();
    //}

    //MiLista<int> numerito;
    //numerito.push(1);
    //numerito.push(2);
    //numerito.push(3);
    //numerito.push(4);

   //MyHashTable<string, int> hash;
   //hash.Add("HOLI", 1);
   //hash.Add("HOLIs", 2);
   //int posicion= hash.Search("HOLI");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
