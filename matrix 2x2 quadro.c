#include <stdio.h>
#include <stdlib.h>
int main() {
    int m=2;
	int matrix[2][2];
    int SMatrix[2][2];
    int i,j;
    
	
    printf("vedite znachenia matrix\n"); 
	for(i=0; i<2; i++)
	{
    for(j=0; j<2; j++) 
	{
	scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
           SMatrix[i][j] = matrix[i][j] * matrix[i][j];
        }
    }
    printf("kvadrat\n");     
    for (i = 0; i<2; i++)
    {
        for (j = 0; j<2; j++)
        {
            printf("%d  ", SMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
