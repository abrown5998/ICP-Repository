// LastHW_AWB.cpp : Defines the entry point for the console application.
//1. Initializes an array with ten random integers between 1 and 100 and then prints four lines of output, containing:
// a.every element of the array at an even index
// b.every even element of the array
// c.all elements of the array in reverse order
// d.only the first and last element of the array


#include<string>
#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int array[10];
	int partB[10];
	int partA[10];
	int backwards[10];
	int i;
	for (i = 0; i < 9; i++)
	{
		array[i] = (rand() % 100) + 1;
	}
	for (i = 0; i < 9; i++)
	{
		if (array[i] % 2 == 0)
		{
			partB[10] = array[i];
		}
		else
		{
			return 0;
		}
	}
	for (i = 0; i < 9; i + 2)
	{
		partA[10] = array[i];
	}
	for (i = 9; i >= 0; i--)
	{
		backwards[10] = array[i];
	}
	cout << "Every element of the array at an even index: " << partA[i] << endl;

	cout << "Every even element of the array: " << partB[i] << endl;

	cout << "All elements of the array in reverse order: " << backwards[i] << endl;

	cout << "Only the first and last element of the array: " << array[0] << " and " << array[9] << endl;
	system("pause");
	return 0;
}
//checking github