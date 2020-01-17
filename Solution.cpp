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


ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	
	ListNode *lRes = new ListNode(0);
	ListNode *it1 = l1, *it2 = l2, *itSum = lRes;

	//Helpers
	int iTrans = 0, iSum = 0;

	while (it1 || it2 || iTrans)
	{
		iSum = iTrans;

		if (it1)
			iSum += it1->val;
		if (it2)
			iSum += it2->val;

		if (iSum >= 10)
		{
			itSum->val = iSum % 10;
			iTrans = 1;
		}
		else
		{
			itSum->val = iSum;
			iTrans = 0;
		}


		if (it1)
			it1 = it1->next;

		if (it2)
			it2 = it2->next;

		if (it1 || it2 || iTrans)
		{
			itSum = itSum->next = new ListNode(0);
		}

	}

	/*
	//Bad solution
	unsigned long u1 = 0, u2 = 0;
	int i = 1;

	while (l1 || l2)
	{
		if (l1)
			u1 += l1->val * i;
		if (l2)
			u2 += l2->val * i;

		i *= 10;

		l1 = l1->next;
		l2 = l2->next;
	}

	unsigned long uRes = u1 + u2;

	cout << "uRes = " << uRes << endl;

	ListNode *lRes = new ListNode(uRes % 10), *it = lRes;
	//lRes->val = uRes % 10;

	do
	{
		cout << "lRes->val = " << it->val << endl;

		uRes = (uRes - it->val) / 10;
		if (uRes > 0)
			it->next = new ListNode(uRes % 10);
	} while (it = it->next);
	*/

	return lRes;

}
