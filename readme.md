# Estudo da linguagem C
## Neste repositório será publicado arquivos escritos em C

<img src="https://giovanidacruz.com.br/wp-content/uploads/2022/11/C-programming-1024x530-1.jpg" height="150" width="300">

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>
int main(){
    printf("Hello,World\n");
    return 0;
}
```

#### primeiro.c

```c
/*
este progama pede o usuarioo um numero qualquer e depois exibe
o numero na tela
*/
#include <stdio.h> // biblioteca para trabalhar com entrada e saida de dados
 
int main(){
    int idade; //declaraçao de variavel idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o numero digitado pelo usuario  
                        // estamos usando o comando scanf e adicionando
                        // o valor digitado ao endereço de memoria
                        //da variavel idade. usamos o e-comercial para
                        //referenciar  o endereço de memoria de variavel
                        // idade
    printf("A idade digitada é %d\nEndereço da variavel idade %x\n",idade, &idade);
    return 0;                    
}
```

#### operacoes.c

```c
#include<stdio.h>
 
int main(){
    int n1;
    int n2;
    int soma;
    int subitrair;
    int multiplicar;
    int divisao;
    printf("Digite um numero e tecle enter:\n");
    scanf("%d",&n1);
 
    printf("digite outro numero e tecle enter:\n");
    scanf("%d",&n2);
   
    soma = n1 +n2;
    subitrair= n1 -n2;
    multiplicar- n1* n2;
    divisao= n1 /n2;
    printf("0 resultado da soma é de %d\n",soma);
    printf("0 resultado da subitraçao é de %d\n",subitrair);
    printf("0 resultado da multiplicaçao é de %d\n",multiplicar);
    printf("0 resultado da divisao é de %d\n",divisao);
 
    return 0;
 
}
```

#### desconto.c

```c
#include<stdio.h>
int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;
    printf ("digite o preço do produto\n");
    scanf("%f",&preco);
    printf("digite o desconto do produto\n");
    scanf("%f",&percentual);
 
    resultado = preco -  (preco * (percentual / 100));  
 
    vdesc = preco - resultado;
    printf("O preço final do produto com desconto de  %2.2f aplicado é de %2.2f\n", vdesc,resultado);
    return 0;
 
}
```