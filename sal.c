#include <stdio.h>

int main()
{
    float horap, horat, perce, desc, salbru, salLiq;
    
    printf("Digite o valor pago por hora: ");
    scanf("%f", &horap);
    
    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horat);
    
    printf("Digite o percentual de desconto: ");
    scanf("%f", &perce);
    
    salbru = horap * horat;
    desc = salbru - perce / 100;
    salLiq = salbru - desc;
    
    printf("O salário bruto é de.... %f", salbru);
    printf("O salário liquído é de.... %f", salLiq);
}