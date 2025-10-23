#include <stdio.h>

int main() {
    int numbers[3][3];   
    int sum = 0;

  
    printf("Enter 9 numbers (for a 3x3 array):\n");

    for (int i = 0; i < 3; i++) {           
        for (int j = 0; j < 3; j++) {       
            printf("Enter value for [%d][%d]: ", i, j);
            scanf("%d", &numbers[i][j]);    
            sum += numbers[i][j];          
        }
    }

    printf("\nThe 3x3 array is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }


    printf("\nSum of all elements = %d\n", sum);

    return 0;
}

