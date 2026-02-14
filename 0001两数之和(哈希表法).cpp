#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <vector>
#include<unordered_map>//引入哈希表的头文件
//哈希表就是要查的元素当键值，索引当实值
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{

		unordered_map <int, int>hash;//此时的哈希表里面是空的
		for (int i = 0; i < nums.size(); ++i)
		{
			int complement = target - nums[i];
			if (hash.find(complement) != hash.end())
			{
				return{ hash[complement],i };
			}
			hash[nums[i]] = i;//先查找后插入
		}
		return{};
	}
};