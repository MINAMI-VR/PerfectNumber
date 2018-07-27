#include <stdio.h>

int main() {
    int count = 1;
    unsigned int n;
    scanf("%d",&n);
    for (unsigned int i = 2; i < n; i+=2) {
        unsigned int x = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0){
                x += j;
            }
        }
        if (x == i) {
            printf("%d\t : %d\n", count, i);
            count++;
        }
    }
    return 0;
}
