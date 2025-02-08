#include <iostream>
#include <vector>
//time complexitu of the code is O(n)
using namespace std;
class majority_element
{
public:
//function to find the majority element using moore voting algorithm
    int moore_voting_algorithm(vector<int> &nums)
    {
        int freq = 0;
        int element = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
            {
                element = nums[i];
            }
            if (nums[i] == element)
            {
                freq++;
            }
            else
            {
                freq--;
            }
        }
        int count = 0;
        for (int val : nums)
        {
            if (val == element)
            {
                count++;
            }
        }
        if (count > nums.size() / 2)
        {
            return element;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    vector<int> vec = {1, 2, 2, 3, 1, 1, 1, 1, 1};
    majority_element find;
    int ans = find.moore_voting_algorithm(vec);
    cout << "the majority element in the vector array is: " << ans << endl;
    return 0;
}