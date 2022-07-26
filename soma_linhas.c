#include <stdio.h>

int main()

{

    int N, M;

    printf("Qual a quantidade de linhas da matriz: ");
    scanf("%d", &N);

    printf("Qual a quantidade de colunas da matriz: ");
    scanf("%d", &M);

    double mat[N][M];
    double vet[N];
    for (int i = 0; i < N; i++)
    {
        printf("Digite o elemento da %da. linha:\n", i + 1);
        for (int J = 0; J < M; J++)
        {

            scanf("%lf", &mat[i][J]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        vet[i] = 0;
        for (int J = 0; J < N; J++)
        {
            vet[i] = vet[i] + mat[i][J];
        }
    }

    printf("Vetor gerado:\n,");

    for (int i = 0; i < N; i++)
    {
        printf("%.lf\n", vet[i]);
    }

    return 0;
}