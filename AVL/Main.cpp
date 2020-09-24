#include "AVLFunctions.h"
#include "BTree.h"
#include<conio.h>
int main() {
	/*AVLFunctions AVL;
	AVL.Agregar(20);
	AVL.Agregar(50);
	AVL.Agregar(10);
	AVL.Agregar(90);
	AVL.Agregar(115);
	AVL.Agregar(13);
	AVL.Agregar(150);
	AVL.Print();
	std::cout << std::endl;
	AVL.Eliminar(AVL.Raiz, 50);
	AVL.Eliminar(AVL.Raiz, 20);
	AVL.Print();
	*/
	//AVL.Print();
	
	BTree t(5);
	t.insert(8);
	t.insert(9);
	t.insert(10);
	t.insert(11);
	t.insert(15);
	t.insert(16);
	t.insert(17);
	t.insert(18);
	t.insert(20);
	t.insert(23);
	t.traverse();
  
	int k = 10;
	(t.search(k) != NULL) ? std::cout << std::endl
		<< k << " is found"
		: std::cout << std::endl
		<< k << " is not Found";

	k = 2;
	(t.search(k) != NULL) ? std::cout << std::endl
		<< k << " is found"
		: std::cout << std::endl
		<< k << " is not Found\n";

	_getch();
}