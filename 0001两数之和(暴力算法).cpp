#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <vector>
//暴力枚举
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return{ i,j };//省略写法
                    /*
                    * 等价于vector<int>vec;
                    * vec.push_back(i);
                    * vec.push_back(j)
                    * return vec;
                    * return{元素内容}直接塞进对象中
                    */
                }
            }
        }
        return {};
    }
    
};
