#include <stdio.h>

typedef struct {
    int wordCount;
    int charCount;
} Result;

Result stringSize(char frase[]) {   
    int count = 0;
    int wordCout = 1;
    Result res;

    while (frase[count] != '\0') {

        if(frase[count] == ' ') {
            wordCout++;
        }
        count++;
    }

    res.wordCount = wordCout;
    res.charCount = count - 1;

    return res;
}

int main() {
    char frase[250];

    printf("Insira a frase a ser analizada: ");
    fgets(frase, sizeof(frase), stdin);

    Result result = stringSize(frase);

    printf("O número de palavras é: %d\n", result.wordCount);
    printf("O número de caracteres é: %d\n", result.charCount);
    return 0;
}