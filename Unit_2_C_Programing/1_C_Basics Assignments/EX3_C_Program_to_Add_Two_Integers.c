/*
 ====================================================Home_work-1=======================================================================
Name        : EX3_C_Program_to_Add_Two_Integers.c
Author      : Leit Abbadi
Created on	: Feb 19, 2024
Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX3 C Program to Add Two Integers using Ansi-style (c99)
 =======================================================================================================================================
 */

#include<stdio.h>
#include <stdlib.h>

int main(void)
{

	int x,y,sum;

	printf("Enter two integers:");
	fflush(stdout);
	scanf("%d %d" ,&x ,&y);
	printf("sum= %d", sum=(x+y));

	return 0;
}
