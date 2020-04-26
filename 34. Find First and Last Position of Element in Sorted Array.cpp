// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int size, int target, int* returnsize){
    *returnsize = 2;
    int *a = (int *)malloc(sizeof(int)*2);
    a[0] = -1, a[1] = -1;
    if (size == 0)
    {
        return a;
    }

    int i = 0, j = size-1, mid;
    while (i <= j)
    {
        mid = (i+j)>>1;
        if (nums[mid] < target)
        {
            i = mid+1;
        }
        else if (target < nums[mid])
        {
            j = mid-1;
        }
        else
        {
        	break;
        }
    }

    if (target != nums[mid])
    {
        return a;
    }

    while (i < mid && nums[i] != nums[mid]) i++;
    while (mid < j && nums[j] != nums[mid]) j--;
    a[0] = i, a[1] = j;
    return a;
}



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int size, int target, int* returnsize){
    *returnsize = 2;
    int *a = (int *)malloc(sizeof(int)*2);
    a[0] = -1, a[1] = -1;
    if (size == 0)
    {
        return a;
    }

    int i = 0, j = size-1, mid;
    while (i <= j)
    {
        mid = (i+j)>>1;
        if (nums[mid] < target)
        {
            i = mid+1;
        }
        else if (target < nums[mid])
        {
            j = mid-1;
        }
        else
        {
        	break;
        }
    }

    if (target != nums[mid])
    {
        return a;
    }

    while (i < mid && nums[i] != nums[mid]) i++;
    while (mid < j && nums[j] != nums[mid]) j--;
    a[0] = i, a[1] = j;
    return a;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int size, int target, int* returnsize){
    *returnsize = 2;
    int *a = (int *)malloc(sizeof(int)*2);
    a[0] = -1, a[1] = -1;
    if (size == 0)
    {
        return a;
    }

    int i = 0, j = size-1, mid;
    while (i <= j)
    {
        mid = (i+j)>>1;
        if (nums[mid] < target)
        {
            i = mid+1;
        }
        else if (target < nums[mid])
        {
            j = mid-1;
        }
        else
        {
        	break;
        }
    }

    if (target != nums[mid])
    {
        return a;
    }

    while (i < mid && nums[i] != nums[mid]) i++;
    while (mid < j && nums[j] != nums[mid]) j--;
    a[0] = i, a[1] = j;
    return a;
}

