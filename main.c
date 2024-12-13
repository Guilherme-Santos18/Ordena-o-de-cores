#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int low = 0, high = numsSize - 1, i = 0;

    while (i <= high) {
        if (nums[i] == 0) {
            // Troca nums[i] com nums[low] e avança os dois ponteiros
            int temp = nums[i];
            nums[i] = nums[low];
            nums[low] = temp;
            low++;
            i++;
        } else if (nums[i] == 2) {
            // Troca nums[i] com nums[high] e decrementa high
            int temp = nums[i];
            nums[i] = nums[high];
            nums[high] = temp;
            high--;
        } else {
            // Avança o ponteiro
            i++;
        }
    }
}

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    sortColors(nums, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
