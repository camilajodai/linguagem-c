#include<stdio.h>

int main(){
    int valores[5]={1,2,3,4,5};
    int i;
    printf("Exibindo o primeiro valor: %d\n",valores[0]);
    printf("Exibindo o segundo valor: %d\n",valores[1]);
    for (i=0; i<5; i++){
        printf("Exibindo %d \n", valores[i]);
    }
    return 0;
}