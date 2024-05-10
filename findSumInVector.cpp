#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    for(int i: res){
                        cout<< i <<" ";
                    }
                    return res;
                }
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> test {2, 7, 11, 15};
    vector<int> res;
    res = s.twoSum(test, 9);
    for (int i : res)
    {
        cout << i << " ";
    }
}