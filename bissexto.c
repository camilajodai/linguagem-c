#include <stdio.h>

int main(){
    int num;
    printf("Digite o ano e descubra se é bissexto: \n");
    scanf("%d",&num);

    if(num%4==0){
        printf("Este ano é bissexto. \n");
    }
    else{
        printf("Este ano não é bissexto. \n");
    }
    return 0;
}