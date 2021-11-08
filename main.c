#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Enter your first number: ");
    int num1;
    scanf("%d", &num1);
      printf("Enter your second number: ");
    int num2;
    scanf("%d", &num2);
    int maxNum = num2;
    int minNum =num1;
    if(num1>num2){
        maxNum = num1;
        minNum = num2;
    }
    printf("The Armstrong numbers between %d - %d are : ", minNum,maxNum);
    for(int i= minNum ; i<=maxNum ; i++){
        if(isArmstrong(i)==1){
            printf("%d ", i);
        }
    }
      printf("\nThe Palindrome numbers between %d - %d are : ", minNum,maxNum);
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPalindrome(i)==1){
            printf("%d ", i);
        }
    }
      printf("\nThe Prime numbers between %d - %d are : ", minNum,maxNum);
    for(int i= minNum ; i<=maxNum ; i++){
        if(isPrime(i)==1){
            printf("%d ", i);
        }
    }
      printf("\nThe Strong numbers between %d - %d are : ", minNum,maxNum);
    for(int i= minNum ; i<=maxNum ; i++){
        if(isStrong(i)==1){
            printf("%d ", i);
        }
    }

	return 0;
}
