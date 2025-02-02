#include <iostream>
#include <vector>
using namespace std;

class unique_number
{
public:
    // Function to find the unique number in the array
    int find_number(vector<int> &nums)
    {
        int unique = 0;
        for (int value : nums)
        {
            unique ^= value;
        }
        return unique;
    }
};

int main()
{
    vector<int> nums = {1, 3, 5, 3, 1};
    unique_number find;

    cout << "The unique number in the array elements is: " << find.find_number(nums) << endl;
    return 0;
}