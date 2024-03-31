#include <stdio.h>

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        // This will print garbage values because we haven't initialized the
        // array
        printf("%d\n", nums[i]);
    }

    int numss[4][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", numss[i + 1][j + 1]);
        }
        printf("\n");
    }
}
