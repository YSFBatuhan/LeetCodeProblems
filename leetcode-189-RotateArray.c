int majorityElement(int nums, int numsSize) {
    int count = 0;
    int candidate = 0;

    
    for (int i = 0; i  numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate)  1  -1;
    }


    count = 0;
    for (int i = 0; i  numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count  numsSize  2) {
        return candidate;
    } else {
        printf(Çoğunluk öğesi yok.n);
        return -1;
    }
}