#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = nums.size();
    if (count <= 1)
        return count;

    int currentIndex = 0; 

    for (int i = 1; i < count; ++i)
    {
        if (nums[i] != nums[currentIndex])
        {
            currentIndex++;
            nums[currentIndex] = nums[i];
        }
    }
        // if (count == (int)nums.size())
        //     count = 0;
        // for (int i = 0; i < count; ++i)
        // {
        //     cout << nums.at(i) << " ";
        // }
        return currentIndex;
    }
};

int main()
{
    Solution s;
    vector<int> nums{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    cout << "Size: " << nums.size() << endl
         << s.removeDuplicates(nums);
}