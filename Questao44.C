#include <stdio.h>

int main() {
    
    float num1, num2, num3, maior, menor, meio;
    
    printf("<Vou checar qual número é o maior, menor, e o do meio!>\n\n");
    printf("Insira o primeiro número não inteiro: \n");
    scanf("%f", &num1);
    
    printf("Insira o segundo número não inteiro \n");
    scanf("%f", &num2);
    
    printf("Insira o terceiro número não inteiro \n");
    scanf("%f", &num3);
    
    if (num1> num2 && num3){
        maior = num1;
        
        if (num2 > num3){
        meio = num2;
        menor = num3;
    
     }else if (num3 > num2){
        meio = num3;
        menor = num2;
    }
    }else  if 
    
    (num2> num1 && num3){
        maior = num2;
        
        if (num1 > num3){
        meio = num1;
        menor = num3;
    }else if (num3 > num1){
        meio = num3;
        menor = num1;
    }    
    }else if
    
    (num3> num2 && num1){
        maior = num1;
        
        if (num2 > num1){
        meio = num2;
        menor = num1;
    }else if (num1 > num2){
        meio = num1;
        menor = num2;
    }
    }
    
    printf("%.2f é o maior, %.2f é o do meio, e %.2f é o menor!", maior, meio, menor);
    
    
    return 0;
}
