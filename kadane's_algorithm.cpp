#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//The time complexity of this code is o(n)
//kadane's Algorithm is the most optimised code of the largest subarray sum
class kadaneAlgorithm
{
public:
    // fumction to find the maximum of the subarray
    int findsubarray(vector<int> &vec)
    {
        int maxsum = INT_MIN;
        int current_sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {

            current_sum = current_sum + vec[i];
            maxsum = max(current_sum, maxsum);
            // if condition reset the current sum value to 0 if the sum of the subarray is negative
            if (current_sum < 0)
            {
                current_sum = 0;
            }
        }
        cout << "The subarray has the largest sum is: " << maxsum << endl;
    }
};
int main()
{
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    kadaneAlgorithm find;   // find is the object of the class kadaneAlgorithm
    find.findsubarray(vec); // call the function findsubarray

    return 0;
}