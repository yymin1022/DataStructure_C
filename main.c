#include <stdio.h>

int main() {
    int nums[] = {9, 3, 4, 6, 2, 1, 7, 8, 5};

    for(int i = 0; i < ; i++){
        int least = i;

        for(int j = i + 1; j < 9; j++){
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

    for(int i = 0; i < 9; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}