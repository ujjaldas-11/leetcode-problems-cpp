#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution {
    public:
        vector<int> twosum(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
            int i = 0, j = nums.size()-1;
            vector<int> ans;
        while(i<j) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
            if(sum > target) {
                j--;
            } 

            if(sum < target) {
                i++;
            }
        }
        return {};
    }
        
};

int main() {
    solution s1;
    vector<int> nums ={2,3,4 };
    int target = 6;

   
    cout << s1.twosum(nums, target) << endl;
    return 0;

}