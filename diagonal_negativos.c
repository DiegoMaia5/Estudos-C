#include <stdio.h>

int main()

{

    int N, cont;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int J = 0; J < N; J++)
        {
            printf("Elemento [%d, %d]: ", i, J);
            scanf("%d", &mat[i][J]);
        }
    }

    printf("Diagonal principal da matriz:\n");

    for (int i = 0; i < N; i++)
    {

        printf("%d ", mat[i][i]);
    }

    cont = 0;

    for (int i = 0; i < N; i++)
    {
        for (int J = 0; J < N; J++)
        {
            if (mat[i][J] < 0)
            {
                cont = cont + 1;
            }
        }
    }

    printf("\nQuantidade de negativos: %d", cont);

    return 0;
}