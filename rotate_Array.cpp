#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& arr, int k) {
    vector<int> temp(arr.size());
    for(int i = 0; i< arr.size(); i++) {
        temp[(i+k)%arr.size()] = arr[i];
    }

    arr = temp;
}

void print(vector<int>& arr, int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int k;
    cout<< "Enter a key: ";
    cin >> k;
    vector<int> arr;

    for(int i = 0; i<5; i++) {
        arr.push_back(i+1);
    }

    rotate(arr, k);
    print(arr, 5);
    return 0;
}