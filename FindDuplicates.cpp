#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort( nums.begin(), nums.end() );
        for (int i = 0; i < nums.size()-1; ++i)
        {
           if (nums[i] == nums[i+1])
                return true;    
        }
        return false;
    }
};

int main()
{
    Solution s;

    vector<int> nums{1, 2, 3};
    if (s.containsDuplicate(nums))
        cout << "True"<<endl;
    else
        cout << "False"<<endl;

    vector<int> nums2{1, 2, 3,1};
    if (s.containsDuplicate(nums2))
        cout << "True"<<endl;
    else
        cout << "False"<<endl;
}