#include "pch.h"
#include "Solution.h"

#include <unordered_map>
#include <iostream>
#include <map>
#include <vector>

//typedef map<int, int> MyMap;
typedef unordered_map<int, int> MyMap;

//using namespace std;

Solution::Solution()
{
}


Solution::~Solution()
{
}

void Solution::Solve()
{
	map<int, int> iMap;
	unordered_map<int, int> uMap;
}

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
	vector<int> result;
	
	MyMap vecMap;
	for (int i = 0; i < nums.size(); i++)
	{
		vecMap.insert({ nums[i], i });
	}

	for (int i = 0; i < nums.size(); i++)
	{
		int complement = target - nums[i];

		cout << "index (i) = " << i << ", nums[i] = " << nums[i] << ",  Complement = " << complement << endl;

		MyMap::iterator it = vecMap.find(complement);
		if (it != vecMap.end() && it->second != i)
		{
			cout << "Found!!! \n i = " << i << ", it->first = " << it->first << ", it->second = " << it->second << endl;

			result.push_back(i);
			result.push_back(it->second);

			return result;
		}

	}


	/*
	//Brute force
	for(int i = 0; i < nums.size(); i++)
	{
	for(int j = 0; j < nums.size(); j++)
	{

	if(i != j &&
	nums[i] + nums[j] == target)
	{
	result.push_back(i);
	result.push_back(j);

	return result;
	}
	}
	}
	*/

	return result;
}