#include <stdio.h>

int main() {
    char meuNome[5] = {'A', 'n', 'n', 'a', '\0'};
    printf("Meu nome: %s\n", meuNome);
    
    for(int i = 0; i<4; i++) {
    printf(" %c *", meuNome[i]);
    }
    return 0;
}
