#include <stdio.h>

struct carta {
    char estado;
    char codigo[6];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};
    
int main(){
    struct carta carta1, carta2;

    printf("----- BEM VINDO AO MEU PRIMEIRO PROGRAMA EM C -----\n");


                 
                 printf("SUPER TRUNFO DAS CIDADES BRASILEIRAS.\n");



 printf("\n--- VOCE VAI PREENCHER OS DADOS DA PRIMEIRA CARTA, Ja explico tudo jogador! ---\n");

 
    printf("\n lembre-se que os estados sao representados por letras de A-H\n");

    printf("Divirta-se!!\n");


    printf("Para comecar, digite apenas uma letra para o estado (Por exemplo, 'A', 'B', 'C'...): ");
    scanf(" %c", &carta1.estado);

    printf("Agora, escolha um codigo e digite o codigo da carta (ex: A01, Serve para identificar de forma unica cada carta do jogo.): ");
    scanf(" %s", carta1.codigo);

    printf("Ja registrei sua resposta jogador! Para tornar o jogo mais interessante, digite agora, o nome da cidade (Serve para identificar claramente qual cidade esta representada em cada carta.): ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Legal! O proximo passo, e digitar em numeros inteiros a populacao da cidade  (Essa informacao pode ser usada para comparar cartas no jogo):");
    scanf(" %d", &carta1.populacao);

    printf("Digite a area da cidade: (em km2) ( Essas informacoes onde atributos maiores ou menores podem definir o vencedor de uma rodada.): ");
    scanf(" %f", &carta1.area);

    printf("Para sabermos se a cidade e desenvolvida, digite o PIB da Cidade (Cidades com PIB maior podem ser consideradas mais desenvolvidas ou ricas, e isso pode ser um criterio para vencer rodadas no jogo.):");
    scanf(" %f", &carta1.pib);

    printf("Para finalizar a primeira carta, digite os numeros de pontos turisticos da cidade (Esse dado pode ser usado como comparacao entre as cartas no Super Trunfo, mostrando qual cidade e mais interessante para turismo): ");
    scanf(" %d", &carta1.pontosTuristicos);

    printf("\nSHOW! Os dados das cartas foram registrados com sucesso!\n");

    printf("\nAgora veremos o resumo de cada carta:\n");
                 printf("\nAcompanhe\n");
    
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosTuristicos);


    printf("\n--- MARAVILHA! voce realmente e um grande JOGADOR(A). ---\n");
    printf("\nPara mostrar que voce realmente e o cara ou a mina, preencha agora os dados da segunda carta\n");
                                    printf("\n--- VAMOS LA! ---\n");

    printf("\n Comparando com as cartas anteriores, voce ja sabe o que fazer jogador(a)!\n");


    printf("Digite apenas uma letra para o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Agora digite o codigo da carta (ex: A02): ");
    scanf(" %s", &carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &carta2.nomeCidade);

    printf("Com seus conhecimentos, digite a populacao da cidade: ");
    scanf(" %d", &carta2.populacao);

    printf("Eita!! surpreso, como voce e bom, agora digite a area da cidade (nao esquece, e em km2): ");
    scanf(" %f", &carta2.area);

    printf("Digite o PIB da Cidade (sem ponto) (A cidade mais rica tem mais chance de ganhar esse jogo!): ");
    scanf(" %f", &carta2.pib);

    printf("Para finalizar a segunda carta, digite o numeros de pontos turisticos da Cidade: ");
    scanf(" %d", &carta2.pontosTuristicos);


    printf("\nArrasou mais uma vez GRANDE jogador! Os dados da segunda carta foram registrados com SUCESSO!\n");

                         printf("\n RUFLEM OS TAMBORES... \n");


                      printf("\nVamos ao resumo da segunda carta:\n");


    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    printf("\n--- ISSO FOI TUDO PESSOAL, OBRIGADO POR USAR O PROGRAMA ---\n");

    printf("\n--- AGUARDEM NOVAS ATUALIZACOES EM BREVE ---\n");




    system("pause");
    return 0;
    }


