#define _CRT_SECURE_NO_WARNINGS 
int dominantIndex(int* nums, int numsSize)
{
    int max = *nums;
    int max2 = *(nums + 1);

    int n = 0;
    if (numsSize == 1)
        return 0;
    for (int i = 1; i < numsSize; i++)
    {
        int count = 0;
        if (*(nums + i) > max)
        {
            max2 = max;
            max = *(nums + i);
            n = i;
            count++;
        }
        if (count == 0)
        {
            if (max2 < *(nums + i))
                max2 = *(nums + i);
        }
    }
    // if(max2< (*(nums+numsSize)))
   //  max2=*(nums+numsSize);
    if (max >= (2 * max2))
        return n;
    return -1;
}
