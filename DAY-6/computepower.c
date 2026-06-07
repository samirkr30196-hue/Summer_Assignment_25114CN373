#include <stdio.h>
int power(int x, int y) {
    int answer = 1;
    for (int i=1;i<=y;i++){
        answer*=x;
    }
    return answer;
}
int main() {
    int n,a;
    printf("Enter base:");
    scanf("%d",&n);
    printf("Enter power:");
    scanf("%d",&a);
    printf("Base %d to the power %d:%d",n,a,power(n,a));
    return 0;
}