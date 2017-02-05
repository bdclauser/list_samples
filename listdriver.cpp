#include "listArrBased.h"

void main()
{
	myList<int> grades(100);
	grades.insertBack(98);
	grades.insertBack(77);
	grades.insertBack(76);
	grades.insertBack(57);
	grades.insertBack(83);
	grades.insertBack(98);
	grades.insertBack(90);
	grades.insertAt(3, 55);
	cout << "list size " << grades.size() << endl;

	cout << "grades list:" << endl;
	grades.display();
	cout << endl;

	cout << "remove grade: " << endl;
	grades.removeAt(2);
	
	cout << "grades list after removing the 3rd grade:" << endl;
	grades.display();
	
	system("pause");
}
