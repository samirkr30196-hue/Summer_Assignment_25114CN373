#include <stdio.h>
void halfpyramid(int x){
    for (int i=1;i<=x;i++){
        for (int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    halfpyramid(n);
    return 0;
}