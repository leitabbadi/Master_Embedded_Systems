/*
 ===================================Home_work-2========================================
 Author      : Leit Abbadi
 Created on	 : Feb 22, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX13 C program
              to Calculat Sum of Natural Numbers using Ansi-style (c99)
 ======================================================================================
 */


#include<stdio.h>
#include<stdlib.h>

int main(void){

	int x,i,sum=0;

	printf("Enter an integer:");
	fflush(stdout);
	scanf("%d",&x);


	for(i=1;i<=x;i++)
	{
		sum += i;
	}
	printf("sum = %d",sum);

	return 0;
}


