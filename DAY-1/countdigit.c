#include<stdio.h>
int countdigit(long int x){
    int count=0;
    if (x==0)
       return 1;
    else{
      while(x!=0){
      x/=10;     //to remove last digit.
      count+=1;
     }
    }
   
  return count;
}
int main(){
    long int num;
    printf("Enter the number of which you want to find number of digit:");
    scanf("%ld",&num);
    printf("The number of digit in %ld is %d",num ,countdigit(num));
    return 0;
}