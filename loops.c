#include <stdio.h>

int main() {
    int nums[] = {2, 3, 5, 6, 2, 9};
    int x;
    for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
        x += nums[i];
    }
    printf("Total: %d", x);
}