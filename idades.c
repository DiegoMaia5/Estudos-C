#include <stdio.h>

int main()

{

    char nome1[50], nome2[50];
    int idade1, idade2;
    double idademedia;

    printf("Dados da primeira pessoa:\n ");
    printf("Nome: ");
    gets(nome1);
    printf("idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n ");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("idade: ");
    scanf("%d", &idade2);

    idademedia = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, idademedia);
}
