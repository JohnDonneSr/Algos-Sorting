// Sorting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <algorithm>
#include <iostream>
#include "Sorting.h"

using namespace std;

//template <typename Iterator> void Sorting<Iterator>::Dump(Iterator start, Iterator end)
void Sorting::Dump(ArrayType& ar)
{
	cout << "Array: ";
	ArrayType::iterator it = ar.begin();
	while (it != ar.end())
	{
		cout << *(it++) << " ";
	}
	cout << endl;
}

