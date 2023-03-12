#include<stdio.h>

int main()
{
    /* code */
    int sueldo_base, total_ventas, total_comisiones, n_ventas, total, venta = 0;

        printf("Ingrese su sueldo base \n> ");
        scanf("%d", &sueldo_base);
        printf("Ingrese # de ventas \n> ");
        scanf("%d", &n_ventas);
        

    for (int i = 0; i < n_ventas; i++)
    {
        /* code */
        printf("Ingrese valor venta %d \n> ", i + 1);
        scanf("%d", &venta);
        total_ventas += venta;
        total_comisiones += venta * 0.10;
        venta = 0;
    }
    
    total = total_comisiones + sueldo_base;

    printf("Su sueldo por %d ventas + comisiones es de %d \n", n_ventas, total);
    printf("El total de ventas que realizo es de %d ", total_ventas);

    return 0;
}
