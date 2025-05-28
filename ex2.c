#include <stdio.h>

int main() {
    int numDigitado;
    int somaMultiplos = 0;
    
    printf("Digite um número: ");
    scanf("%d", &numDigitado);
    
    for(int i = 1; i < numDigitado; i++){
        if(i % 3 == 0 || i % 5 == 0){
            somaMultiplos = somaMultiplos +  i;
            printf("%d ", i);
        }
    
    }
    
    printf("\nA soma desse multiplos é: %d", somaMultiplos);
    
    return 0;
}
