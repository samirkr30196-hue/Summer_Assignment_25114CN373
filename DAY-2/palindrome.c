#include<stdio.h>
int reverse(int x){
    int rev=0;
    while(x!=0){
        int rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    return rev;
}

int checkPalindrome(int x){
    if(x==reverse(x))
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("Enter a number to check it is Palindrome or not:");
    scanf("%d",&n);

    if(checkPalindrome(n))
        printf("%d is a Palindrome number",n);
    else 
        printf("%d is not a Palindrome number",n);

  return 0;
}