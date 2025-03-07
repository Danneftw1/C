#include <stdio.h> //input output operations
#include <stdlib.h>

// main is int because it returns an int
int main(int argc, char const *argv[]) // every entry point of a C program, this includes command line
{
    int matrix[3][4] = {0, 1 ,2 ,3 ,4 , 5 , 6 , 7 , 8 , 9 , 10 , 11};

    for (int i=0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("matrix[%d][%d]: %d    ", i, j, matrix[i][j]);
        }
        printf("\n");
    }
    return 0; // return success status, 1 return error status
}
