int missingNumber(int* nums, int numsSize){
    int ans = (numsSize + 1) * numsSize / 2, i;
    for(i = 0; i < numsSize; i++){
        ans -= nums[i];
    }
    return ans;
}

