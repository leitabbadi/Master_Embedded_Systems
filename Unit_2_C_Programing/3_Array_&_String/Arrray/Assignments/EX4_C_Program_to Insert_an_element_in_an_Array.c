/*
 ====================================================Home_work-1=======================================================================
			Author      : Leit Abbadi
			Created on	: March 10, 2024
			Description : Unit 2 C-Programming >> Assignment 1 -->  3_Array_&_String >> 
                          EX4_C_Program_to Insert_an_element_in_an_Array using Ansi-style (c89)
 =======================================================================================================================================
 */
#include <stdio.h>

int main(){


    int Tab[30],num,i,element,location;

    printf("Enter no of element: ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
            scanf("%d",&Tab[i]);
        }
   
    printf("Enter the element to be inserted :");
    scanf("%d",&element);

    printf("Enter the location :");
    scanf("%d",&location);

    for(i=num;i>=location;i--){
        Tab[i]= Tab[i-1];
    }
    num++;
    Tab[location-1]=element;

    for(i=0;i<num;i++){
            printf("\n%d ",Tab[i]);
        }
    return 0;
}


