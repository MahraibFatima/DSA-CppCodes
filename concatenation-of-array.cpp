#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();

        for(int i=0; i<size; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};


class Solution2
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> res;
        for (int i = 0; i < 2*nums.size();)
        {
            for (int j = 0; j < nums.size(); ++j)
            {
                res.push_back(nums[j]);
                ++i;
            }
        }
        return res;
    }
};
int main()
{
    Solution s;
    vector<int> nums{1, 2, 3};
    vector<int> res = s.getConcatenation(nums);
    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}