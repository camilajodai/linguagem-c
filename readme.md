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

#### desvio de fluxo: parimpar.c

```c
#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if(num%2==0){
        printf("Este número é par. \n");
    }
    else{
        printf("Este número é ímpar \n");
    }
    return 0;
}
```

#### Desvio de fluxo: media_aluno.c

```c
/*
Neste programa iremos calcular a nota média do aluno, teremos a entrada de 4 notas, depois será feito o cálculo da média, onde iremos somar as notas e depois dividir por 4. Se o aluno tiver uma média acima ou igual a 7, então estará aprovado. Caso o aluno tenha uma nota menor ou igual a 4, então o aluno estará reprovado. Caso contrário, estará em recuperação.
*/
#include <stdio.h>

int main(){
    float n1, n2, n3, n4, md;
    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("Digite a terceira nota: \n");
    scanf("%f",&n3);

    printf("Digite a quarta nota: \n");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4) /4;

    printf("A nota média do aluno é %2.2f\n",md);
    if( md >= 7 ){
        printf("Aprovado. \n");
    }
    else if( md <= 4 ){
        printf("Reprovado. \n");
    }
    else{
        printf("Recuperação. \n");
    }

    return 0;
}
```

#### Desafio: descobrir se o ano é bissexto ou não

```c
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
```

#### Estrutura while: while1.c

```c
#include <stdio.h>

int main(){
    int i=0;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
```

#### whilebissexto.c

```c
#include <stdio.h>

int main(){
    int ano=1950;
    int qtd=0;

    while(ano<=2024){
        if(ano % 4 == 0){
              printf("O ano %d é bissexto. \n",ano);
              qtd++;
        }
        ano++;
    }
    printf("Temos %d anos bissextos \n",qtd);
    return 0;

}
```

#### while_decbin.c

```c
#include <stdio.h>

int main(){
    int dec=24;
    int resto=0;
    int pos=1;
    int rs=0;

    while(dec>0){
        resto = dec % 2;
        dec= dec / 2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;

}
```

#### while_bindec.c

```c
#include <stdio.h>
#include<math.h>

int main(){
    int binario[6]={1,0,1,1,1,0};
    int rs = 0;
    int pos=0;
    int exp = 5;

    while( pos <= 5){
        rs += binario[pos] * ( pow( 2 , exp));
        pos++;
        exp--;

    }
    printf("%d\n",rs);
    return 0;
}
```