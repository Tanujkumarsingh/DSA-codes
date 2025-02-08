#include <iostream>
#include <vector>

using namespace std;
// this is the brute force approach to find the majority element in the vector array
// the time complexity of hte code is O(n2)
class element
{
public:
    // function to find the majority element in the vector array
    int majorityelement(vector<int> &nums)
    {
        for (int val : nums)
        {
            int freq = 0;
            for (int ele : nums)
            {
                if (ele == val)
                {
                    freq++;
                }
            }
            if (freq > nums.size() / 2)
            {
                return val;
            }
        }
    }
};

int main()
{
    vector<int> vec = {1, 2, 2, 1, 1, 1};
    element find;

    int ans = find.majorityelement(vec); // call the function and store the return value in the ans variable
    cout << "the majority element in the aray is: " << ans << endl;

    return 0;
}