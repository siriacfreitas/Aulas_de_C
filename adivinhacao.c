//tudo que se inicia com # se chama diretivas 
#include <stdio.h> //biblioteca de entrada e saida 
#define NUMERO_DE_TENTATIVAS 5

int main(){ //função principal
    // imprime cabeçalho do nosso jogo 
    printf("******************************************\n"); 
    printf("* Bem vindo ao nosso jogo de adivinhação *\n"); //função de printar no terminal 
    printf("******************************************\n"); // '\n'pula uma linha

    int numerosecreto=42;  
    //printf("O número %d é o secreto. Não conta para ninguém!",numerosecreto); // %d é substituido por um numero inteiro
    int chute;


    for (int i =1; i<=NUMERO_DE_TENTATIVAS;i++){
        printf("tentativa %d de %d\n",i,NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");

        scanf("%d",&chute); // pegar do teclado, sempre botar & para passar para a variável
        printf("Seu chute foi %d\n",chute); 
        //printf("%d %d",numerosecreto,chute);

        if(chute<0){
            printf("Você não pode chutar números negativos\n");
            i--;
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto ;
        
         // uma variável só existe no escopo (entre as duas chaves) que ela foi declarada e nos escopos dentro do mesmo e apenas depois que ela foi declarada.

        if (acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
        
            break;
        } else if (maior) {
                printf("Seu chute foi maior!\n");
                printf("Mas não desanime, tente de novo!\n");
        } else {
                printf("Seu chute foi menor!\n");
                printf("Mas não desanime, tente de novo!\n");
            }
    }
    printf("Fim de jogo!");
}