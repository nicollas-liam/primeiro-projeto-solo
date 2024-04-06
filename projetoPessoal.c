#include <stdio.h>

char operadores;
double n1, n2;

void pegarinformacoes(){
    printf("Escolha entre +, -, * ou /: ");
    scanf("%c", &operadores);
    printf("Digite dois números: ");
    scanf("%lf %lf",&n1, &n2);
}

void calculo(){
    switch (operadores)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

    
    }
}


int main() {

    pegarinformacoes();
    calculo();
    
}