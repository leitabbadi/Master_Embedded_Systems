/*
 ====================================================Home_work-1=======================================================
 Name        : EX6_C_Program_to_Swap_Two_Numbers
 Author      : Leit Abbadi
 Created on	 : Feb 20, 2024
Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX6 C Program to Swap Two Numbers
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {


	float a,b;

	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);

	printf("After swapping, value of a = %0.2f\n",b);
	printf("After swapping, value of b = %0.2f",a);

	return 0;
}


