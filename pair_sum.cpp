#include <iostream>
#include <vector>

using namespace std;
class pair_sum
{
public:
    int find_pairSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout << "Pair found: " << nums[i] << ", " << nums[j] << endl;
                }
            }
        }
    }
};

int main()
{
    vector<int> vec = {2, 11, 7, 15};
    int target = 13;
    pair_sum find;
    find.find_pairSum(vec, target);

    return 0;
}