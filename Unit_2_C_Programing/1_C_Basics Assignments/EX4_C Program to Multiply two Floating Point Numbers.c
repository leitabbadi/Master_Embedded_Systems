/*
 ====================================================Home_work-1=======================================================
 Name        : EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Leit Abbadi
 Created on	 : Feb 20, 2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4 C Program to Multiply two Floating Point Numbers
               using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

	float x,y,mul;

	printf("Enter Tow Numbers:");
	fflush(stdout);
	scanf("%f %f" ,&x ,&y);
	printf("Product: %0.2f",mul=(x*y));

	return 0;

}
