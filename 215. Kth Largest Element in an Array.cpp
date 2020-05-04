// Medium
// sorting
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};

// 快速选择：时间复杂度 O(N)，空间复杂度 O(1)
class Solution {
public:
    vector<int> nums;
    int partition(int l, int r) {
        int index=(rand()%((r-l)+1))+l;
        swap(nums[index],nums[r]);
        int x = nums[r], i = l-1;
        for (int j = l; j <= r - 1; j++) {
            if (nums[j] <= x) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[r]);
        return i+1;
    }

    int quickSelect(int l, int r, int k){
        if(l==r){
            return nums[l];
        }
        int pivot=partition(l,r);
        if (k == pivot){
            return nums[k];
        }else if (k < pivot){
            return quickSelect(l, pivot - 1, k);
        }else{
            return quickSelect(pivot + 1, r, k);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        this->nums=nums;
        int size=nums.size();
        return quickSelect(0,size-1,size-k);
    }
};