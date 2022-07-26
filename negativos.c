#include <stdio.h>

int main()
{

    int n, m, soma, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros negativos:\n");
    for (int i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}