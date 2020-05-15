//#pragma once
//#include "ListaDoble.h"
//#include "HashTableNodoPair.h"
//
//template<class K, class V>
//class HashTableVectorNodo
//{
//private:
//	ListaDoble<HashTableNodoPair<K, V>> _elementos;
//
//public:
//
//	void Add(K llave, V valor)
//	{
//		NodoDoble<HashTableNodoPair<K, V>>* cursor = _elementos.getPrimero();
//
//		while (cursor != nullptr)
//		{
//			HashTableNodoPair<K, V> pareja = cursor->getDatos();
//			if (pareja.Key == llave)
//				throw "An item with the same key has already been added";
//
//			cursor = cursor->getSiguiente();
//		}
//
//		HashTableNodoPair<K, V> nuevoValor(llave, valor);
//		_elementos.AddFirst(nuevoValor);
//	}
//	bool TryGetValue(K llave, V& valor)
//	{
//		valor = -1;
//		bool encontrado = false;
//
//		NodoDoble<HashTableNodoPair<K, V>>* cursor = _elementos.getPrimero();
//
//		while (cursor != nullptr)
//		{
//			HashTableNodoPair<K, V> pareja = cursor->getDatos()
//			//if (pareja.Key == llave)
//			/*{
//				valor = pareja.Value;
//				encontrado = true;
//				return encontrado;
//			}*/
//
//			cursor = cursor->getSiguiente();
//		}
//
//		return encontrado;
//	}
//
//
//	bool eliminar(K llave) {
//		NodoDoble<HashTableNodoPair<K, V>>* cursor = _elementos.getPrimero();
//
//		while (cursor != nullptr)
//		{
//			HashTableNodoPair<K, V> pareja = cursor->GetValor();
//			if (pareja.Key == llave)
//			{
//				cursor->getAnterior()->setSiguiente(cursor->getSiguiente());
//				cursor->getSiguiente()->setAnterior(cursor->getAnterior());
//				delete cursor;
//				return true;
//			}
//
//			cursor = cursor->GetSiguiente();
//		}
//		return false;
//	}
//};