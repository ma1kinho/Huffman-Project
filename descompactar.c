#include "descompactar.h"

//Realiza todo o procedimento para descompactar.
void descompactar()
{
    char nome_do_arquivo[100], extensao_do_arquivo[30];
    int tamanho_do_arquivo;

    printf("\nDigite o nome do arquivo a ser descompactado:\n");
    scanf("%s", nome_do_arquivo);

    FILE *arquivo = fopen(nome_do_arquivo, "rb");

    if(arquivo == NULL){
        printf("\nErro no arquivo.\nERRO 017\n\n\n");
        return;
    }

    printf("\nDigite a extensao do arquivo:\n");
    scanf("%s", extensao_do_arquivo);

    printf("Iniciando processo de descompactação...\n##############[0%%]\n\n");

    //rewind(arquivo);
    fseek(arquivo, 0, SEEK_END);
    tamanho_do_arquivo = ftell(arquivo);
    //rewind(arquivo);

    printf("%d\n\n", tamanho_do_arquivo);

    //printf("teste\n");
}
