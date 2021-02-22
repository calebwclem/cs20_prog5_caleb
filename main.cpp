//*****************
//Program Name: Program 5 (Extended Array List)
//Author: Caleb Clements
//IDE Used: Visual Studio
//Program description: Driver program for extArrayList
//*****************
#include <iostream>
#include "extArrayList.h"

using namespace std;

void plagiarismReq();

int main()
{   //Instantiate array
	extArrayList<int> myArr(25);
	for (int i = 0; i < 20; i++)
	{
		myArr.insert(i);
	}
	myArr.insert(-2);
	myArr.print();

	cout << "The minimum element in the array is: ";
	cout << myArr.min() << endl;//min

	cout << "The maximum element in the array is: ";
	cout << myArr.max() << endl;//max

	int delElement;
	cout << "Choose an element to be removed from the array: ";
	cin >> delElement;
	myArr.removeAt(delElement);//removeAt
	cout << "The array with the element deleted at " << delElement << " is now..."
		<< endl;
	myArr.print();

	cout << "Finally, we showcase the remove all function..."
		<< "the array has no 15's!" << endl;
	myArr.removeAll(15);//removeAll
	myArr.print();

	plagiarismReq();
	return 0;
}

//plagiarismReq(): Displays required text for plagiarism requirement in this course.
//Arguments: None | Returns: None
void plagiarismReq()
{
	cout << "This is my original work; apart from standard tutoring or class collaboration, "
		<< "I neither received help nor copied this code from another source.";
}