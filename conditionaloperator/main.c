// Example program #1 from Chapter 13 of Absolute Beginner's Guide
// to C, 3rd Edition
// File Chapter13ex1.c
/* This program asks for a number from 1 to 100 and tells then
whether or not their choice is equally divisible by 2 through 9. */

#include <stdio.h>

int main()
{
	// Define the integer to hold the user's guess and then get it
	// from the user

	int numPick;
	printf("Pick an integer between 1 and 100");
	printf("(The higher the better!)\n");
	scanf("%d", &numPick); //remember for an int, you do need the &


	for (int i = 2; i <= 9; i++)
	{
		printf("\n%d %s divisible by %d.", numPick, (numPick % i == 0) ? ("is") : 
		("is not"),i);
	}

}