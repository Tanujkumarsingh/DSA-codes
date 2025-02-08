#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//tiem complexity of the code is O(nlogn)
class element
{
public:
    int majority_element(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // Sorting takes O(n log n)
        int ele = nums[0], freq = 1, n = nums.size();

        for (int i = 1; i < n; i++)
        {
            if (nums[i] == ele)
            {
                freq++;
            }
            else
            {
                freq = 1;
                ele = nums[i]; // Update element
            }

            if (freq > n / 2)
            {
                return ele; // Return the correct element
            }
        }

        return -1; // If no majority element found
    }
};

int main()
{
    vector<int> vec = {1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3};

    element find;
    int ans = find.majority_element(vec);
    
    if (ans != -1)
        cout << "The majority element in the vector array is: " << ans << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
