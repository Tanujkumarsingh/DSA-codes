#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//The time complexity of this code is o(n2)
class NumberOfSubarray{
    public:
    //function to find the sum of the largest subarray
    int find_Subarray(vector<int>& vec){
        int maxsum = INT_MIN;
        for(int start = 0; start<vec.size(); start++){
            int current_sum = 0;
            for(int end = start; end<vec.size(); end++){
                  current_sum += vec[end];
                  maxsum = max(current_sum, maxsum);
            }
        }
        cout<<"The subarray has the largest sum is: "<<maxsum<<endl;
    }
};

int main(){
vector<int>vec = {1, 2, 3, 4, 5};
NumberOfSubarray find;
find.find_Subarray(vec); //call the function find_subarray
    return 0;
}