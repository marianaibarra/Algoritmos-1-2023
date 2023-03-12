#include<stdio.h>
int main()
{
    /* code */
    int tiempo_meses;
    float inversion, ganancia, inversion_sumada;
    printf("Ingrese inversión planeada: \n> ");
    scanf("%f", &inversion);
    printf("Ingrese # meses recolección interés: \n> ");
    scanf("%d", &tiempo_meses);
    inversion_sumada = inversion * tiempo_meses;
    ganancia = inversion_sumada + (inversion_sumada / 0.02);
    printf("Ganancia total: %f", ganancia);
    return 0;
}
