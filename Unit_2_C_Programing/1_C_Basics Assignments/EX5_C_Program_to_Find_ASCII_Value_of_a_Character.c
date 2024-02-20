/*
 ====================================================Home_work-1=======================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Leit Abbadi
 Created on	 : Feb 20, 2024
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX4 C Program to Find ASCII Value of a Character
               using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char x;

	printf("Enter Character:");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);

	return 0;
}
