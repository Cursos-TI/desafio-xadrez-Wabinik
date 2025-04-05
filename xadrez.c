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
//Nível aventureiro; 04/04/2025
//Movimentação do cavalo
//Nível mestre; 04/04/2025
//Funcões recursivas para os movimentos

//Variáveis
//Peças: rainha, torre, bispo, cavalo;
//Variáveis de movimento
int casabispo, colunabispo, casarainha, casatorre, casacavalo;
char letrabispo, cavalo;
letrabispo = 'D';

//Decisão
int resposta;

//tabuleiro
int casa;
char Casa;

//Funções recursivas
void movimentodarainha()
{
    for (casarainha = 1; casarainha <= 5; casarainha ++)
    {
        printf("\nA rainha andou %i casas para a esquerda", casarainha);
    }
 
}
void movimentodobispo()
{
    for (casabispo = 2; casabispo <= 6; casabispo ++)
    {   
        printf("O bispo foi para a coluna %c, linha %i\n", letrabispo, casabispo);
        ++letrabispo;
    }
}
void movimentodatorre()
{
    for (casatorre = 1; casatorre <= 5; casatorre ++)
    {
        printf("\nA torre andou %i casas para a esquerda", casatorre);
    }
}
void movimentodocavalo()
{
    for (cavalo = 'F'; cavalo >= 'F'; --cavalo)
    {
    
        for (casacavalo = 2; casacavalo <= 3; casacavalo ++)
        {
            printf("O cavalo foi para a linha %i\n", casacavalo);
        }
        
        printf("O cavalo foi para a coluna %c\n", cavalo);
        
    }
}



//Menu de boas-vindas
printf("Olá, bem vindo ao seu jogo virtual de xadrez!\nVamos aprender a movimentar algumas peças?");
opcaoerrada:
printf("\n\nSelecione a peça que desejas aprender a mover:\n");
printf("1 - BISPO\n");
printf("2 - RAINHA\n"); 
printf("3 - TORRE\n"); 
printf("4 - CAVALO\n");
printf("5 - VER TABULEIRO\n");
printf("6 - FECHAR PROGRAMA\n\n");
fflush(stdin);
scanf("%i", &resposta);
printf("\n"); // Espaço para o número digitado não ficar junto da próxima linha.

switch (resposta)
{
case 1:
//Mostra como movimentar a peça do bispo.
    printf("\n\nMOVIMENTAÇÃO DO BISPO\n\n");
    printf("O bispo se movimenta nas diagonais sendo que,\num sempre será nas casas claras e outro nas\ncasas escuras.\n\nEx.:");
    printf("Um bispo está na casa C1 e será movido 5 vezes\nna diagonal, até a casa H6.\n\n");
//Função recursiva do movimento do bispo
    movimentodobispo();
    printf("\n\nO bispo agora está na casa H6!\n\n");
//Retorna ao menu.
    goto opcaoerrada;
    break;

case 2:
//Mostra como movimentar a peça da rainha.
   printf("\n\nMOVIMENTAÇÃO DA RAINHA\n\n");
   printf("A rainha pode se mover em qualquer direção,\nsendo a peça mais poderosa do jogo.\n\nEx.:");
   printf("Uma rainha está na casa H4 e será movida 5 vezes\npara a esquerda, até a casa C4.\n\n");
//Função recursiva do movimento da rainha.
   movimentodarainha();
   printf("\n\nA rainha agora está na casa C4!\n\n");
//Retorna ao menu.
   goto opcaoerrada;
    break;

case 3:
//Mostra como movimentar a peça da torre.
   printf("\n\nMOVIMENTAÇÃO DA TORRE\n\n");
   printf("A torre pode se mover para a direita, para a \nesquerda, para cima e para baixo.\n\nEx.:");
   printf("Uma torre está na casa A1 e será movida 5 vezes\npara direita, até a casa F1.\n\n");
//Função recursiva do movimento da torre.
   movimentodatorre();
   printf("\n\nA torre agora está na casa F1!\n\n");
//Retorna ao menu.
   goto opcaoerrada;
    break;

case 4:
//Mostra como movimentar a peça do cavalo.
    printf("\n\nMOVIMENTAÇÃO DO CAVALO\n\n");
    printf("O cavalo se movimenta em /L/, sendo duas casas\npara cima, baixo ou lados e uma para cima, baixo\nou lados.\n\nEx.:");
    printf("Um cavalo está na casa g1 e será movido para a\npara a casa F3.\n\n");
//Função recursiva do movimento do cavalo.
    movimentodocavalo();
    printf("\n\nO cavalo agora está na casa F3!\n\n");
//Retorna ao menu.
    goto opcaoerrada;
    break;

case 5:
//Mostra o número e letra das casas do tabuleiro de xadrez.
for (casa = 8; casa >= 1; casa--)
{
    for (Casa = 'A'; Casa <= 'H'; ++Casa)
    {
        printf("%c%i\t", Casa, casa);
    }
    printf("\n\n");
}
//Retorna ao menu.
goto opcaoerrada;
break;

case 6:
//Goto para o fim do programa.
goto end;

default:
//Opção para caso seja digitado um caractere que não se pede.
printf("\n\nA opção selecionada é inexistente. Tente novamente por favor!\n\n");
//Retorna ao menu.
goto opcaoerrada;
    break;
}

end:
//Mensagem de agradecimento.
printf("\n\n\nObrigada por utilizar esse programa :^)\n\n\n");
     return 0;


}
