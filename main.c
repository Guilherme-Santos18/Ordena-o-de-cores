#include <stdio.h>

void sortColors(int* nums, int numsSize) {
    int count[3] = {0, 0, 0};

    // Contar o número de 0's, 1's e 2's
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }

    // Sobrescrever o array
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < count[i]; j++) {
            nums[index++] = i;
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
