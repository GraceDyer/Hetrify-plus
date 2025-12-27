long long minSubArraySum(long long *nums, int length) {
    long long current, min;
    current = nums[0];
    min = nums[0];
    for (int i = 1; i < length; i++) {
        if (current < 0) {
            current = current + nums[i];
        } else {
            current = nums[i];
        }
        if (current < min) {
            min = current;
        }
    }
    return min;
}
