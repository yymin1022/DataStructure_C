#include <stdio.h>

float rsum(float[], int);

int main() {
    float nums[5] = {1.0f, 2.5f, 3.8f, 2.5f, 7.8f};

    printf("%f\n", rsum(nums, 5));
    return 0;
}

float rsum(float list[], int n){
    if(n)
    return rsum(list, n - 1) + list[n - 1];
        return list[0];
}