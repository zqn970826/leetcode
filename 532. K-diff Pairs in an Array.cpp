static int cmp(int* a, int* b) { return *a - *b; }

int findPairs(int* nums, int numsSize, int k){
    int a = 0;
    int l = 0;
    int r = 1;

    qsort(nums, numsSize, sizeof(int), cmp);

    while (r < numsSize) {
        if (l > 0 && nums[l] == nums[l - 1]) {
            l += 1;
            r += (l == r);
            continue;
        }

        int d = nums[r] - nums[l];
        if (d < k) {
            r += 1;
        }
        else if (d > k) {
            l += 1;
            r += (l == r);
        }
        else {
            l += 1;
            r += 1;
            a += 1;
        }
    }
    return a;
}