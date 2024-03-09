/*
 ===================================Home_work-2=====================================
 Author      : Leit Abbadi
 Created on	 : Feb 21, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX4 C program
               to find the Largest Number Among Three Numbers using Ansi-style (c89)
 ===================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y,z;

	printf("Enter Three Number: ");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if ((x > y) && (x > z))
		printf("Largest Number = %.3f",x);
	else if (y > z)
		printf("Largest Number = %.3f",y);
        else
                printf("Largest Number = %.3f",z);


    return 0;
}
