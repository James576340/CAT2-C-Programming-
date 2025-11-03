/*
Name: IRUNGU JAMES NDIRANGU 
Registration Number: PA106/G/28731/25
Date: 03/10/2025
Description: C Files
*/

#include <stdio.h>

void displayFileContents() {
     printf("Contents of input.txt:\n");
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input file for display!\n");
        return;
    }
    int num;
    while (fscanf(in, "%d", &num) == 1) {
        printf("%d\n", num);
    }
    fclose(in);
    
    printf("\n");
    printf("Contents of output.txt:\n");
    FILE *out = fopen ("output.txt", "r");
    if (out == NULL) {
        printf("ERROR! OUTPUT DISPLAY UNAVAILABLE.\n");
        return;
    }
    char line[100];
    while (fgets(line, sizeof(line), out) != NULL) {
        printf("%s", line);
    }
    fclose(out);
}

int main() {
     //Prompt and write to input.txt
    FILE *fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        fprintf(fptr, "%d\n", num);
    }
    fclose(fptr);

    //Reading from input.txt, compute, write to output.txt
    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error opening input file for reading!\n");
        return 1;
    }
    int sum = 0;
    int count = 0;
    int num2;
    while (fscanf(input, "%d", &num2) == 1) {
        sum += num2;
        count++;
    }
    fclose(input);
    if (count == 0) {
        printf("No numbers found in input file!\n");
        return 1;
    }
    double average = (double)sum / count;
    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output file for writing!\n");
        return 1;
    }
    fprintf(output, "Sum: %d\nAverage: %.2f\n", sum, average);
    fclose(output);

    
    displayFileContents();

    return 0;
}