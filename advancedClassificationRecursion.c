#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
This function calculate how many digits the number has
*/
int numOfDigs(int num)
{
	int count = 0;
	while (num > 0)
	{
		count++;
		num = (num / 10);
	}
	return count;
}
/*
input[number,power]
This function calculate the sum of each digit to the k (constant) power;
*/
int power(int n, int k)
{
	if (n < 10)
	{
		return pow(n, k);
	}

	return pow((n % 10), k) + power((n / 10), k);
}
//Q1: -------------------------------------------------------
/*
will return if a number is Armstrong number.
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong1(int num)
{
	int dig = numOfDigs(num);
	int numWithPow = power(num, dig);
	if (numWithPow == num) {
		return 1;
	}
	return 0;
}
//-----------------------------------------------------------


//Q2: -------------------------------------------------------
/*
will return if a number is a palindrome.
A palindrome number is a number that remains the same when digits are reversed.
*/
/*
    How does the function works:
 - Calculate number of digits in each call to the function.
 - variable 'newNum' holds the first digit in the number from the left side, i.e: number = 12345 -> 'newNum' = 1;
 - check if the 'newNum' doesn't equal to the last number, then the number isn't palindrome.
    i.e: 12345 -> 'newNum' = 1, 'num%10' = 5 , 1 != 5 , return 0.
 - else continue and cut the the first and the last digits (the edges) in the number, i.e: number = 12321 -> 232
*/
int isPalindrome1(int num)
{
	if (num == 0)
	{
		return 1;
	}
	int numOfDig = numOfDigs(num);
	int newNum = num / (pow(10, (numOfDig - 1)));
	if (newNum != (num % 10))
	{
		return 0;
	}
	num = num - (newNum * (pow(10, (numOfDig - 1))));
	return isPalindrome1(num / 10);
}
//-----------------------------------------------------------
