bool canAliceWin(int* nums, int numsSize) {
    int a = 0;
    int b = 0;
    for(int i = 0;i<numsSize;i++)
    {
        if(nums[i]>9)
        {
            a += nums[i];
        }

        else
        {
            b += nums[i];
        }
    }

    if(abs(a-b))
    return true;

    else
    return false;
    
}