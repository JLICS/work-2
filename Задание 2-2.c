/*ќбъ€вить массив данных типа double размером 3 на 3. 
¬вести с консоли его значени€, вывести на консоль сумму его 
элементов, расположенных на главной диагонали и сумму элементов, расположенных на  побочной диагонали.
ќбъ€вить массив данных типа int размером 2 на 2. ¬вести 
с консоли его значени€, вывести на консоль квадрат данной матрицы.*/



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
	printf("Ќажми 1");
	scanf("%d", &x);
	} while(x==1);
  	return 0;
}
vcvxcvxvxc
