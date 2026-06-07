#include <stdio.h>
void decimalToBinary(int x){
    int binary[45],i=0;
    if (x== 0) {
        printf("Binary:0");
        return;
    }
    printf("Binary:");
    while (x > 0) {
        binary[i] = x % 2;
        x = x / 2;
        i++;
    }
    for (int j=i-1;j>=0;j--) {
        printf("%d",binary[j]);
    }
}
int main() {
    int n;
    printf("Enter a decimal number:");
    scanf("%d", &n);
    decimalToBinary(n);
    return 0;
} 