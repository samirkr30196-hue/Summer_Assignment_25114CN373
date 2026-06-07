#include <stdio.h>
#include <math.h>
int binaryToDecimal(long long x){
    int decimal = 0, i = 0;
    while (x!= 0) {
        decimal += (x%10)*pow(2,i);
        x/= 10;
        i++;
    }
    return decimal;
}
int main(){
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("Decimal:%d",binaryToDecimal(n));
    return 0;
}