#include <iostream>
#include <vector>

using namespace std;

class solution {
    public:
        vector<vector<int>> threeSum(vector<int> nums) {
            int i= 0,j= 0,k = 0;
            //base case
            if(k > nums.size()-1) return;

            if(nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k]) {
                if(nums[i] + nums[j] + nums[k] == 0) 
                    return {i,j,k};
                i++;
                j++;
                k++;
            }
            return {};

        }
};

int main() {
    solution s1;
    vector<int> nums = {-1,0,1,2,-1,-4};

    // cout << s1.threeSum(nums) << endl;

    return 0;
}