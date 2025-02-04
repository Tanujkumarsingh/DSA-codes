#include<iostream>
#include<vector>
using namespace std;

//The code is using brute force approach to find the subarray
class NumberOfSubarray{
    public:
    //function find the total number of possible subarray of the given array
    // Time complexity of the code is O(n3)
    int find_Subarray(vector<int>& vec){
        for(int i = 0; i<vec.size(); i++){
            for(int j = i; j<vec.size(); j++){
                 for (int k = i; k <= j; k++) {
                    cout << vec[k] << " ";
                }
                cout << endl;
            }
        }
    }
};

int main(){
vector<int>vec = {1, 2, 3, 4, 5};
NumberOfSubarray find;
find.find_Subarray(vec); //call the functon find_Subarray
    return 0;
}