
#include <iostream>
#include <string>
#include "doublyLL.h"
using namespace std;

int main()
{
	doublyLinkedList<int> dlist;

	dlist.addBack(2);
	dlist.addBack(3);
	dlist.addBack(5);
	dlist.addBack(7);
	dlist.addBack(11);
	dlist.addBack(13);
	dlist.addBack(17);
	dlist.addBack(19);
	dlist.addBack(23);
	dlist.addBack(29);

	dlist.printList(); //2, 3, 5, 7, 11, 13, 17, 19, 23, 29
	cout << endl;
	
	dlist.printBackwards(); //29, 23, 19, 17, 13, 11, 7, 5, 3, 2
	cout << endl;
	
	//Next, template the class: (will need to add <int> to the dlist declaration after doing this)
	doublyLinkedList<string> X;
	
	X.addBack("pokemon");
	X.addBack("fire dragon");
	X.addBack("gigasour");
	X.addBack("snortle");
	X.addBack("water monster");
	X.addBack("cyrax");

	X.printList(); //pokemon, fire dragon, gigasour, snortle
	cout << endl; 
	
	//Implement remove
	
	X.remove("snortle");
	X.remove("cyrax");
	X.remove("pokemon");

	X.printList(); //fire dragon, gigasour, water monster
	cout << endl;
	
	X.printBackwards(); //water monster, gigasour, fire dragon
	
	return 0;
}