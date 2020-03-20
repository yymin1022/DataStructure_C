#include <stdio.h>

int main() {
    int nums[] = {9, 3, 4, 6, 2, 1, 7, 8, 5};

    for(int i = 0; i < sizeof(nums) / sizeof(0); i++){
        int least = i;

        for(int j = i + 1; j < sizeof(nums) / sizeof(0); j++){
            if(nums[j] < nums[least]){
                least = j;
            }
        }

        if(i != least){
            int temp = nums[i];
            nums[i] = nums[least];
            nums[least] = temp;
        }
    }

    printf("RESULT\n");

    for(int i = 0; i < sizeof(nums) / sizeof(0); i++){
        printf("%d ", nums[i]);
    }

    return 0;
}