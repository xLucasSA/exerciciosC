#include <stdio.h>
#include <ctype.h>

int stringSize(char * frase) {   
    int count = 0;
    int wordCout = 0;
    printf("%c", frase[3]);
    while (frase[count] != '\0' || frase[count] == '|') {
                
        if( isspace(frase[count]) ) {
            wordCout++;
        }

        count++;
    }

    return count;
}

int main() {
    char frase[250];

    printf("Insira a frase a ser analizada: ");
    scanf("%s", frase);

    int size = stringSize(&frase);

    printf("%d", size);
    return 0;
}