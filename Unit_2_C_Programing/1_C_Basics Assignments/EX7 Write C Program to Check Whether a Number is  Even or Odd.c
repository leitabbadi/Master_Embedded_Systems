/*
 ===================================Home_work-2=====================================
 Author      : Leit Abbadi
 Created on	 : Feb 21, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX7 Write C Program
 	 	 	   to Check Whether a Number is  Even or Odd using Ansi-style (c99)
 ===================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int Test;

	printf("Enter an integer you Want to check:");
	fflush(stdout);
	scanf("%d",&Test);

	if(Test % 2 == 0)
		printf("The Number %d is Even.",Test);
	else
		printf("The Number %d is Odd.",Test);

	return 0;
}

