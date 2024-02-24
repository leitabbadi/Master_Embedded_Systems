/*
 ===================================Home_work-2=====================================
 Author      : Leit Abbadi
 Created on	 : Feb 21, 2024
 Description : Unit 2 C-Progtamming >> Assignment 2 C-Basic >> EX9 C Program
               to Test_check Vowel or Consonant using Ansi-style (c99)
 ===================================================================================
 */
#include <stdio.h>

int main() {
    char Test_ch;

    printf("Enter an Alphabet: ");
    fflush(stdout);
    scanf("%c", &Test_ch);

    if (Test_ch == 'a' || Test_ch == 'e' || Test_ch == 'i' || Test_ch == 'o' || Test_ch == 'u' ||
        Test_ch == 'A' || Test_ch == 'E' || Test_ch == 'I' || Test_ch == 'O' || Test_ch == 'U')
        printf("%c is a vowel.", Test_ch);

    else if ((Test_ch >= 'a' && Test_ch <= 'z') || (Test_ch >= 'A' && Test_ch <= 'Z'))
        printf("%c is a consonant.", Test_ch);

    else
        printf("%c is not a vowel or consonant.", Test_ch);

    return 0;
}


