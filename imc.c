#include <stdio.h>
int main()
{
    float peso;  //peso da pessoa
    float alt;  //altura da pessoa
    float imc;  //calculo do indice 
    
    //atribuir valores peso e altura
    
    printf ("Entre com seu peso:");
        scanf ("%f", &peso);
    
    printf ("Entre com sua altura:");
        scanf ("%f", &alt);
    
    imc = peso / (alt * alt);
    
    printf ("Seu imc é: %f\n", imc);
    

        if (imc < 19)
            {
            printf ("Voce está magro(a)\n");
            }
        
        else if (imc < 25)
            { 
            printf ("Voce está no peso ideal\n");
            }
        
        else if (imc < 31)
            { 
            printf ("Voce está no acima do peso ideal\n");
            }
        
        else
            {
            printf ("Voce está obeso\n");
            }
        
        
    return 0;
}