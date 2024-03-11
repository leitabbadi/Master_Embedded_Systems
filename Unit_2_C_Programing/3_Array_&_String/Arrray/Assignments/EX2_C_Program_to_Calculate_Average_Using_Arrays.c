/*
 ====================================================Home_work-1=======================================================================
			Author      : Leit Abbadi
			Created on	: March 09, 2024
			Description : Unit 2 C-Programming >> Assignment 1 -->  3_Array >> 
                          EX2_C_Program_to_Calculate_Average_Using_Arrays using Ansi-style (c89)
 =======================================================================================================================================
 */
#include <stdio.h>

int main(){

    float Tab[100], sum; 
    int n,i;

    A:printf("Enter The Numbers of data:");
    scanf("%d",&n);

    if(n>100 || n<=0)
    {
        printf("Error! number should in range of (1 --> 100) \n");
        goto A;
    }

    for(i=0;i<n;i++)
    {
        printf("%d. Enter Number :",i+1);
        scanf("%f",&Tab[i]);
        sum+=Tab[i];
    }
    printf("Avrege = %.2f",sum/n);

    return 0;
}
