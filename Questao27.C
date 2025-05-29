#include <stdio.h>

int main() {

float n1, prct10, prct20, precofinal;

printf("Insira o preço do produto: \r");
scanf("%f", &n1);

prct10 = (n1 + ((n1 * 10) / 100));

prct20 = (n1 + ((n1 * 20) / 100));

if (n1 < 100){
    printf("O valor final é: \r %.1f", prct20);
    }
    
if (n1 >= 100){
    printf("O valor final é \r %.1f", prct10);
}
    return 0;
}
