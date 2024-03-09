/*
 ====================================================Home_work-1=======================================================================
			Author      : Leit Abbadi
			Created on	: March 09, 2024
			Description : Unit 2 C-Programming >> 3_Array Assignment  --->> 
                    EX1_C_Program_To_Find_Sum_Of_Two_Matrix_Of_Order_2x2.c using Ansi-style (c89)
 =======================================================================================================================================
 */
#include <stdio.h>

int main(){

    int r,c;
    float Mat1[2][2];
    float Mat2[2][2];

    printf("Enter The Elements of 1st Matrix: \n" );

    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("Enter a(%d,%d):",r+1,c+1);
            scanf("%f", &Mat1[r][c]);  
        }     
    }
  
    printf("\n");
    printf("Enter The Elements of 2nd Matrix: \n" );

    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            printf("Enter b(%d,%d):",r+1,c+1);
            scanf("%f", &Mat2[r][c]);  
        }     
    }
  
    printf("\n");
    printf("Sum of Matrix:\n\n");
    for(r=0;r<2;r++){
        for(c=0;c<2;c++){
            Mat1[r][c] +=  Mat2[r][c];    
            printf("%.2f\t",Mat1[r][c]); 
        }     
    printf("\n");
    }

    return 0;
}

