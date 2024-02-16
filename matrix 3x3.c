
#include <stdio.h>
#include <stdlib.h>
int main() {
    int m=3;
	double matrix[3][3];
    double One = 0;
    double Two = 0;
    int i,j;
    
	
    printf("vedite znachenia 3x3\n"); 
	for(i=0; i<3; i++)
	{
    for(j=0; j<3; j++) 
	{
	scanf("%lf", &matrix[i][j]);
        }
    }
    
    for (i= 0; i < 3; i++) {
        One += matrix[i][i];
    }
    
    for ( i = 0; i < 3; i++) {
        Two += matrix[i][2 - i];
    }
    
    printf("Summa 1 dioganal: %lf\n", One);
    printf("Summa 2 dioganal: %lf\n",Two);
    
	
}
	
