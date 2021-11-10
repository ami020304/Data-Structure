#include<stdio.h>
#include<iostream>
using namespace std;

void main()
{
	int myArray[3] = { 100, 5, 10 };
	int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
	int i = 0;
	int j = 0;
	int	index_min = 0;
	int temp = 0;

	for (int k = 0; k < myArrayLength; k++)
	{
		cout << "index :" << k << " values :" << myArray[k] << "\n";
	}


	for (i = 0; i < myArrayLength; i++){
		index_min = i;

		for (j = i + 1; j < myArrayLength; j++){
			if (myArray[j] < myArray[index_min])
				index_min = j;
		}


		if (index_min != i)
		{
			temp = myArray[i];
			myArray[i] = myArray[index_min];
			myArray[index_min] = temp;
		}
	}
	//cout << "the index of the lowest number is :" << j;

	cout << "after sortin \n";

	for (int k = 0; k < myArrayLength; k++)
	{
		cout << "index :" << k << " values :" << myArray[k] << "\n";
	}

	getchar();

}
