//tudo que se inicia com # se chama diretivas 
#include <stdio.h> //biblioteca de entrada e saida 
#include <stdlib.h> //para usar o abs
#include <time.h>

int main(){ 


    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");// '\n'pula uma linha

    int segundos= time(0);
    srand(segundos); // é necessário passar a semente para a função rand() conseguir calcular diferentes números

    int numerogrande= rand();
    int numerosecreto= numerogrande % 100;

    int chute;
    int acertou =0;
    int tentativas=1;
    int numerodetentativas;
    double pontos=1000;
    int nivel;
    printf("%d\n",numerosecreto);

    printf("Qual nível de dificuldade ?\n");
    printf("(1)Fácil (2)Médio (3)Difícil\n\n");
    printf("Escolha:");
    scanf("%d",&nivel);

    switch(nivel){
        case 1:
            numerodetentativas=20;
            break;
        case 2:
            numerodetentativas=15;
            break;
        default:
            numerodetentativas=6;
            break;        
    }

    for(int i=1;i<=numerodetentativas;i++){ 
        printf("tentativa %d\n",tentativas); // %d é substituido por um numero inteiro
        
        printf("Qual é o seu chute? ");
        scanf("%d",&chute); // pegar do teclado, sempre botar & para passar para a variável
        printf("Seu chute foi %d\n",chute); 
        //printf("%d %d",numerosecreto,chute);

        if(chute<0){
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto ;
        
         // uma variável só existe no escopo (entre as duas chaves) que ela foi declarada e nos escopos dentro do mesmo e apenas depois que ela foi declarada.

        if (acertou){
             break;
        } else if (maior) {
                printf("Seu chute foi maior!\n");
        } else {
                printf("Seu chute foi menor!\n");
            }
            tentativas++;
            pontos= pontos -(abs(chute-numerosecreto)/(double)2); // a operação é feita se baseando no tipo mais preciso]
                                                               //casting, mudar o tipo da variável
    }
    printf("Fim de jogo!");

        if(acertou) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabéns! Você ganhou!\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

} else {
        printf("Você perdeu! Tente de novo!\n");

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");

}
}