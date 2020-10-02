#include<stdio.h>
#include<math.h>

int main ()
{
    float a;
    float b;
    float c;
    float D;
    float x1;
    float x2;

    printf ("Ecuacion cuadratica\n");
    printf ("Por medio de la formula general\n");
    printf ("Ax^2+Bx+c=0 \n");
    printf ("\n ingresa el termino de la seccion cuadratia: \n");
     scanf ("%f", &a);
    printf ("\n ingresa el termino lineal: \n");
     scanf ("%f", &b);
    printf ("\n ingresa el termino de la seccion independiente: \n");
     scanf ("%f", &c);

     if (a==0){

        printf ("\n error, esto es incorrecto");

        return 0;
     }
     else {

        D= b*b-4*a*c;

        if (D>0){
            x1=(-b+sqrt(D))/(2.0*a);
            x2=(-b-sqrt(D))/(2.0*a);
            printf ("\n x1= %1f \n",x1);
            printf ("\n x2= %1f \n",x2);

        }

        else
        if (D==0){
            x1= (-b)/(2.0*a);
            printf("\n x= %1f \n",x1);

        }
        else {
            printf ("ERROR,el termino incorrecto \n");
        }
          }

}
