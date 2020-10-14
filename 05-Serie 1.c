#include <stdio.h>

main()
{
    int cont=0;
    int No;

printf("INGRESA EL VALOR DE N: ");
scanf("%d",&No);

while(cont<=No){

    printf("%d ",(No*No)-(2*cont));

    cont=cont+1;

}

return 0;
}
