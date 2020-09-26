#include <stdio.h>

int main()
{
    float Vin;
    float LedAzulb;
    float ResledAzul;
    float VledAzul;
    float IledAzul;
    float VR1;
    float VR2;
    float VR3;


    float LedVerdestd;
    float ResledVerdestd;
    float VledVerdestd;
    float IledVerdestd;

    float LedBlanco;
    float ResledBlanco;
    float VledBlanco;
    float IledBlanco;


    VledAzul= 3;
    IledAzul= 0.02;

    VledVerdestd= 1.8;
    IledVerdestd= 0.015;

    VledBlanco= 2.8;
    IledBlanco= 0.02;

    printf("ingrese el valor del Voltaje de alimentacion\n");
    scanf ("%f",&Vin);
    printf("Voltaje de alimentacion= %f\n",Vin);

    VR1= Vin-VledAzul;
    ResledAzul= VR1/IledAzul;

    printf("Resistencia para el Led Azul brillante= ( % f ohmios)\n",ResledAzul);

     VR2= Vin-VledVerdestd;
     ResledVerdestd= VR2/IledVerdestd;
    printf("Resistencia para el Led Verde std= ( % f ohmios)\n",ResledVerdestd);

    VR3= Vin-VledBlanco;
    ResledBlanco= VR3/IledBlanco;
    printf("Resistencia para el led Blanco= ( % f ohmios)\n",ResledBlanco);


    return 0;
}
