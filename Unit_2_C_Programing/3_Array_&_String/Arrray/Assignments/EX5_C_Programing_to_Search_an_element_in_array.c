/*
 ====================================================Home_work-1=======================================================================
			Author      : Leit Abbadi
			Created on	: March 11, 2024
			Description : Unit 2 C-Programming >> Assignment 1 -->  3_Array >> 
                          EX5_C_Programing_to_Search_an_element_in_array using Ansi-style (c89)
 =======================================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[100];
    int num,i,element;

// elemnt of array by user
    printf("\nEnter no of element :");
    scanf("%d",&num);
//enter number in Array by user
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
  
// enter element by user to be searched 
  
    printf("\nEnter the elements to be Searched :");
    scanf("%d",&element);
// found the lovation of element enterd by user
    for(i=0;i<num;i++){
        if(element==arr[i]){
            printf("\nNumber found at the location = %d ",i+1);
            return 0; // if number found end the programe
        }
    }
	printf("Number not found\n");
	return 0;
}
