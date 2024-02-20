#include <stdio.h>
#include<math.h>

int main(){
    int base, exp, i, b;
    printf("Digite um número para a base: \n");
    scanf("%d",&base);

    printf("Digite um número para o expoente: \n");
    scanf("%d",&exp);
    
    b=base;
    for(i=1; i<exp; i++){
        base *=b;
    }
    printf("%d\n",base);
    return 0;
}