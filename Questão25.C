#include <stdio.h>

int main() {

float nf, fpc;

printf("insira a temperatura em fahrenheit: \r");
scanf("%f", &nf);

fpc = ((nf-32) * (5.0 / 9.0) );

printf("sua temperatura em celsius é: \r %1f", fpc);
    return 0;
}
