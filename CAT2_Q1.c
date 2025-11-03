/*
NAME: IRUNGU JAMES NDIRANGU 
REGISTRATION NUMBER: PA106/G/28731/25
DATE:03 NOVEMBER 2025
*/

#include <stdio.h>

int main() {
    
    //Declaring and initializing a 2D array named scores with 2 rows and 2 columns
    int scores[2][2] = {
        {65, 92},
        {84, 70}
    };
    
    // Print the elements of the array using nested for loop
    printf("Array elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
