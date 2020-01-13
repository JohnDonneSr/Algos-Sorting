#pragma once

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

typedef vector<int> ArrayType;

//template <typename Iterator> class Sorting
class Sorting
{
protected:
	std::string m_strAlgoName;
protected:
	void StartMeasurement() {}
	void EndMeasurement() {}
	void DumpMeasurements() {}
public:
	Sorting(const std::string& strAlgo) : m_strAlgoName(strAlgo){}

	//virtual void Sort(Iterator start, Iterator end) = 0;
	virtual void Sort(ArrayType& ar) = 0;
	
	void Dump(ArrayType& ar);

	void SortWithMeasurements(ArrayType& ar)
	{
		cout << "****** Sorting Algorithm '" << m_strAlgoName << "' ******" << endl << "Before: ";
		Dump(ar);
		
		Sort(ar);

		cout << "After: ";
		Dump(ar);
	}
};


// STL itrosort algorithm O (N log (N))
//template <typename Iterator> class SortingSTL : public Sorting<Iterator>
class SortingSTL : public Sorting
{
public:
	SortingSTL() : Sorting("STL (introsort)") {}
	void Sort(ArrayType& ar)
	{
		std::sort(ar.begin(), ar.end());
	}
};

/*
template <typename Iterator> class SortingInsertion : public Sorting<Iterator>
{
public:
	SortingInsertion() : Sorting<Iterator>("Insertion") {}
	void Sort(Iterator start, Iterator end)
	{

	}
};
*/
class SortingHeap : public Sorting
{
public:
	SortingHeap() : Sorting("Heap") {}

	void Sort(ArrayType& ar)
	{
		BuildHeap(ar);
		
		Dump(ar);

		for (int i = ar.size() - 1; i > 0; i--)
		{
			int iTmp = ar[i];
			ar[i] = ar[0];
			ar[0] = iTmp;
			Heapify(ar, 0, i);
		}

	}

	void BuildHeap(vector<int>& ar)
	{
		int iSize = ar.size();
		for (int i = iSize; i >= 0; i--)
			Heapify(ar, i, iSize);

	}

template <typename Iterator> class SortingInsertion : public Sorting<Iterator>
{
public:
	SortingInsertion() : Sorting<Iterator>("Insertion") {}
	void Sort(Iterator start, Iterator end)
	{

	}
};
