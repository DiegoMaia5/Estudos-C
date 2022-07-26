#include <stdio.h>

int main()

{

    int n, nmenores;
    double soma, media, percentual;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    double altura[n];
    char vet[n][50];

    for (int i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(vet[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%d", &altura[i]);
    }

    soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma = soma + altura[i];
    }

    media = soma / n;
    printf("\nALtura media: %.2lf\n", media);

    nmenores = 0;

    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            nmenores++;
        }

        percentual = nmenores * 100.0 / n;
    }
    printf("Pessoas com menos de 16 anos: %.1lf %%\n ", percentual);
    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", vet[i]);
        }
    }

    return 0;
}