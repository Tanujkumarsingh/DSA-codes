#include <iostream>
#include <vector>
using namespace std;

//time complexity of the code is O(n)
class PairSum {
public:
    int finder(vector<int>& vec, int target) {
        int start = 0;
        int end = vec.size() - 1;

        while (start < end) {
            int ps = vec[start] + vec[end];

            if (target < ps) {
                end--;
            } else if (target > ps) {
                start++;
            } else {  // Pair found
                cout << "Found: " << vec[start] << " + " << vec[end] << " = " << target << endl;
                cout << "Indices: " << start << " " << end << endl;
                return 1;  // Indicating success
            }
        }

        cout << "No pair found" << endl;
        return -1;  // Indicating failure
    }
};

int main() {
    vector<int> vec = {2, 7, 11, 15};
    PairSum find;
    find.finder(vec, 13);

    return 0;
}


/*
#include <iostream>
#include <vector>
using namespace std;

// Time complexity: O(n)
class PairSum {
public:
    vector<int> finder(vector<int>& vec, int target) {
        vector<int> ans;  // Stores indices of the pair
        int start = 0;
        int end = vec.size() - 1;

        while (start < end) {
            int ps = vec[start] + vec[end];

            if (target < ps) {
                end--;
            } else if (target > ps) {
                start++;
            } else {  // Pair found
                ans.push_back(start);
                ans.push_back(end);
                return ans;  // Returning the pair indices
            }
        }

        return {}; // Return empty vector if no pair is found
    }
};

int main() {
    vector<int> vec = {2, 7, 11, 15};
    PairSum find;
    
    vector<int> ans = find.finder(vec, 13);

    if (!ans.empty()) { // Check if a pair was found
        cout << "Found at indices: " << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
*/
