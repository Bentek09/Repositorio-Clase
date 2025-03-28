#include <stdio.h>

int main()
{
    printf("Ingresa un numero: ");
    int numero;
    scanf("%d", &numero);

    printf("Numeros primos del 1 al %d:\n", numero);

    for (int n = 1; n <= numero; n++)
    {
        int contador = 0;

        if (n < 2)
            continue;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                contador++;
                break;
            }
        }

        if (contador == 0)
        {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}
