#include <stdio.h>

/*Desafio de Xadrez - MateCheck
Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.*/

int main() {
/*   Nível Novato - Movimentação das Peças
     Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

     Implementação de Movimentação do Bispo
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

     Implementação de Movimentação da Torre
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

     Implementação de Movimentação da Rainha
     Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

     Nível Aventureiro - Movimentação do Cavalo
     Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
     Um loop pode representar a movimentação horizontal e outro vertical.

     Nível Mestre - Funções Recursivas e Loops Aninhados
     Sugestão: Substitua as movimentações das peças por funções recursivas.
     Exemplo: Crie uma função recursiva para o movimento do Bispo.

     Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
     Inclua o uso de continue e break dentro dos loops.*/

//Nível novato; 04/04/2025
//Movimentação de bispo, torre e rainha.

//Variáveis
//Peças
int rainha, torre, bispo;
//Casas
int casabispo, colunabispo, casarainha, casatorre;
char letrabispo;
letrabispo = 'D';
//Decisão
int resposta;

//Boas vindas
printf("Olá, bem vindo ao seu jogo virtual de xadrez!\nVamos aprender a movimentar algumas peças?\n\n");
opcaoerrada:
printf("Selecione a peça que desejas aprender a mover:\n");
printf("1 - BISPO\n");
printf("2 - RAINHA\n"); //esquerda
printf("3 - TORRE\n\n"); //direita
fflush(stdin);
scanf("%i", &resposta);

switch (resposta)
{
case 1:
    printf("\n\nMOVIMENTAÇÃO DO BISPO\n\n");
    printf("O bispo se movimenta nas diagonais sendo que,\num sempre será nas casas claras e outro nas\ncasas escuras.\n\nEx.:");
    printf("Um bispo está na casa C1 e será movido 5 vezes\nna diagonal, até a casa H6.\n\n");

    for (casabispo = 2; casabispo <= 6; casabispo ++)
    {

        /*for (colunabispo = 1; colunabispo <= 1; colunabispo ++)
        {
            printf("\nO bispo foi para a coluna %c", letrabispo);
            ++letrabispo;
        }*/
        
        printf("O bispo foi para a coluna %c, linha %i\n", letrabispo, casabispo);
        ++letrabispo;
    }
    printf("\n\nO bispo agora está na casa H6!\n\n");
    
    break;

case 2:
   printf("\n\nMOVIMENTAÇÃO DA RAINHA\n\n");
   printf("A rainha pode se mover em qualquer direção,\nsendo a peça mais poderosa do jogo.\n\nEx.:");
   printf("Uma rainha está na casa C4 e será movida 5 vezes\npara a esquerda, até a casa H4.\n\n");

   for (casarainha = 1; casarainha <= 5; casarainha ++)
   {
       printf("\nA rainha andou %i casas para a direita", casarainha);
   }
   printf("\n\nA rainha agora está na casa C1!\n\n");

    break;

case 3:
   printf("\n\nMOVIMENTAÇÃO DA TORRE\n\n");
   printf("A torre pode se mover para a direita, para a \nesquerda, para cima e para baixo.\n\nEx.:");
   printf("Uma torre está na casa H1 e será movida 5 vezes\npara direita, até a casa C1.\n\n");

   for (casatorre = 1; casatorre <= 5; casatorre ++)
   {
       printf("\nA torre andou %i casas para a esquerda", casatorre);
   }
   printf("\n\nA torre agora está na casa H4!\n\n");

    break;

case 4:
    printf("\n\nMOVIMENTAÇÃO DO CAVALO\n\n");
    printf("O cavalo se movimenta em /L/, sendo duas casas\npara cima e uma para o lado, podendo\nser para a direita ou esquerda\n\nEx.:");
    printf("Um bispo está na casa C1 e será movido 5 vezes\nna diagonal, até a casa H6.\n\n");

    for (casabispo = 2; casabispo <= 6; casabispo ++)
    {

        /*for (colunabispo = 1; colunabispo <= 1; colunabispo ++)
        {
            printf("\nO bispo foi para a coluna %c", letrabispo);
            ++letrabispo;
        }*/
        
        printf("O bispo foi para a coluna %c, linha %i\n", letrabispo, casabispo);
        ++letrabispo;
    }
    printf("\n\nO bispo agora está na casa H6!\n\n");
    
    break;

default:
printf("\n\nA opção selecionada é inexistente. Tente novamente por favor!\n\n");
goto opcaoerrada;
    break;
}


     return 0;


}
