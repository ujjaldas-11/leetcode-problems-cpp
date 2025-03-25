#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(int arr[], int size, int target) {
     vector<int> ans;
    
        for(int i=0; i<4; i++) {
            for(int j=i+1; j<4; j++) {
                if((arr[i]+arr[j])==target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    // return ans;
                    break;
                }
            }
        }
        return ans;
}

int main() {
    int arr[5] = {2,3,7,9,5};

    int target;
    cout << "Enter sum value: ";
    cin >> target;
    int n = sizeof(arr)/sizeof(int);

    vector<int> result = twoSum(arr, n, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1];
    } else {
        cout << "No two sum solution found.";
    }


    return 0;
}