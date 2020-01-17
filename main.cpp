// Sorting.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <map>

#include <list>

#include "Sorting.h"
#include "Solution.h"

using namespace std;

typedef vector<int>::iterator ArrayIterator;
typedef vector<int>			  ArrayType;


int main()
{
	vector<int> vecSol = { 3,2,4 };

	Solution sol;

	sol.twoSum(vecSol, 6);

	cout << "\n Add two numbers problem \n";
    //Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
	ListNode *l1 = new ListNode(2);
	l1->next = new ListNode(4);
	l1->next->next = new ListNode(3);

	ListNode *l2 = new ListNode(5);
	l2->next = new ListNode(6);
	l2->next->next = new ListNode(4);

	ListNode *lRes = sol.addTwoNumbers(l1, l2);

	while(lRes)
	{ 
		cout << lRes->val << (lRes->next != NULL ? " -> ": "");
		lRes = lRes->next;
	}
	cout << "\n\n";

	//**************************************************************************
	//								Sorting
	//**************************************************************************
	const ArrayType arOrig = { 45, 1, 34, 5, 97, 15,  4551, 354, 589, 6747, 65, 74, 367, 189, 675, 98, 53, 974, 36};
	ArrayType arTmp = arOrig;
	//std::list<int> List = { 45, 4551, 354, 589, 6747, 15 };

	//SortingSTL<ArrayIterator> sortSTLVec;
	SortingSTL sortSTLVec;

	sortSTLVec.SortWithMeasurements(arTmp);

	SortingHeap sortHeap;
	arTmp = arOrig;
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
