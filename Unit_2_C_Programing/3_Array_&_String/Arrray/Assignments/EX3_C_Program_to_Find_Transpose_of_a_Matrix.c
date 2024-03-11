/*
 ====================================================Home_work-1=======================================================================
			Author      : Leit Abbadi
			Created on	: March 10, 2024
			Description : Unit 2 C-Programming >> Assignment 1 -->  3_Array_&_String >> 
                          EX3_C_Program_to_Find_Transpose_of_a_Matrix using Ansi-style (c89)
 =======================================================================================================================================
 */
 #include <stdio.h>

int main(){
    int r,c,i,j;
    int Mtr[100][100];
    int t_Mtr[100][100]; 

// size of Matrix is specified by user the Max is [100][100]
    
    printf("Enter (Rows,Column) of Matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter elements of matrix:\n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter elements a(%d,%d): ",i+1,j+1);
            scanf("%d",&Mtr[i][j]);
        }
    }

// print the the elements as matrix 

    printf("\n");
    printf("Entered Matrix:");
    for(i=0;i<r;i++){
        printf("\n");        
        for(j=0;j<c;j++){
            printf("%d  ",Mtr[i][j]);
        }
    printf("\n");
    }   

// print the Transpos of matrix

    printf("Transpos of Matrix:");
    for(i=0;i<r+1;i++){
        printf("\n");        
        for(j=0;j<c-1;j++){
            t_Mtr[i][j]=Mtr[j][i];
            printf("%d  ",t_Mtr[i][j]);
        }
    printf("\n");
    }   
    
    return 0;
}

