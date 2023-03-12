/*
	Name: Mariana Zapata Ibarra 
	Copyright: 
	Author: 
	Date: 08/03/23 21:16
	Description: Algoritmo que calcula el descuento factura servicios publicos
*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
    // variables locales
    int s1, s2, s3 = 0;
    int nr_serv, total_s_d, dcto, vr_pagar;
    int error = 0;

    printf("Ingrese el número de servicios: \n > ");
    scanf("%d", &nr_serv);

    if (nr_serv == 3)
    {
        printf("Ingrese el valor de la factura 1\n > ");
        scanf("%d", &s1);
        printf("Ingrese el valor de la factura 2\n > ");
        scanf("%d", &s2);
        printf("Ingrese el valor de la factura 3\n > ");
        scanf("%d", &s3);
        total_s_d = s1 + s2 + s3;
        dcto = total_s_d * 0.15;
    }
    else if (nr_serv == 2)
    {
        printf("Ingrese el valor de la factura 1\n > ");
        scanf("%d", &s1);
        printf("Ingrese el valor de la factura 2\n > ");
        scanf("%d", &s2);
        if (s1 >= s2)
        {
            dcto = s1 * 0.05;
        }
        else
        {
            dcto = s2 * 0.05;
        }
        total_s_d = s1 + s2 + s3;
    }
    else if (nr_serv == 1)
    {
        printf("Ingrese el valor de la factura 1\n > ");
        scanf("%d", &s1);
        dcto = 0;
        total_s_d = s1 + s2 + s3;
    }
    else 
    {
        printf("Hay un error en el número de facturas, por favor intentelo de nuevo");
        error = 1;
    }
    vr_pagar = total_s_d - dcto;
    if(error != 1) printf("El total a pagar es de: %d", vr_pagar);
    
    return 0;
}
