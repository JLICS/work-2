
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>
main() {
    int m=2;
	double matrix[2][2];
    double sumMainDiagonal = 0;
    double sumSecondaryDiagonal = 0;
    int i,j,k=0,l;;
    
	// ���� �������� ������� � �������
    printf("vedite znachenia 3x3\n"); 
	for(i=0; i<3; i++)
	{
    for(j=0; j<3; j++) 
	{
	scanf("%lf", &matrix[i][j]);
        }
    }
    // ���������� ����� ��������� �� ������� ���������
    for (i= 0; i < 3; i++) {
        sumMainDiagonal += matrix[i][i];
    }
    // ���������� ����� ��������� �� �������� ���������
    for ( i = 0; i < 3; i++) {
        sumSecondaryDiagonal += matrix[i][2 - i];
    }
    // ����� ����������� �� �������
    printf("����� ��������� �� ������� ���������: %lf\n", sumMainDiagonal);
    printf("����� ��������� �� �������� ���������: %lf\n", sumSecondaryDiagonal);
    
	return 0;
}
	
