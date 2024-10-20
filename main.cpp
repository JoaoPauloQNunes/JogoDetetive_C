#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int advogado,cozinheiro,florista,medica,coveiro,dancarina,mordomo;
    int veneno,faca,pistola,tesoura,pa,corda,martelo;
    int praca,prefeitura,banco,mansao,hotel,boate,cemiterio,floricultura,hospital,restaurante;
    int intro,jogadores,j=1,vitoria=0,pes,arm,loc,cont,dica=0;
    char as[15],lc[15],ar[15];

    srand(time(NULL));
    int local = rand()% 10 + 1; // Gera um numero aleatorio de 1 a 10.

    switch (local) // Define qual é o local.
        {
        case 1:
            praca = local;
            strcpy(lc, "praca");
            break;

        case 2:
            prefeitura = local;
            strcpy(lc,"prefeitura");
            break;

        case 3:
            banco = local;
            strcpy(lc,"banco");
            break;

        case 4:
            mansao = local;
            strcpy(lc,"mansao");
            break;

        case 5:
            hotel = local;
            strcpy(lc,"hotel");
            break;

        case 6:
           boate = local;
           strcpy(lc,"boate");
           break;

        case 7:
            cemiterio = local;
            strcpy(lc,"cemiterio");
            break;

        case 8:
            floricultura = local;
            strcpy(lc,"floricultura");
            break;

        case 9:
            hospital = local;
            strcpy(lc,"hospital");
            break;

        case 10:
            restaurante = local;
            strcpy(lc,"restaurante");
            break;

        }

    int assassino = rand()% 7 + 1; // Gera um numero aleatorio de 1 a 7.

    switch (assassino) // Define quem é o assassino.
        {
        case 1:
            advogado = assassino;
            strcpy(as,"advogado");
            break;

        case 2:
            cozinheiro = assassino;
            strcpy(as,"cozinheiro");
            break;

        case 3:
            florista = assassino;
            strcpy(as,"florista");
            break;

        case 4:
            medica = assassino;
            strcpy(as, "medica");
            break;

        case 5:
            coveiro = assassino;
            strcpy(as,"coveiro");
            break;

        case 6:
           dancarina = assassino;
           strcpy(as,"dancarina");
           break;

        case 7:
            mordomo = assassino;
            strcpy(as,"mordomo");
            break;
        }

        int arma = rand()% 7 + 1;

        switch (arma) // Define qual a arma.
        {
        case 1:
            veneno = arma;
            strcpy(ar, "veneno");
            break;

        case 2:
            faca = arma;
            strcpy(ar, "faca");
            break;

        case 3:
            pistola = arma;
            strcpy(ar,"pistola");
            break;

        case 4:
            tesoura = arma;
            strcpy(ar, "tesoura");
            break;

        case 5:
            pa = arma;
            strcpy(ar,"pa");
            break;

        case 6:
           corda = arma;
           strcpy(ar, "corda");
           break;

        case 7:
            martelo = arma;
            strcpy(ar, "martelo");
            break;

        }

        do{
          printf("Quantos jogadores vao participar?\n");
          printf("Minimo:2 Maximo:8\n\n");
          scanf("%d", &jogadores);
          system("cls");
        }while(jogadores<2 || jogadores>8); // Não deixa menos de 3 e mais de 8 jogadores

        printf("Em um encontro entre amigos um terrivel acontecimento assustou a todos, um assasinato acaba de acontecer.\nAgora depende de voce descobrir quem foi.\nEscolha seus suspeitos e descubra o culpado.\nBoa sorte!");
        printf("\n");
        //printf("\n%d %d %d\n", local,assassino,arma); //Colinha.

        do{
            printf("\n1 - Comecar\n2 - Sair\n\n");
            scanf("%d", &intro);
            system("cls");
          }while(intro<1 || intro>2);

        if(intro==2)
            {
                printf("O assassino nao foi encontrado.");
                return 0;
            }

        do{

            do{

                system("cls"); // Limpa a tela.

                printf("Jogador %d:\n\n", j); // Mostra de quem é a vez de jogar.

                if(dica==3) // Dica da arma na terceira rodada;
                {
                    if(arma==2 || arma==4 || arma==6)
                    {
                     printf("A policia acaba de anunciar que o corpo tinha marcas de cortes.\n\n");
                    }else{
                     printf("A policia acaba de anunciar que o corpo nao tinha marcas de cortes.\n\n");
                    }
                }

                if(dica==5) // Dica do local na quinta rodada;
                {
                    if(local==floricultura)
                    {
                    printf("A policia acaba de anunciar que o corpo possuia flores em suas roupas.\n\n");
                    }else if(local==banco){
                    printf("A policia acaba de anunciar que o corpo possuia muito dinheiro em seus bolsos.\n\n");
                    }else if(local==hotel){
                    printf("A policia acaba de anunciar que o corpo tinha a chave do quarto 763 no seu bolso.\n\n");
                    }else if(local==hospital){
                    printf("A policia acaba de anunciar que o corpo estava muito doente porem a doença nao foi  o motivo da morte.\n\n");
                    }else{
                    printf("A policia nao conseguiu achar nenhuma informacao importante ate o momento do caso\n\n");
                    }
                }
                printf("Digite o local:\n1 - Praca \n2 - Prefeitura \n3 - Banco \n4 - Mansao \n5 - Hotel \n6 - Boate \n7 - Cemiterio \n8 - Floricultura \n9 - Hospital \n10 - Restaurante\n\n");
                scanf("%d", &loc); // O jogador escolhe o local.
            }while(loc<1 || loc>10);

            do{
                system("cls");
                printf("Jogador %d:\n\n", j);
                printf("Digite seu suspeito:\n1 - Advogado \n2 - Cozinheiro\n3 - Florista\n4 - Medica\n5 - Coveiro\n6 - Dancarina\n7 - Mordomo\n\n");
                scanf("%d", &pes); // O jogador escolhe o assassino.
            }while(pes<1 || pes>7);

            do{
                system("cls");
                printf("Jogador %d:\n\n", j);
                printf("Digite qual a arma do crime:\n1 - Veneno \n2 - Faca \n3 - Pistola \n4 - Tesoura \n5 - Pa \n6 - Corda \n7 - Martelo\n\n");
                scanf("%d", &arm); // O jogador escolhe a arma.
            }while(arm<1 || arm>7);

        system("cls");

        if(loc==local && pes==assassino && arm==arma) // Se o jogador acertar todos os itens ele ganha.
        {
            vitoria=1;
            continue;
        }

        printf("Jogador %d\n\n",j);
        printf("Local: "); // Mostra o local que o jogador escolheu.
        if (loc == 1)
        {
        printf("Praca\n");
        } else if (loc == 2) {
        printf("Prefeitura\n");
        } else if (loc == 3) {
        printf("Banco\n");
        } else if (loc == 4) {
        printf("Mansao\n");
        } else if (loc == 5) {
        printf("Hotel\n");
        } else if (loc == 6) {
        printf("Boate\n");
        } else if (loc == 7) {
        printf("Cemiterio\n");
        } else if (loc == 8) {
        printf("Floricultura\n");
        } else if (loc == 9) {
        printf("Hospital\n");
        } else {
        printf("Restaurante\n");
        }

        printf("Assassino: "); // Mostra o assassino que o jogador escolheu.
        if (pes == 1)
        {
        printf("Advogado\n");
        } else if (pes == 2) {
        printf("Cozinheiro\n");
        } else if (pes == 3) {
        printf("Florista\n");
        } else if (pes == 4) {
        printf("Medica\n");
        } else if (pes == 5) {
        printf("Coveiro\n");
        } else if (pes == 6) {
        printf("Dancarina\n");
        } else {
        printf("Mordomo\n");
        }

        printf("Arma: "); // Mostra a arma que o jogador escolheu.
        if (arm == 1) {
        printf("Veneno\n");
        } else if (arm == 2) {
        printf("Faca\n");
        } else if (arm == 3) {
        printf("Pistola\n");
        } else if (arm == 4) {
        printf("Tesoura\n");
        } else if (arm == 5) {
        printf("Pa\n");
        } else if (arm == 6) {
        printf("Corda\n");
        } else {
        printf("Martelo\n");
        }

        // Mostra quais itens o jogador acertou ou não.
        if(loc==local){
            printf("\nLocal certo.\n");
        }else{
            printf("\nLocal errado.\n");
            }

        if(pes==assassino){
            printf("O supeito eh o assassino.\n");
        }else{
            printf("O suspeito eh inocente.\n");
            }

        if(arm==arma){
            printf("Arma do crime foi encontrada.\n\n");
        }else{
            printf("Arma errada.\n\n");
            }

        do{
            printf("Para continuar digite 1.\n\n");
            scanf("%d",&cont);
            system("cls");
        }while(cont<1 || cont>1);

        j++; // Proximo jogador.
        dica++; // Proxima rodada.

        if(j>jogadores && vitoria!=1) //Naõ deixa ultrapassar a quantidade de jogadores.
            j=1;


        }while(vitoria!=1);

        if(assassino== 3 || assassino== 4 || assassino== 6 ) // Texto falando sobre o assassino.
         {
          printf("Esse tempo todo a assassina era a %s, ", as);
         }else{
          printf("Esse tempo todo o assassino era o %s, ", as);
         }

         if(arma== 2 || arma== 2 || arma== 4 || arma== 5 || arma== 6 ) // Texto falando sobre a arma.
         {
          printf("utilizando uma %s nao teve escapatoria, ",ar);
         }else if(arma==1){
          printf("utilizando %s nao teve escapatoria, ",ar);
         }else{
          printf("utilizando um %s nao teve escapatoria, ",ar);
         }

        if(local== 1 || local== 3 || local== 4 || local== 6 || local== 8 ) // Texto falando sobre o local.
         {
          printf("o terrivel crime aconteceu na %s.\n", lc);
         }else{
          printf("o terrivel crime aconteceu no %s.\n", lc);
         }

        printf("Parabens jogador %d voce acaba de descobrir todas as respostas dessa trama!!!\n",j);

    return 0;
}
