#pragma once

#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

template <typename Iterator> class Sorting
{
private:
	std::string m_strAlgoName;
protected:
	void StartMeasurement() {}
	void EndMeasurement() {}
	void DumpMeasurements() {}
public:
	Sorting(const std::string& strAlgo) : m_strAlgoName(strAlgo){}

	virtual void Sort(Iterator start, Iterator end) = 0;
	
	void Dump(Iterator start, Iterator end);
	void SortWithMeasurements(Iterator start, Iterator end)
	{
		cout << "****** Sorting Algorithm '" << m_strAlgoName << "' ******" << endl << "Before: ";
		Dump(start, end);
		
		Sort(start, end);

		cout << "After: ";
		Dump(start, end);
	}
};

template <typename Iterator> void Sorting<Iterator>::Dump(Iterator start, Iterator end)
{
	cout << "Array: ";
	while (start != end)
	{
		cout << *(start++) << " ";
	}
	cout << endl;
}

// STL itrosort algorithm O (N log (N))
template <typename Iterator> class SortingSTL : public Sorting<Iterator>
{
public:
	SortingSTL() : Sorting<Iterator>("STL (introsort)") {}
	void Sort(Iterator start, Iterator end)
	{
		std::sort(start, end);
	}
};


template <typename Iterator> class SortingInsertion : public Sorting<Iterator>
{
public:
	SortingInsertion() : Sorting<Iterator>("Insertion") {}
	void Sort(Iterator start, Iterator end)
	{

	}
};

template <typename Iterator> class SortingHeap : public Sorting<Iterator>
{
public:
	SortingHeap() : Sorting<Iterator>("Heap Sort") {}
	void Sort(Iterator start, Iterator end)
	{

	}
protected:
	void Heapify(Iterator first, Iterator last)
	{
		while (first != last)
		{

		}

	}
};