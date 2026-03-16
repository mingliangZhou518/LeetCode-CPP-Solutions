#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//ASCII码规定用0--127表示所有的字符
//滑动窗格双指针思想
//就是双指针移动，不断更新长度，返回最大长度
class Solution
{
public:
	int lengthOfLongestSubstring(string s)
	{
		//首先创建一个能装下所有ASC码的vector容器
		vector<int>lastPos(128, -1);
		int maxLen = 0;
		int left = 0;//相当于s的第0个位置
		for (int right = 0; right < s.size(); right++)
		{
			char c = s[right];//转化为ASCII码，方便找重
			//整体就是边比较边插入
			//这个>=的理解
			//首先把所有的初始化为-1就很有讲究，只要找到>=left这种0及其0以上的值说明重复
			//然后>=还能确保在当前滑动窗口内，而不是根之前的重复
			if (lastPos[c] >= left)
			{
				left = lastPos[c] + 1;//一旦重复就把s的left位置移动到前面重复数字的下一位
			}
			//否则就是在asc区分数组中插入位置值
			lastPos[c] = right;
			//求出没时刻的最大间距
			maxLen = max(maxLen, right - left + 1);
		}
		return maxLen;
	}
};
int main()
{

	return 0;
}
