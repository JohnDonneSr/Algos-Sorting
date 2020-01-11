﻿// Sorting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <list>

#include "Sorting.h"

using namespace std;

typedef vector<int>::iterator ArrayIterator;
typedef vector<int>			  ArrayType;


int main()
{
	const ArrayType Array = { 45, 1, 34, 5, 97, 15 };
	ArrayType arTmp = Array;
	//std::list<int> List = { 45, 4551, 354, 589, 6747, 15 };

	//SortingSTL<ArrayIterator> sortSTLVec;
	SortingSTL sortSTLVec;

	sortSTLVec.SortWithMeasurements(arTmp);

	SortingHeap sortHeap;
	arTmp = Array;
	sortHeap.SortWithMeasurements(arTmp);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
