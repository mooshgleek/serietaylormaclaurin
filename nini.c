#include <stdio.h>
 double serie(double x, int cantidad)
 {
     double nserie=1;
	 double temp;
     int i;
     temp=x; //carga del exponente en una variable temporal
     nserie=nserie+temp; //primer paso de sumar la unidad 
     i=2; //comienza a partir de 2 recien, ya que previamente se realizo el primer paso
     if (cantidad==1) //si la cantidad de cantidad es 1, devuelve directamente
         {
             return nserie;
         }
     while (i<=cantidad) //sino, se realiza la serie con la supervision de un mientras
        {
             temp=temp*x/i++;
             nserie=nserie+temp;
        }
 return nserie; 
}
 int main()
{
    int cantidad;
    double x;
    double serie(double ,int );
    printf("Introduzca x \n ");
    scanf("%lf",&x);
    printf("Introduzca n \n ");
    scanf("%d", &cantidad);
    printf("El resultado de e elevado a %g con %d terminos es %lf\n", x, cantidad, serie(x, cantidad));
    return 0;
}

