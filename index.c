#include <stdio.h>
#include <stdlib.h> 

//1. 
int main() {
    char str[100];
    
    printf("Digite uma string: ");
    scanf("%s", str);
    
    printf("A string digitada é: %s\n", str);
    
    return 0;
}

//2. 
int main() {
    char str[100];
    int length = 0;
    
    printf("Digite uma string: ");
    scanf("%s", str);
    
    while (str[length] != '\0') {
        length++;
    }
    
    printf("O comprimento da string é: %d\n", length);
    
    return 0;
}

//3. 

int main() {
    char str1[100], str2[100];
    int i, flag = 1;
    
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
    }
    
    if (flag) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
    
    return 0;
}


//4. 
int main() {
    char nome[100];
    
    printf("Digite um nome: ");
    scanf("%s", nome);
    
    printf("As 4 primeiras letras do nome são: %.4s\n", nome);
    
    return 0;
}


//5.

int main() {
    char nome[100];
    int letras = 0;
    
    printf("Digite um nome: ");
    scanf("%s", nome);
    
    while (nome[letras] != '\0') {
        letras++;
    }
    
    printf("O nome tem %d letras.\n", letras);
    
    return 0;
}


//6.

int main() {
    char nome[100], sexo;
    int idade;
    
    printf("Digite o nome: ");
    scanf("%s", nome);
    
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    if (sexo == 'F' && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("NÃO ACEITA\n");
    }
    
    return 0;
}


int contarUns(char str[]) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1') {
            contador++;
        }
    }
    return contador;
}


void substituirZeroPorUm(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }
}

int main() {
    char str[100], nome[100], caractere;
    int contadorBrancos = 0;

    // 7. 
    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);
    printf("O número de 1's na string é: %d\n", contarUns(str));

    // 8. 

    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);
    substituirZeroPorUm(str);
    printf("A string após substituir 0 por 1 é: %s\n", str);

    // 9. 
    printf("Digite um nome: ");
    scanf("%s", nome);
    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("O nome digitado é: %s\n", nome);
    }

    // 10. 
    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("A palavra de trás para frente é: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    // 11. 
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("A string sem vogais é: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            printf("%c", str[i]);
        }
    }
    printf("\n");

    // 12. 
    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);
    int vogais = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = caractere;
            vogais++;
        }
    }
    printf("A palavra após substituir as vogais por '%c' é: %s\n", caractere, str);
    printf("A palavra tinha %d vogais.\n", vogais);

    // 13.
    char frase[1000];
    printf("Digite uma frase: ");
    getchar(); 
    fgets(frase, sizeof(frase), stdin);
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contadorBrancos++;
        }
    }
    printf("A frase tem %d caracteres em branco.\n", contadorBrancos);

    // 14. 
    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("A palavra e seus valores ASCII são:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c: %d\n", str[i], str[i]);
    }

    return 0;
}

void converterParaMaiusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; 
        }
    }
}

void converterParaMinusculas(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; 
        }
    }
}

void retirarEspacos(char str[]) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void trocarLetra(char str[], char L1, char L2) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == L1) {
            str[i] = L2;
        }
    }
}

int main() {
    char frase[1000], L1, L2;
    int idade, maisNova = 999, maisVelha = 0, indiceMaisNova, indiceMaisVelha;
    char modelos[5][20] = {"Fusca", "Gol", "Vectra", "Palio", "Civic"};
    int consumo[5] = {10, 12, 8, 11, 9};
    int maisEconomico = consumo[0], indiceEconomico;

    // 16. 
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    converterParaMaiusculas(frase);
    printf("Frase em maiúsculas: %s\n", frase);

    // 17. 
    printf("Digite uma frase em maiúsculas: ");
    fgets(frase, sizeof(frase), stdin);
    converterParaMinusculas(frase);
    printf("Frase em minúsculas: %s\n", frase);

    // 18. 
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    printf("Digite a letra a ser trocada: ");
    scanf("%c", &L1);
    getchar(); 
    printf("Digite a letra pela qual deseja substituir: ");
    scanf("%c", &L2);
    trocarLetra(frase, L1, L2);
    printf("Frase após a troca: %s\n", frase);


    while (1) {
        printf("Digite a idade (negativa para encerrar): ");
        scanf("%d", &idade);
        getchar(); 
        if (idade < 0) {
            break;
        }
        if (idade < maisNova) {
            maisNova = idade;
            indiceMaisNova = strlen(frase); 
        }
        if (idade > maisVelha) {
            maisVelha = idade;
            indiceMaisVelha = strlen(frase); // Salva o índice da pessoa mais velha
        }
    }
    printf("A pessoa mais nova tem %d anos e o nome está na posição %d.\n", maisNova, indiceMaisNova);
    printf("A pessoa mais velha tem %d anos e o nome está na posição %d.\n", maisVelha, indiceMaisVelha);

    // 20. 
    for (int i = 0; i < 5; i++) {
        if (consumo[i] < maisEconomico) {
            maisEconomico = consumo[i];
            indiceEconomico = i;
        }
    }
    printf("O modelo mais econômico é: %s\n", modelos[indiceEconomico]);
    printf("Litros de combustível para percorrer 1000 km:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %.2f litros\n", modelos[i], 1000.0 / consumo[i]);
    }

    return 0;
}

void inverterEsubstituir(char str[]) {
    int tamanho = strlen(str);
    for (int i = tamanho - 1; i >= 0; i--) {
        if (str[i] == 'A' || str[i] == 'a') {
            printf("*");
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

void calcularValor(float valorTotal) {
    float desconto = valorTotal * 0.1;
    float valorAVista = valorTotal - desconto;
    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Desconto (10%%): R$%.2f\n", desconto);
    printf("Valor a ser pago à vista: R$%.2f\n", valorAVista);
}

void imprimirSegmento(char str[], int I, int J) {
    printf("Segmento S[%d..%d]: ", I, J);
    for (int i = I; i <= J; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int encontrarCaractere(char str[], char C, int I) {
    int tamanho = strlen(str);
    for (int i = I; i < tamanho; i++) {
        if (str[i] == C) {
            return i;
        }
    }
    return -1;
}

int main() {
    char frase1[1000], frase2[1000], mercadoria[50], C;
    float valorTotal;
    int I, J, posicao;

    // 21. 
    printf("Digite a primeira frase: ");
    scanf("%c[^\n]%*c", frase1);
    printf("Digite a segunda frase: ");
    scanf("%c[^\n]%*c", frase2);
    printf("Frase 1 invertida e com 'A' substituído por '*': ");
    inverterEsubstituir(frase1);
    printf("Frase 2 invertida e com 'A' substituído por '*': ");
    inverterEsubstituir(frase2);
}
    // 22. 
    printf("Digite o nome da mercadoria: ");
    scanf("%c[^\n]%*c", mercadoria);
    printf("Digite o valor total da mercadoria: R$");
    scanf("%f%*c", &valorTotal);
    calcularValor(valorTotal);

    // 23. 
    printf("Digite uma string: ");
    scanf("%d[^\n]%*c", frase1);
    printf("Digite o valor de I: ");
    scanf("%d", &I);
    printf("Digite o valor de J: ");
    scanf("%d", &J);
    imprimirSegmento(frase1, I, J);

    // 24. 
    printf("Digite uma string: ");
    scanf("%c[^\n]%*c", frase1);
    printf("Digite o caractere a ser encontrado: ");
    scanf("%c%*c", &C);
    printf("Digite a posição inicial para busca: ");
    scanf("%d", &I);
    posicao = encontrarCaractere(frase1, C, I);
    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posição %d.\n", C, posicao);
    } else {
        printf("O caractere '%c' não foi encontrado a partir da posição %d.\n", C, I);
    }

    // 25. 
    printf("Digite a primeira palavra: ");
    scanf("%s", frase1);
    printf("Digite a segunda palavra: ");
    scanf("%999s", frase2);
    if (strcmp(frase1, frase2) < 0) {
        printf("%s vem primeiro na ordem alfabética.\n", frase1);
    } else if (strcmp(frase1, frase2) > 0) {
        printf("%s vem primeiro na ordem alfabética.\n", frase2);
    } else {
        printf("As palavras são iguais.\n");
    }

    // 26. 
    printf("Digite uma string a ser codificada: ");
    scanf("%s[^\n]%*c", frase1);
    for (int i = 0; frase1[i] != '\0'; i++) {
        if (frase1[i] >= 'A' && frase1[i] <= 'Z') {
            frase1[i] = ((frase1[i] - 'A') + 3) % 26 + 'A';
        } else if (frase1[i] >= 'a' && frase1[i] <= 'z') {
            frase1[i] = ((frase1[i] - 'a') + 3) % 26 + 'a';
        }
    }
    printf("String codificada: %s\n", frase1);

    // 27. 
    printf("Digite a primeira string: ");
    scanf("%s[^\n]%*c", frase1);
    printf("Digite a segunda string: ");
    scanf("%s[^\n]%*c", frase2);
    if (strstr(frase1, frase2) != NULL) {
        printf("A segunda string está contida no final da primeira.\n");
    } else {
        printf("A segunda string não está contida no final da primeira.\n");
    }

  //28.
void lerString(char S1[]) {
    printf("Digite uma string S1 (tamanho máximo 20 caracteres): ");
    scanf("%20s", S1);
}

void imprimirTamanho(char S1[]) {
    printf("O tamanho da string S1 é: %lu\n", strlen(S1));
}


void compararStrings(char S1[], char S2[]) {
    printf("Digite uma nova string S2 para comparação: ");
    scanf("%s", S2);
    if (strcmp(S1, S2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }
}

void concatenarStrings(char S1[], char S2[]) {
    printf("Digite uma nova string S2 para concatenação: ");
    scanf("%s", S2);
    strcat(S1, S2);
    printf("A concatenação das strings resulta em: %s\n", S1);
}
void imprimirReverso(char S1[]) {
    printf("A string S1 de forma reversa é: ");
    for (int i = strlen(S1) - 1; i >= 0; i--) {
        printf("%c", S1[i]);
    }
    printf("\n");
}
void contarCaractere(char S1[], char caractere) {
    int contador = 0;
    for (int i = 0; i < strlen(S1); i++) {
        if (S1[i] == caractere) {
            contador++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string S1.\n", caractere, contador);
}

void substituirCaractere(char S1[], char C1, char C2) {
    for (int i = 0; i < strlen(S1); i++) {
        if (S1[i] == C1) {
            S1[i] = C2;
            break; 
        }
    }
    printf("Após a substituição, a string S1 fica: %s\n", S1);
}

void verificarSubstring(char S1[], char S2[]) {
    printf("Digite uma nova string S2 para verificação de substring: ");
    scanf("%s", S2);
    if (strstr(S1, S2) != NULL) {
        printf("A string S2 é uma substring de S1.\n");
    } else {
        printf("A string S2 não é uma substring de S1.\n");
    }
}

void retornarSubstring(char S1[], int posicao, int tamanho) {
    char substring[21];
    strncpy(substring, S1 + posicao, tamanho);
    substring[tamanho] = '\0';
    printf("A substring de S1 a partir da posição %d com tamanho %d é: %s\n", posicao, tamanho, substring);
}

int main() {
    char S1[21], S2[21], C1, C2;
    int opcao, posicao, tamanho;

    do {
    
        printf("\nMenu de Opções:\n");
        printf("a. Ler uma string S1 (tamanho máximo 20 caracteres)\n");
        printf("b. Imprimir o tamanho da string S1\n");
        printf("c. Comparar a string S1 com uma nova string S2\n");
        printf("d. Concatenar a string S1 com uma nova string S2\n");
        printf("e. Imprimir a string S1 de forma reversa\n");
        printf("f. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("g. Substituir a primeira ocorrência do caractere C1 pela C2 na string S1\n");
        printf("h. Verificar se uma string S2 é substring de S1\n");
        printf("i. Retornar uma substring de S1 a partir de uma posição e com um tamanho especificados\n");
        printf("0. Sair do programa\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 0:
                printf("Encerrando o programa...\n");
                break;
            case 'a':
                lerString(S1);
                break;
            case 'b':
                imprimirTamanho(S1);
                break;
            case 'c':
                compararStrings(S1, S2);
                break;
            case 'd':
                concatenarStrings(S1, S2);
                break;
            case 'e':
                imprimirReverso(S1);
                break;
            case 'f':
                printf("Digite um caractere para contagem na string S1: ");
                scanf(" %c", &C1);
                contarCaractere(S1, C1);
                break;
            case 'g':
                printf("Digite o caractere C1 a ser substituído: ");
                scanf(" %c", &C1);
                printf("Digite o caractere C2 para substituição: ");
                scanf(" %c", &C2);
                substituirCaractere(S1, C1, C2);
                break;
            case 'h':
                verificarSubstring(S1, S2);
                break;
            case 'i':
                printf("Digite a posição inicial para a substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                retornarSubstring(S1, posicao, tamanho);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

//29.
int verificar_data(const char *data, int *dia, int *mes, int *ano) {
    if (strlen(data) != 10 || data[2] != '/' || data[5] != '/') {
        return 0; 
    }

    for (int i = 0; i < 10; i++) {
        if ((i == 2 || i == 5)) continue;
        if (!isdigit(data[i])) return 0; 
    }

    *dia = atoi(data);
    *mes = atoi(data + 3);
    *ano = atoi(data + 6);

    return 1; 
}

int main() {
    const char *data = "12/05/2024";
    int dia, mes, ano;

    if (verificar_data(data, &dia, &mes, &ano)) {
        printf("Dia: %d, Mês: %d, Ano: %d\n", dia, mes, ano);
    } else {
        printf("Formato de data inválido. Use DD/MM/AAAA.\n");
    }

    return 0;
}

//30.
#define MAX_ALUNOS 100
#define MAX_NOME 50

void ler_nomes(char nomes[][MAX_NOME], int *num_alunos) {
    *num_alunos = 0;
    char nome[MAX_NOME];

    while (*num_alunos < MAX_ALUNOS) {
        printf("Digite o nome do aluno (ou 'sair' para terminar): ");
        fgets(nome, MAX_NOME, stdin);
        nome[strcspn(nome, "\n")] = 0; 

        if (strcmp(nome, "sair") == 0) break;

        strcpy(nomes[*num_alunos], nome);
        (*num_alunos)++;
    }
}

int verificar_nome(char nomes[][MAX_NOME], int num_alunos, const char *nome_busca, char *nome_completo) {
    for (int i = 0; i < num_alunos; i++) {
        if (strstr(nomes[i], nome_busca) != NULL) {
            strcpy(nome_completo, nomes[i]);
            return i;
        }
    }
    return -1;
}

int main() {
    char nomes[MAX_ALUNOS][MAX_NOME];
    int num_alunos;
    char nome_busca[MAX_NOME];
    char nome_completo[MAX_NOME];

    ler_nomes(nomes, &num_alunos);

    printf("Digite o nome que deseja verificar: ");
    fgets(nome_busca, MAX_NOME, stdin);
    nome_busca[strcspn(nome_busca, "\n")] = 0; /

    int indice = verificar_nome(nomes, num_alunos, nome_busca, nome_completo);

    if (indice != -1) {
        printf("Nome encontrado: %s no índice %d\n", nome_completo, indice);
    } else {
        printf("Nome não encontrado na lista.\n");
    }

    return 0;
}
