/*
 ===================================Home_work-2=====================================
 Author      : Leit Abbadi
 Created on	 : Feb 22, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX11 C program
               to find the Largest Number Among Three Numbers using Ansi-style (c99)
 ===================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float num;

	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&num);

	if(num<0)
		printf("%.1f you Enterd is Negative",num);
	else if(num>0)
		printf("%.1f is Positive.",num);
	else
		printf("You Enterd Zero.");


	return 0;
}

