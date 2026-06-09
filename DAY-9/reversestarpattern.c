#include <stdio.h>
void reverseStarPattern(int x){
    for (int i=1;i<=x;i++){
        for (int j=x;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    printf("Given Reverse Star Pattern:\n");
    reverseStarPattern(5);
    return 0;
}