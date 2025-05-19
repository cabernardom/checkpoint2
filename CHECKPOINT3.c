#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função 1: Fibonacci
void exercicio_fibonacci() {
    int n, i;
    int fib[50]; //aqui estamos atribuindo vetor para a possibilidade dos números de 1 a 50

    printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Numero invalido.\n");
        return; //aqui caso o numero seja menor que 1 ou maior que 50 sera invalido
    }

    fib[0] = 0;
    if (n > 1) fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; //aqui atribuimos a repeticao com for para a repeticao de numeros
    }

    printf("Sequencia de Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]); 
    }
    printf("\n");
}

// Função 2: Fatoriais
void exercicio_fatoriais() {
    int n, i;
    int fat[20]; //aqui estamos atribuindo vetor para a possibilidade dos números de 1 a 20

    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &n); //para caso o numero seja menor que 1 ou maior que 20

    if (n < 1 || n > 20) {
        printf("Numero inválido.\n");
        return; 
    }

    fat[0] = 1;
    for (i = 1; i < n; i++) {
        fat[i] = fat[i - 1] * (i + 1); //aplicando a condicao para que a formula do fatorial  
    }

    printf("Fatoriais:\n"); 
    for (i = 0; i < n; i++) {
        printf("%d! = %d\n", i + 1, fat[i]);
    }
}

// Função 3: Palíndromo
void exercicio_palindromo() { 
    char palavra[101];
    int i, tam, palindromo = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra); // aqui o strlen retorn quantos caracteres tem a string que vai ser importante para denominar se sera um palindromo

    for (i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - i - 1]) { // precisa ser um vetor para que a string seja analisada caractere por caractere que seria contando o inverso dos caracteres
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("A palavra é um palindromo.\n");
    else
        printf("A palavra NÃO é um palindromo.\n");
}

// Função 4: Verificar substring
void exercicio_substring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2) != NULL) //aqui a funcao strstr procura caso a str2 esta dentro da str1 e se nao encontrar retorna null
        printf("A segunda string esta contida na primeira.\n");
    else
        printf("A segunda string NAO esta contida na primeira.\n");
}

// Menu principal
int main() {
    int opcao;

    printf("===== MENU DE EXERCÍCIOS =====\n");
    printf("1 - Sequencia de Fibonacci\n");
    printf("2 - Fatoriais\n");
    printf("3 - Verificar Palindromo\n");
    printf("4 - Verificar Substring\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao); // poderiamos tambem colocar como getchar caso fosse opcao em caracteres

    switch (opcao) {
        case 1:
            exercicio_fibonacci();
            break;
        case 2:
            exercicio_fatoriais();
            break;
        case 3:
            exercicio_palindromo();
            break;
        case 4:
            exercicio_substring();
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
