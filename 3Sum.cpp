#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution {
    public:
        vector<vector<int>> threeSum(vector<int> nums) {
            vector<vector<int>> ans;
            int n = (int)nums.size();
            if (n < 3) return ans;

            sort(nums.begin(), nums.end());

            for (int i = 0; i < n - 2; ++i) {
                if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate first elements
                int l = i + 1;
                int r = n - 1;
                while (l < r) {
                    int sum = nums[i] + nums[l] + nums[r];
                    if (sum == 0) {
                        ans.push_back({nums[i], nums[l], nums[r]});
                        ++l; --r;
                        while (l < r && nums[l] == nums[l - 1]) ++l; // skip duplicates
                        while (l < r && nums[r] == nums[r + 1]) --r;
                    } else if (sum < 0) {
                        ++l;
                    } else {
                        --r;
                    }
                }
            }
            return ans;
        }
};

int main() {
    solution s1;
    vector<int> nums = {-1,0,1,2,-1,-4};

    auto ans = s1.threeSum(nums);

    cout << "Triplets found:\n";
    for (auto &t : ans) {
        cout << "[" << t[0] << ", " << t[1] << ", " << t[2] << "]\n";
    }

    return 0;
}