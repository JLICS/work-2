/*�������� ������ ������ ���� double �������� 3 �� 3. 
������ � ������� ��� ��������, ������� �� ������� ����� ��� 
���������, ������������� �� ������� ��������� � ����� ���������, ������������� ��  �������� ���������.
�������� ������ ������ ���� int �������� 2 �� 2. ������ 
� ������� ��� ��������, ������� �� ������� ������� ������ �������.*/



#include <stdio.h>
#include <math.h>
    
int main()
{
    
	double a,b,c, x1,x2,d = 0;
	int x;
	do {

	scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
	
	d = pow(b,2) - 4*a*c;
    printf("d = %lf \n", d);
    
	if (d>0){
      x1 = (-b+sqrt(d))/(2*a);
      x2 = (-b-sqrt(d))/(2*a);
      printf("x1 = %lf x2 = %lf",x1,x2);
  }
  
  if (d==0){
      x1 = (-b+sqrt(d))/(2*a);
	}
  
  if (d<0){
    printf("Korney net");
  }
	printf("����� 1");
	scanf("%d", &x);
	} while(x==1);
  	return 0;
}
vcvxcvxvxc
