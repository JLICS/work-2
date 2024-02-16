
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>
main() {
    int m=2;
	double matrix[2][2];
    double sumMainDiagonal = 0;
    double sumSecondaryDiagonal = 0;
    int i,j,k=0,l;;
    
	// Ввод значений матрицы с консоли
    printf("vedite znachenia 3x3\n"); 
	for(i=0; i<3; i++)
	{
    for(j=0; j<3; j++) 
	{
	scanf("%lf", &matrix[i][j]);
        }
    }
    // Вычисление суммы элементов на главной диагонали
    for (i= 0; i < 3; i++) {
        sumMainDiagonal += matrix[i][i];
    }
    // Вычисление суммы элементов на побочной диагонали
    for ( i = 0; i < 3; i++) {
        sumSecondaryDiagonal += matrix[i][2 - i];
    }
    // Вывод результатов на консоль
    printf("Сумма элементов на главной диагонали: %lf\n", sumMainDiagonal);
    printf("Сумма элементов на побочной диагонали: %lf\n", sumSecondaryDiagonal);
    
	return 0;
}
	
