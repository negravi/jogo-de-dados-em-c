#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
# define SALDO 999 /// PODE SER MODIFICADO O SALDO PARA FICAR MAIS LEGAL O JOGO OU NAO KKKK
# define N_PARTIDAS 999

int main();
void perdeu_a_vez()
{
    printf("\nPerdeu a vez !!! Nao pontua\n");
}
int calculo_3(int valor1, int valor2, int valor3, int saldo, int modo)
{

    int total1,total2,total3,total4,total5,total6;
    int escolha, escolhaPC;

    total1 = (valor1*100) + (valor2*10) + valor3;
    total2 = (valor1*100) + (valor3*10) + valor2;
    total3 = (valor2*100) + (valor1*10) + valor3;
    total4 = (valor2*100) + (valor3*10) + valor1;
    total5 = (valor3*100) + (valor1*10) + valor2;
    total6 = (valor3*100) + (valor2*10) + valor1;

    printf("1 - %d", total1);
    printf("\n2 - %d", total2);
    printf("\n3 - %d", total3);
    printf("\n4 - %d", total4);
    printf("\n5 - %d", total5);
    printf("\n6 - %d", total6);

    srand(time(NULL));
    if(modo == 0)
    {
        escolhaPC = (rand() % 5) + 1;

        if(escolhaPC == 1)
        {
                saldo = saldo - total1;
                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total1;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                    return saldo;
        }else
        if(escolhaPC == 2)
        {
                saldo = saldo - total2;
                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total2;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                    return saldo;
        }else
        if(escolhaPC == 3)
        {
                saldo = saldo - total3;
                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total3;
                    return saldo;
                }else
                if(saldo > 0)
                {
                   printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                    return saldo;
        }else
        if(escolhaPC == 4)
        {
                saldo = saldo - total4;
                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total4;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                    return saldo;
        }else
        if(escolhaPC == 5)
        {
                saldo = saldo - total5;
                if(saldo < 0)
                {
                   printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total5;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                    return saldo;
        }else
        if(escolhaPC == 6)
        {
                saldo = saldo - total6;
                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nPerdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total6;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                return saldo;
        }
    }
    if(modo == 1)
    {
        printf("\n\nVoce deseja subtrair qual das opcoes acima?\nDigite:");
        scanf("%d",&escolha);

        while(escolha < 1 || escolha > 6)
        {
            printf("\nOcorreu um erro, digite o numero corretamente !!!");
            printf("\n\nVoce deseja subtrair qual das opcoes acima?\nDigite:");
            scanf("%d",&escolha);
        }
        if(saldo > 0)
        {
            if(escolha == 1)
            {
                saldo = saldo - total1;
                if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total1;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\n                   Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }else
            if(escolha == 2)
            {
                saldo = saldo - total2;
                if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total2;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\n                   Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }else
            if(escolha == 3)
            {
                saldo = saldo - total3;
                if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total3;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }else
            if(escolha == 4)
            {
                saldo = saldo - total4;
                if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total4;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }else
            if(escolha == 5)
            {
                saldo = saldo - total5;
                if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total5;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }else
            if(escolha == 6)
            {
                saldo = saldo - total6;
            if(saldo < 0)
                {
                    printf("Perdeu a vez !!! Nao pontua\n");
                    saldo = saldo + total6;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                    return saldo;
            }
        }
    }
    return saldo;
}
int calculo_2(int valor1, int valor2, int saldo, int modo)
{

    int escolha,total,total2;
    int escolhaPC;

    total = (valor1*10) + valor2;
    total2 = (valor2*10) + valor1;

    printf("1 - %d", total);
    printf("\n2 - %d", total2);

    srand(time(NULL));
    if(modo == 0)
    {
        escolhaPC = (rand() % 1)+1;
        if(escolhaPC = 1)
        {
             saldo = saldo - total;

                if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    perdeu_a_vez();
                    saldo = saldo + total;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    printf("\nO novo saldo eh: %d\n", saldo);
                    return saldo;
                }
                return saldo;
        }else
        if(escolhaPC == 2)
        {
            saldo = saldo - total2;

               if(saldo < 0)
                {
                    printf("\nA escolha foi: %d\n", escolhaPC);
                    perdeu_a_vez();
                    saldo = saldo + total2;
                    return saldo;
                }else
                if(saldo > 0)
                {
                    printf("Seu novo saldo eh: %d", saldo);
                    return saldo;
                }
                return saldo;
        }
    }else
    if(modo == 1)
    {
        printf("\n\nVoce deseja subtrair qual das opcoes acima?\nDigite:");
        scanf("%d",&escolha);

        while(escolha < 1 || escolha > 2)
        {
            printf("\nOcorreu um erro, digite o numero corretamente:");
            printf("\n\nDigite 1 para subtrair seu saldo por %d ou 2 para\nsubtrair por %d.\nDigite:",total,total2);
            scanf("%d",&escolha);
        }

        if (saldo > 0)
        {
            if(escolha == 1)
            {
                saldo = saldo - total;

                    if(saldo < 0)
                    {
                        perdeu_a_vez();
                        saldo = saldo + total;
                        return saldo;
                    }else
                    if(saldo > 0)
                    {
                        printf("Seu novo saldo eh: %d", saldo);
                        return saldo;
                    }
                    return saldo;
            }
            if(escolha == 2)
            {
                saldo = saldo - total2;

                if(saldo < 0)
                    {
                        perdeu_a_vez();
                        saldo = saldo + total2;
                        return saldo;
                    }else
                    if(saldo > 0)
                    {
                        printf("Seu novo saldo eh: %d", saldo);
                        return saldo;
                    }
                    return saldo;
            }
        }
    }

    return saldo;
}
void sortear0()
{
    printf("\n\n\nNao foi lancado nenhum dado.\n\n");
}
int sortear1(int saldo)
{

    int valor1;

    srand(time(NULL));

    valor1 = (rand() % 6)+1;
    // gerando valores aleatorios na faixa de 1 a 6
    printf("\n\nO numero sorteado foi: %d.\n\n", valor1);

    saldo = saldo - valor1;
    if(saldo < 0)
    {
        perdeu_a_vez();
        saldo = saldo + valor1;
        return saldo;
    }else
    if(saldo > 0)
    {
        printf("Seu novo saldo eh: %d\n", saldo);
        return saldo;
    }
    return saldo;
}
int sortear2(int saldo, int modo)
{

    int valor1, valor2;

    srand(time(NULL));

    valor1 = (rand() % 6)+1;
    valor2 = (rand() % 6)+1;
    // gerando valores aleatorios na faixa de 1 a 6
    printf("\n\nO numero sorteado foi: %d.\n\n", valor1);
    printf("\n\nO numero sorteado foi: %d.\n\n", valor2);

    saldo = calculo_2(valor1,valor2,saldo, modo);

    return saldo;
}
int sortear3(int saldo, int modo)
{
    int valor1, valor2, valor3;

    srand(time(NULL));

    valor1 = (rand() % 6)+1;
    valor2 = (rand() % 6)+1;
    valor3 = (rand() % 6)+1;
    // gerando valores aleatorios na faixa de 1 a 6
    printf("\n\nO numero sorteado foi: %d.\n\n", valor1);
    printf("\n\nO numero sorteado foi: %d.\n\n", valor2);
    printf("\n\nO numero sorteado foi: %d.\n\n", valor3);

    saldo = calculo_3(valor1, valor2, valor3, saldo, modo);
    return saldo;
}
int exe_dados(int dados, int saldo, int modo)
{

    if (dados == 1)
    {
        saldo = sortear1(saldo);
    } if (dados == 2)
    {
       saldo = sortear2(saldo, modo);
    } if (dados == 3)
    {
        saldo = sortear3(saldo, modo);
    } if (dados == 0)
    {
        sortear0();
    }
    return saldo;
}
int player1(int cont,int saldo1)
{

    int dados1, modo = 1;


    printf("\nxxxxxxxxxxxxxxxxxxxxxxx  Rodada %d  xxxxxxxxxxxxxxxxxxxxxxx",cont);
    printf("\n\n                         Player 1                          \n\n");
    printf("\n\n                       SALDO : %d                        \n\n",saldo1);

    if(cont == 1)
    {
        saldo1 = sortear3(saldo1, modo);
        return saldo1;
    }
    printf("          Digite quantos dados deseja lancar:");
    scanf("%d",&dados1);

    while(dados1 < 0 || dados1 > 3)
    {
        printf("\n\nQuantidade de dados invalida!");
        printf("\nDigite quantos dados deseja lancar corretamente!\nDigite:");
        scanf("%d",&dados1);
    }

    if (dados1 == 0 || dados1 == 1 || dados1 == 2 || dados1 ==3)
    {
        saldo1 = exe_dados(dados1, saldo1, modo);
    }

    printf("\n----------------------------------------------------------\n\n");
    return saldo1;
}
int player2(int cont, int saldo2)
{
    int dados2, modo = 1;


    printf("\nxxxxxxxxxxxxxxxxxxxxxxx  Rodada %d  xxxxxxxxxxxxxxxxxxxxxxx",cont);
    printf("\n\n                         Player 2                          \n\n");
    printf("\n\n                       SALDO : %d                        \n\n",saldo2);
    if(cont == 1)
    {
        saldo2 = sortear3(saldo2, modo);
        return saldo2;
    }

    printf("          Digite quantos dados deseja lancar:");
    scanf("%d",&dados2);

    while(dados2 < 0 || dados2 > 3)
    {
        printf("\n\nQuantidade de dados invalida!");
        printf("\nDigite quantos dados deseja lancar corretamente!\nDigite:");
        scanf("%d",&dados2);
    }

    if (dados2 == 0 || dados2 == 1 || dados2 == 2 || dados2 ==3)
    {
        saldo2 = exe_dados(dados2, saldo2, modo);
    }
    printf("\n----------------------------------------------------------\n\n");
    return saldo2;
}
int computador(int cont, int saldo3)
{
    int dadosPC, modo = 0;

    srand(time(NULL));
    printf("\nxxxxxxxxxxxxxxxxxxxxxxx  Rodada %d  xxxxxxxxxxxxxxxxxxxxxxx",cont);
    printf("\n                           Computador                        \n\n");
     printf("\n\n                       SALDO : %d                       \n\n",saldo3);

    if(cont == 1)
    {
        saldo3 = sortear3(saldo3, modo);
        return saldo3;
    }

    dadosPC = rand() % 3;

    saldo3 = exe_dados(dadosPC, saldo3, modo);

    return saldo3;
    printf("\n----------------------------------------------------------\n\n");
}
int rodadas(int jogar)
{

    //int aux = 1,
    int cont = 0, i;
    int saldo_p1 = SALDO, saldo_p2 = SALDO,saldo_pc = SALDO;

    //while (aux > 0 || aux < 0)
    for(i = 0; i < N_PARTIDAS; i++)
    {
        if(jogar == 1)
        {
           cont++;

           saldo_p1 = player1(cont, saldo_p1);

           if(saldo_p1 == 0)
           {
               printf("\n\n        Parabens Voce Ganhou Player 1 !!!\n\n");
               printf("\n\n           Vamos jogar novamente?\n\n");
               //aux = saldo_p1;
               return main();
           }

           saldo_p2 = player2(cont, saldo_p2);
           if(saldo_p2 == 0)
           {
               printf("\n\n        Parabens Voce Ganhou Player 2 !!!\n\n");
               printf("\n\n           Vamos jogar novamente?\n\n");
               //aux = saldo_p2;
               return main();
           }
        }
        if (jogar == 2)
        {
            cont++;

            saldo_p1 = player1(cont, saldo_p1);
            if(saldo_p1 == 0)
            {
                printf("\n\n        Parabens Voce Ganhou Player 1 !!!\n\n");
               printf("\n\n           Vamos jogar novamente?");
               //aux = saldo_p1;
               return main();
            }
            saldo_pc = computador(cont,saldo_pc);
            if(saldo_pc == 0)
            {
               printf("\n\n        O PC GANHOU  !!!\n\n");
               printf("\n\n           Vamos jogar novamente?\n\n");
               //aux = saldo_pc;
               return main();
            }
        }
    }
    return main();
}
void explicativo(int expli)
{
    if (expli == 1){
    printf("\n\n---------------------- Explicativo ----------------------\n\n");
    printf("No jogo Chega em Zero, os dois jogadores iniciam com uma\npontuacao de 999. O objetivo do jogo eh alcancar exatamente\na pontuacao zero. O jogo utiliza-se de 3 dados convencionais\n(numerados de 1 a 6). O primeiro jogador arremessa os tres\ndados e organiza os numeros exibidos em um unico numero de\ntres digitos. Supondo que os dados deram 2, 4 e 6; eh possivel\norganiza-los em: 246, 264, 426, 462, 624 ou 642. Subtrai-se,\nentao, o valor escolhido do valor 999. Na sua vez, o segundo\njogador faz o mesmo procedimento.\n\n");
    printf("----------------------------------------------------------\n\n");
    printf("                        Vamos jogar?                         \n\n");
    } if (expli == 0) {
    printf("\n----------------------------------------------------------\n\n");
    printf("                       Vamos jogar?                         ");
    } else if (expli > 1 || expli < 0) {
    printf("\n\nDigito invalido!");
    }
}
int main()
{

    int i,jogar;

    printf("\n\n\n--------------------- Chega em Zero ---------------------\n\n\n");

    printf("----------- Deseja obter explicacao do jogo? ------------\n\nDigite 1 para sim e 0 para nao!\nDigite:");

    scanf("%d",&i);

    while(i < 0 || i > 1)
    {
        printf("\nOcorreu um erro, digite o numero corretamente:");
        printf("\n\nDigite 1 para sim e 0 para nao!\nDigite:");
        scanf("%d",&i);
    }

    explicativo(i);

    printf("\n\nPara jogar de formar multiplayer digite 1.");
    printf("\nPara jogar player 1 vs computador digite 2.");
    printf("\nPara Sair digite 0.");

    printf("\nDigite:");

    scanf("%d",&jogar);
    if (jogar == 0)
    {
        exit(1);
    }
    while(jogar < 0 || jogar > 2)
    {
        printf("\nOcorreu um erro, digite o n�mero corretamente:");
        printf("\n\nPara jogar de formar multiplayer digite 1.");
        printf("\nPara jogar player 1 vs computador digite 0.");
        scanf("%d",&jogar);
    }
    printf("\n----------------------------------------------------------\n\n");

    rodadas(jogar);

    return 0;
}
