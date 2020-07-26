#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        ans.assign(2, -1);
        for (unsigned int i = 0; i <= nums.size() - 2; i++) //left to right
        {
            for (unsigned int j = nums.size() - 1; j > i; j--) //right to left
            {
                if ((nums[i] + nums[j]) == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
                else
                    continue;
            }
        }
        return ans; //warning: control reaches end of non-void function [-Wreturn-type]
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution s;
    cout << s.twoSum(nums, target)[0] << "," << s.twoSum(nums, target)[1] << endl;
    return 0;
}