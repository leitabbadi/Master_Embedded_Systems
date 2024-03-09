/*
 ===================================Home_work-2========================================
 Author      : Leit Abbadi
 Created on	 : Feb 22, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX8 C program
              to Find Factorial! of Numbers using Ansi-style (c89)
 ======================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main(void){

	int x,i,sum=1;

	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);


	for(i=1;i<=x;i++)
	{
		sum *= i;
	}
	printf("Factorial of Number %d is = %d",x,sum);

	return 0;
}
