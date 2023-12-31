// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int mini = INT_MAX;
    int ans = 0;

    for (int i = 0; i < n - 2; i++)
    {

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum > target)
            {
                int diff = sum - target;
                if (diff < mini)
                {
                    mini = diff;
                    ans = sum;
                }
                right--;
            }
            else if (sum < target)
            {
                int diff = target - sum;
                if (diff < mini)
                {
                    mini = diff;
                    ans = sum;
                }
                left++;
            }
            else
                return sum;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {0, 0, 0};
    int result = threeSumClosest(vec, 1);
    cout << result;
    return 0;
}