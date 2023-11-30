#include <stdio.h>

int print(int i) {
    if (i == 20) { 
        printf("Mostrando a função para %d\n", i); 
        return 1;
    } else  {
        printf("Não mostrando a função para %d\n", i);
        return 0;
    }
}

int main(void) {
    int a = 20;

    if ((a != 20) && print(a)) {        
        printf("Eu não serei mostrado!\n");
    }

    if ((a == 20) && print(a)) {
        printf("Eu vou ser mostrado!\n");
    }

    return 0;
}