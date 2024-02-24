/*
 ===================================Home_work-2========================================
 Author      : Leit Abbadi
 Created on	 : Feb 22, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX10 C program
              to Check Whether a Character is an Alphabet or not using Ansi-style (c99)
 ======================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char Test_alphabet;

	printf("Enter an alphabet:");
	fflush(stdout);
	scanf("%c",&Test_alphabet);

	if((Test_alphabet >= 'a' && Test_alphabet <= 'z' ) || (Test_alphabet >= 'A' && Test_alphabet <= 'Z' ))
		printf("%c is an alphabet",Test_alphabet);
	else
		printf("%c is not an alphabet.",Test_alphabet);


	return 0;
}




