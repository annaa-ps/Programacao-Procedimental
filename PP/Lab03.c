//1. Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando
números maiores que 0


#include <stdio.h>
int main()

{

    int i = 1;

    int count = 0;



    while (count < 5)

    {



        if (i % 3 == 0)

        {

            printf("%d\n", i);

            count++;

        }

        i++;

    }

    return 0;

}
//2. Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez deve
usar a estrutura de repetição for, a segunda while, e a terceira do-while.



#include <stdio.h>

#include <stdlib.h>



int main()

{



    int i;



    for(i=1;i <=100;i++){

        printf("%d\n", i);

        }



    i=1;

    while (i <=100){

        printf("\n%d",i++);

    }



    printf("\n");



    i=1;

    do{

        printf("\n%d",i++);

    }while(i<=100);



        system("pause");

             return 0;

}
//3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,

//iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.



#include <stdio.h>

#include <stdlib.h>



int main()

{

int i=10;



while(i>=0){

    printf("\n%d",i--);



        if(i== -1){

    printf("\nFIM!");

    }

}



return 0;

}
//4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em

//1000, imprimindo seu valor na tela, até que seu valor seja 100.000 (cem mil)



#include <stdio.h>

#include <stdlib.h>



int main()

{

int i=0;



while(i<=99999){

    i=i+1000;

    printf("\n %d",i);

}



return 0;

}
// 5) Faça um programa que peça ao usuário para digitar 10 valores e some-os



#include <stdio.h>



int main() {

    int soma = 0, num;

    printf("Digite 10 valores para obter a soma:\n");

    for (int i = 0; i < 10; i++) {

        printf("Digite a %d nota: ", i+1);

        scanf("%d", &num);

        soma += num;

    }

    printf("\nSoma = %d : ", soma);

return 0;

}
//6) Faça um programa que leia 10 inteiros e imprima sua média



#include <stdio.h>



int main() {

    int soma = 0, num, med;

    printf("Digite 10 valores para obter a média:\n");

    for (int i = 0; i < 10; i++) {

        printf("Digite a %d nota: ", i+1);

        scanf("%d", &num);



        soma += num;

        med = soma/num;

    }

    printf("\nMedia = %d ", med);



    system("pause");

    return 0;



}
//7) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.



#include <stdio.h>



int main() {

    int soma = 0, num, med;



    for (int i = 0; i <10; i++) {

        printf("Digite o numero %d: ", i+1);

        scanf("%d", &num);



           while(num <= 0){

printf("\nO numero digitado nao e positivo!!!\nDigite um numero positivo: ", i);

scanf("%d", &num);

}




        soma += num;

    }



    printf("\nMedia = %d ", med = soma/10);



    system("pause");

    return 0;
}




8) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido

#include <stdio.h>

int main(){

    int i, num, maior, menor;

    maior = 0;

    menor = 0;

/*for utilizado para entrada de dados de 10 numeros*/

    for(i = 0; i < 10; i++){

      printf("Digite o %d numero: ", i+1);

      scanf("%d",&num);

/*caso seja a primeira interação maior e menor recebem o número digitado*/

      if(i == 0){

          maior = num;

          menor = num;

      }

/*avalia se num é maior que o valor contido em maior, se for

maior recebe num*/

else if(num > maior){

maior = num;

}

/*avalia se num é menor que o valor contido em menor, se for

menor recebe num*/

else if(num < menor){
menor = num;

}

    }

    printf("\nMaior: %d", maior);

    printf("\nMenor: %d", menor);

    return 0;

}




9) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números
naturais ímpares.




#include <stdio.h>



int main(){

    int num, cont = 1;



    printf("Digite um numero inteiro: ");

    scanf("%d",&num);




    while(num != 0){

          if( cont %2 != 0){

              printf("%d ", cont);

              num--;

          }

        cont ++;

    }

    return 0;

}
//10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>



int main() {

int soma, cont;



soma = 0;



    printf("\n\n Os 50 primeiros numeros pares são: ");



for(cont = 1; cont<=100;cont++){

    if(cont%2 == 0){

        printf("%d ", cont);

        soma+=cont;

    }

}



    printf("\nA soma dos cinquenta primeiros numeros pares eh: %d", soma);



     return 0;

}
//11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
#include <stdio.h>



int main()

{

    int n;

    int i = 0;



    printf("Digite um valor: ");

    scanf("%d", &n);



    while (i <= n)

    {

        printf("%d\n", i);

        i++;

    }

    return 0;

}
12. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78


#include <stdio.h>



int main(){



int numero;

int soma = 0;

int contador = 0;



printf("Digite um numero inteiro: ");

scanf("%d", &numero);



printf("\nOs Divisores de %d sao: ", numero);



for(contador = 1; contador <= numero; contador ++){

if(numero % contador == 0){

soma += contador;

printf("%d ", contador);

}

}
printf("\n\nA soma dos Divisores de %d (com excesao dele) eh: %d", numero, soma);



return 0;

}




//13. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
de 3 ou 5.

#include <stdio.h>



int main()

{

    int i = 1;

    int sum = 0;

    while (i < 1000)

    {

        if (i % 3 == 0 || i % 5 == 0)

          sum += i;



        i++;

    }

    printf("%d\n", sum);

    return 0;

}
//14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.


#include <stdio.h>

#include <stdlib.h>



int main()

{

    int n;

    int i = 0;



    printf("Digite um valor: ");

    scanf("%d", &n);



    while (i < n)

    {

        int d1 = rand() % 6 + 1;

        int d2 = rand() % 6 + 1;

        printf("%d %d ", d1, d2);

        if (d1 > d2)

          printf(">\n");
        else if (d1 < d2)

          printf("<\n");

        else

          printf("=\n");



        i++;

    }

    return 0;

}



//15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.
#include <stdio.h>

#include <math.h>



int main()

{

    int valor;

    printf("Digite um valor: ");

    scanf("%d", &valor);

    while (valor > 0)

    {

        printf("O quadrado de %d é %d\n", valor, valor * valor);

        printf("O cubo de %d é %d\n", valor, valor * valor * valor);

        printf("A raiz quadrada de %d é %f\n", valor, sqrt(valor));

        printf("Digite um valor: ");

        scanf("%d", &valor);

    }

    return 0;

}
//16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
  Adição (opção 1)
  Subtração (opção 2)
  Multiplicação (opção 3)
  Divisão (opção 4).
   Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).

#include <stdio.h>

#include <math.h>



int main()

{



    int opcao = 0;

    int a = 0;

    int b = 0;



    while (opcao != 5)

    {

        printf("Escolha uma opção:\n");

        printf("1 - Adição\n");
        printf("2 - Subtração\n");

        printf("3 - Multiplicação\n");

        printf("4 - Divisão\n");

        printf("5 - Sair\n");

        printf("Opção: ");

        scanf("%d", &opcao);

        if (opcao == 5) {

          break;

    }



        printf("Digite dois valores: ");

        scanf("%d %d", &a, &b);

        if (opcao == 1)

          printf("%d + %d = %d\n", a, b, a + b);

        else if (opcao == 2)

          printf("%d - %d = %d\n", a, b, a - b);

        else if (opcao == 3)

          printf("%d * %d = %d\n", a, b, a * b);

        else if (opcao == 4)

          printf("%d / %d = %d\n", a, b, a / b);

        else

          printf("Opção inválida!\n");




}
//17. Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce
3 centímetros por ano. Escreva um programa que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.
#include <stdio.h>



int main(void)

{

    float chico = 1.50;

    float ze = 1.10;

    int anos = 0;



    while (ze <= chico)

    {

        chico += 0.02;

        ze += 0.03;

        anos++;

    }

    printf("Zé será maior que Chico em %d anos\n", anos);

    return 0;

}
//18. Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
ano anterior. Faça programa que determine o salário atual do funcionário.
#include <stdio.h>



int main(void)

{

    int ano = 1995;

    float salario = 2000;

    while (ano < 2019)

    {

        if (ano == 1995)

            printf("Salário de %d: R$%.2f\n", ano, salario);

        else

{

            salario *= 1.015;

            printf("Salário de %d: R$%.2f\n", ano, salario);

        }

        ano++;
     }

     return 0;

}




//19. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
#include <stdio.h>



int main(v)

{

    int value = 0;

    printf("Digite o valor do saque: ");

    scanf("%d", &value);

    int notes100 = value / 100;

    value = value % 100;

    int notes50 = value / 50;

    value = value % 50;

    int notes20 = value / 20;

    value = value % 20;

    int notes10 = value / 10;

    value = value % 10;
    int notes5 = value / 5;

    value = value % 5;

    int notes2 = value / 2;

    value = value % 2;

    int notes1 = value / 1;

    value = value % 1;

    printf("Notas de 100: %d\n", notes100);

    printf("Notas de 50: %d\n", notes50);

    printf("Notas de 20: %d\n", notes20);

    printf("Notas de 10: %d\n", notes10);

    printf("Notas de 5: %d\n", notes5);

    printf("Notas de 2: %d\n", notes2);

    printf("Notas de 1: %d\n", notes1);

    return 0;

}

//20. Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
#include <stdio.h>



int main()

{

     int i = 1;

     int sum = 0;

     while (i < 2000000)

{

        int j = 1;

        int count = 0;

        while (j <= i)

{

          if (i % j == 0)

             count++;
            j++;

        }

        if (count == 2) {

            sum += i;

        }

        i++;

    }

    printf("%d\n", sum);

    return 0;

}




21. Faça um programa que conte quantos números primos existentes entre a e b, onde a e b são
números informados pelo usuário

#include <stdio.h>



int main(){



int a, b, i, j, primo;

int cont = 0;



printf("Informe o valor de a: ");

scanf("%d", &a);



printf("Informe o valor de b: ");

scanf("%d", &b);
for(i = a; i <= b; i ++){

primo = 1;

for(j = 2; j <= i/2; j ++){

if(i % j == 0){

primo= 0;

break;

}

}

if(primo && i > 1){

cont ++;

}

}

printf("\nExistem %d numeros primos entre %d e %d", cont, a, b);

return 0;

}




//22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois
dígitos é 9009 = 91*99
#include <stdio.h>



int main()

{

    int i = 100;

    int max = 0;

    while (i < 1000)

{

        int j = 100;

        while (j < 1000)

    {

         int product = i * j;
            int reverse = 0;

            int temp = product;

            while (temp > 0)

{

                reverse = reverse * 10 + temp % 10;

                temp /= 10;

            }

            if (product == reverse && product > max) {

                max = product;

            }

            j++;

        }

        i++;

    }

    printf("%d\n", max);

    return 0;

}

//23. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do
chamado Triangulo de Floyd. Para n = 6, temos:



#include <stdio.h>



int main (){



    int n=6;

    int i, j, c = 0;



    for (i=1; i <=n; i++){

        for(j=1; j<=i;j++){

            c++;

            printf("%d ", c);
        }

        printf("\n");

    }



system ("pause");

return 0;



}

