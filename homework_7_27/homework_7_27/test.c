#define _CRT_SECURE_NO_WARNINGS 1

//https://leetcode.cn/problems/remove-element/
//int removeElement(int* nums, int numsSize, int val) {
//    int src = 0;
//    int dst = 0;
//    while (src < numsSize)
//    {
//        if (nums[src] != val)
//        {
//            nums[dst] = nums[src];
//            dst++;
//            src++;
//        }
//        else
//        {
//            src++;
//        }
//    }
//    return dst;
//}




//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
int removeDuplicates(int* nums, int numsSize) {
    int dst = 0, src = 1;
    while (src < numsSize)
    {
        if (nums[dst] == nums[src])
        {
            src++;
        }
        else
        {
            dst++;
            nums[dst] = nums[src];
            src++;
        }
    }
    return ++dst;
}