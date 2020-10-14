#include <stdio.h>

main()
{
    int cont=0;
    int No;

printf("INGRESA EL VALOR DE N: ");
scanf("%d",&No);

while(cont<=No+No+1)
{

    printf("%d, ",(3*No)+(cont*2));

    cont=cont+1;

}

return 0;
}
