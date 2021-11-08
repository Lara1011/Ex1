#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Q1: -------------------------------------------------------
/*
will return if a number is Armstrong number.
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
*/
int isArmstrong(int num) {
	if (num == NULL) {
		return -1;
	}
	int count = 0;
	int sum = 0;
	int rec = num;
	while (num > 0) {
		count++;
		num = num / 10;
	}
	//	count++;
	num = rec;
	while ((num > 0)) {
		sum = sum + pow((num % 10), count);
		num = num / 10;
	}
	//	sum = sum+(pow(num, count));
	num = rec;
	if (num == sum) {
		return 1;
	}
	else {
		return 0;
	}
}
//-----------------------------------------------------------


//Q2: -------------------------------------------------------
/*
will return if a number is a palindrome.
A palindrome number is a number that remains the same when digits are reversed.
*/
int isPalindrome(int num)
{
	if (num == NULL) {
		return -1;
	}
	int rev = 0;
	int rec = num;
	while (num > 0) {
		rev = (num % 10) + (rev*10);
		num = num / 10;
	}
	num = rec;
	if (rev == num) {
		return 1;
	}
	else {
		return 0;
	}
}
//-----------------------------------------------------------

