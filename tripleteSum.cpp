#include <iostream>

using namespace std;


int main() {
    int target;
    cout <<"Enter target: ";
    cin >> target;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if((arr[i]+arr[j]+arr[k])==target) {
                    cout << i <<" "<< j << " " << k;
                }
            }
        }
    }
    return 0;

}