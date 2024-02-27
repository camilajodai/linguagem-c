#include<stdio.h>

int main(){
    FILE *arquivo;
    char texto[100];

    arquivo = fopen("exemplo.txt","w");
    if(arquivo == NULL){
        printf("Eroo ao abrir arquivo. \n");
        return 1;
    }
    fprintf(arquivo, "Saudade é um pedaço de qualquer coisa morando dentro da gente ainda que louco pra voltar pra casa");
    fclose(arquivo);
    arquivo = fopen("exemplo.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir arquivo. \n");
        return 1;
    }

    fgets(texto, 100, arquivo);
    printf("Conteúdo do arquivo: %s\n", texto);

    fclose(arquivo);
    return 0;
}