#include "NumClass.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Q3: -------------------------------------------------------
/*
will return if a number is prime.
*/
int isPrime(int num)
{
	if (num == 2) {
		return 1;
	}
	if (num == NULL) {
		return -1;
	}
	else if (num % 2 == 0) {
		return 0;
	}
	else {
		for (int i = 3; i < num; i++) {
			if (num % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}
//-----------------------------------------------------------

//Q4: -------------------------------------------------------
/*
Strong number is a special number whose sum of the factorial of digits is equal to the original number.
*/

// Factorial
int fact(int num) {
	if (num == NULL) {
		return -1;
	}
	if (num == 0 || num == 1) {
		return 1;
	}
	return (num * fact(num - 1));
}

int isStrong(int num) {
	if (num == NULL) {
		return -1;
	}
	int sum = 0;
	int rec = num;
	while ((num > 0)) {
		sum = sum + fact((num % 10));
		num = num / 10;
	}
	num = rec;
	if (num == sum) {
		return 1;
	}
	else {
		return 0;
	}
}
//-----------------------------------------------------------

