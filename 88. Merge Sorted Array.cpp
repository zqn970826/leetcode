// 双指针
// easy
void merge(int* nums1, int size1, int m, int* nums2, int size2, int n){
    int n1 = m-1, n2 = n-1, i = m+n-1;
    while (0 <= n1 && 0 <= n2)
    {
        if (nums1[n1] <= nums2[n2])
        {
            nums1[i--] = nums2[n2--];
        }
        else
        {
            nums1[i--] = nums1[n1--];
        }
    }
    while (0 <= n2)
    {
        nums1[i--] = nums2[n2--];
    }
}