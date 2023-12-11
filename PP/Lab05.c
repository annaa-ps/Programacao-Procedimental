/*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[6]={1,0,5,-2,-5,7};
    int soma, i;
    soma=0;

    soma = A[0]+ A[1]+ A[5];
    A[4] = 100;
    printf("\nA soma dos valores nas posicoes 0, 1 e 5 eh: %d", soma);
    printf("\n");

    for(i=0; i<6;i++){
            printf("\nO valor da posicao %d eh: %d", i+1, A[i]);
    }

    return 0;
}
-------------------------------------------------------------------
/*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[8];
    int x, y, i;

    for(i=0; i<8; i++){
      printf("Digite um valor da posicao %d: ", i);
      scanf("%d", &A[i]);
    }

    printf("\nQual eh a primeira posiçao para soma: ");
    scanf("%d", &x);
    printf("\nQual eh a segunda posicao para soma: ");
    scanf("%d", &y);

    printf("\nA soma dos valores da posicao %d e %d eh: %d", x, y, A[x]+A[y]);


    return 0;
}
------------------------------------------------------------
/*3. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[6];
    int i;


    for(i=0; i<6; i++){
      printf("Digite um valor da posicao %d: ", i);
      scanf("%d", &A[i]);
    }

    printf("\nA ordem inversa dos valores eh:");
    for(i=5;i>=0; i--){
        printf("\n%d", A[i]);
    }



    return 0;
}
---------------------------------------------
/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A[5];
    int i, maior, menor, posmaior, posmenor;
    
    for(i=0; i<5; i++){
      printf("Digite o valor da posicao %d: ", i);
      scanf("%d", &A[i]);
    }
    
    maior = A[0];
    posmaior = 0;
    for(i=0; i<5; i++){
        if(A[i]>maior){
            maior = A[i];
            posmaior = i; 
        }
    }
        
    menor = A[0];
    posmenor = 0;
    for(i=0; i<5; i++){
        if(A[i]<menor){
            menor = A[i];
            posmenor = i;
        }
    }
    
    printf("\nO maior valor esta na posicao: %d", posmaior); 
    printf("\nO menor valor esta na posicao: %d", posmenor); 

    return 0;
}
-----------------------------------------------------------------------------------
/* 5.Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i  
 a posição do elemento no vetor. Em seguida imprima o vetor na tela.  */ 
  
 #include <stdio.h> 
  
 int main(){ 
   int A[50]; 
   for (int i = 0; i < 50; i++){ 
     A[i] = (i + 5 * i) % (i + 1); 
   } 
   for (int i = 0; i < 50; i++){ 
     printf("%d\n", A[i]); 
   } 
   return 0; 
 } 
--------------------------------------------------------------------------------------
 /* 6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que  
 são primos e suas respectivas posições no vetor. 
 */ 
  
 #include <stdio.h> 
  
 int main() 
 { 
   int A[10]; 
   for (int i = 0; i < 10; i++){ 
     printf("Digite o %d valor: ", i + 1); 
     scanf("%d", &A[i]); 
   } 
   for (int i = 0; i < 10; i++){ 
     int primo = 1; 
     for (int j = 2; j < A[i]; j++){ 
       if (A[i] % j == 0){ 
         primo = 0; 
         break; 
       } 
     } 
     if (primo){ 
       printf("Posicao %d: %d\n", i, A[i]); 
     } 
   } 
   return 0; 
 }
------------------------------------------------------------------------------------
/* 7. Faça um programa que receba 6 números inteiros e mostre:
Os números pares digitados;
A soma dos números pares digitados;
Os números ímpares digitados;
A quantidade de números ímpares digitados;
 */ 
#include <stdio.h> 
  
 int main() 
 { 
    int vet[6]; 
    int i, soma, qtdimp; 
    soma = 0;
    qtdimp = 0; 

    for(i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    for(i=0; i<6; i++){
        if(vet[i]%2==0){
            printf("\npar:%d", vet[i]);
            soma+=vet[i];

        }
        else{
            printf("\nimpar:%d",vet[i]);
            qtdimp++; 
        }
    
    }

    printf("\nA soma dos numeros pares eh: %d", soma); 
    printf("\nA quantidade de impares eh: %d", qtdimp);

   return 0; 
 }
----------------------------------------------------------------
 /*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.*/

#include <stdio.h> 
  
 int main(){ 
   int A[10]; 
   for (int i = 0; i < 10; i++){ 
     int valor; 
     printf("Digite o %dº valor: ", i + 1); 
     scanf("%d", &valor); 
     int existe = 0; 
     for (int j = 0; j < i; j++){ 
       if (A[j] == valor){ 
         existe = 1; 
         break; 
       } 
     } 
     if (existe) 

     { 
       i--; 
       continue; 
     } 
     A[i] = valor; 
   } 
   for (int i = 0; i < 10; i++) 
   { 
     printf("%d\n", A[i]); 
   } 
   return 0; 
 } 




------------------------------------------------------------------
Matriz:
/* 1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui*/ 

#include <stdio.h> 
#include<stdlib.h> 
  
 int main() 
 { 
    int mat[4][4];
    int i, j, maior; 
    maior=0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);

              if(mat[i][j]>10){
                maior++;
            }

        }
    }


    printf("\n");
    printf("A quantidade de numeros maiores que 10 eh: %d", maior);

    return 0; 
 }
-------------------------------------------------------------
 /*2.Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.Escreva ao final a matriz obtida.*/ 
  
 #include <stdio.h> 
  
 int main() 
 { 
   int A[5][5]; 
   for (int i = 0; i < 5; i++) 
   { 
     for (int j = 0; j < 5; j++) 
     { 

       if (i == j) 
       { 
         A[i][j] = 1; 
       } 
       else 
       { 
         A[i][j] = 0; 
       } 
     } 
   } 
   for (int i = 0; i < 5; i++) 
   { 
     for (int j = 0; j < 5; j++) 
     { 
       printf("%d ", A[i][j]); 
     } 
     printf("\n"); 
   } 
   return 0; 
 } 
  

 --------------------------------------------------------------------------------
  /* 3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/ 
  
 #include <stdio.h> 
  
 int main(){ 
   int A[4][4]; 
   int maior = 0; 
   int linha = 0; 
   int coluna = 0; 

   for (int i = 0; i < 4; i++) { 
     for (int j = 0; j < 4; j++) { 
       printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1); 
       scanf("%d", &A[i][j]); 
       if (A[i][j] > maior){ 
         maior = A[i][j]; 
         linha = i; 
         coluna = j; 
       } 
     } 
   } 
   printf("Maior: %d\n", maior); 
   printf("Linha: %d\n", linha); 
   printf("Coluna: %d\n", coluna); 
   return 0; 
 } 
-------------------------------------------------------------------------
/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de não
encontrado.*/

#include <stdio.h> 
#include<stdlib.h> 

int main() {
int mat[5][5];
    int i, j, x;

    printf("Qual eh o falor de X: ");
    scanf("%d", &x);

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite o valor de mat[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
            
        }
    }
    
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(mat[i][j]==x){
                printf("\n\nO valor de X esta na linha %d e coluna %d!", i,j);
            }
            else{
                printf("\n\nO valor de X nao foi encontrado na linha &d e coluna %d!", i, j);
            }
        }
    }
    return 0;
}
-----------------------------------------------------------
 /* 5. Gerar e imprimir uma matriz de tamanho 10 × 10, onde seus elementos são da forma:  
 A[i][j] = 2i + 7j - 2 se i < j;  
 A[i][j] = 3i2 - 1 se i = j;  
 A[i][j] = 4i3  5j2 + 1 se i > j: 
 */ 
  
 #include <stdio.h> 
  
 int main() 
 { 
   int A[10][10]; 
   for (int i = 0; i < 10; i++) 
   { 

     for (int j = 0; j < 10; j++) 
     { 
       if (i < j) 
       { 
         A[i][j] = 2 * i + 7 * j - 2; 
       } 
       else if (i == j) 
       { 
         A[i][j] = 3 * i * i - 1; 
       } 
       else 
       { 
         A[i][j] = 4 * i * i * i - 5 * j * j + 1; 
       } 
     } 
   } 
   for (int i = 0; i < 10; i++) 
   { 
     for (int j = 0; j < 10; j++) 
     { 
       printf("%d ", A[i][j]); 

     } 
     printf("\n"); 
   } 
   return 0; 
 } 
  
 --------------------------------------------------------------------------------
 /* 6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a  
 matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos  
 acima da diagonal principal. Imprima a matriz original e a matriz transformada.  

 */ 
  
 #include <stdio.h> 
 #include <stdlib.h> 
  
 int main() 
 { 
   int A[4][4]; 
   for (int i = 0; i < 4; i++) 
   { 
     for (int j = 0; j < 4; j++) 
     { 
       A[i][j] = rand() % 20 + 1; 
     } 
   } 
   for (int i = 0; i < 4; i++) 
   { 
     for (int j = 0; j < 4; j++) 
     { 
       printf("%d ", A[i][j]); 
     } 

     printf("\n"); 
   } 
   printf("\n"); 
   for (int i = 0; i < 4; i++) 
   { 
     for (int j = 0; j < 4; j++) 
     { 
       if (i < j) 
       { 
         A[i][j] = 0; 
       } 
     } 
   } 
   for (int i = 0; i < 4; i++) 
   { 
     for (int j = 0; j < 4; j++) 
     { 
       printf("%d ", A[i][j]); 
     } 
     printf("\n"); 
   } 

   return 0; 
 } 
  
 --------------------------------------------------------------------------------
  
 /* 7. Faça um programa para gerar automaticamente números entre  0 e 99 de  uma cartela de  
 bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de  
 modo  a  não  ter  números  repetidos  dentro  das  cartelas.  O  programa  deve  exibir  na tela  a  
 cartela gerada. 
 */ 

  
 #include <stdio.h> 
 #include <stdlib.h> 
  
 int main() 
 { 
   int A[5][5]; 
   for (int i = 0; i < 5; i++) 
   { 
     for (int j = 0; j < 5; j++) 
     { 
       int valor; 
       int existe; 
       do 
       { 
         valor = rand() % 100;      
         existe = 0;    
         for (int k = 0; k < j; k++) 
         { 
           if (A[i][k] == valor) 
           { 

             existe = 1; 
             break; 
           } 
         } 
         for (int k = 0; k < i; k++) 
         { 
           if (A[k][j] == valor) 
           { 
             existe = 1; 
             break; 
           } 
         } 
       } while (existe); 
       A[i][j] = valor; 
     } 
   } 
   for (int i = 0; i < 5; i++) 
   { 
     for (int j = 0; j < 5; j++) 
     { 
       printf("%d\t", A[i][j]); 

     } 
     printf("\n"); 
   } 
   return 0; 
 } 
  
 -------------------------------------------------------------------------------
  
 /* 8. Faça um programa que leia duas matrizes 2  × 2 com valores reais. Ofereça ao usuário um 
 menu de opções: 
 a) somar as duas matrizes 
 b) subtrair a primeira matriz da segunda 
 c) adicionar uma constante às duas matrizes 

 d) imprimir as matrizes 
 */ 
  
 #include <stdio.h> 
  
 int main() 
 { 
   int A[2][2], B[2][2]; 
   int opcao; 
   int constante; 
   for (int i = 0; i < 2; i++) 
   { 
     for (int j = 0; j < 2; j++) 
     { 
       printf("Digite o %dº valor da matriz A: ", i * 2 + j + 1); 
       scanf("%d", &A[i][j]); 
     } 
   } 
   for (int i = 0; i < 2; i++) 
   { 

     for (int j = 0; j < 2; j++) 
     { 
       printf("Digite o %dº valor da matriz B: ", i * 2 + j + 1); 
       scanf("%d", &B[i][j]); 
     } 
   } 
   printf("1 - Somar as duas matrizes\n"); 
   printf("2 - Subtrair a primeira matriz da segunda\n"); 
   printf("3 - Adicionar uma constante às duas matrizes\n"); 
   printf("4 - Imprimir as matrizes\n"); 
   printf("Digite a opção desejada: "); 
   scanf("%d", &opcao); 
   switch (opcao) 
   { 
   case 1: 
     for (int i = 0; i < 2; i++) 
     { 
       for (int j = 0; j < 2; j++) 

       { 
         printf("%d ", A[i][j] + B[i][j]); 
       } 
       printf("\n"); 
     } 
     break; 
   case 2: 
     for (int i = 0; i < 2; i++) 
     { 
       for (int j = 0; j < 2; j++) 
       { 
         printf("%d ", A[i][j] - B[i][j]); 
       } 
       printf("\n"); 
     } 
     break; 
   case 3: 
     printf("Digite a constante: "); 
     scanf("%d", &constante); 
     for (int i = 0; i < 2; i++) 
     { 

       for (int j = 0; j < 2; j++) 
       { 
         printf("%d ", A[i][j] + constante); 
       } 
       printf("\n"); 
     } 
     for (int i = 0; i < 2; i++) 
     { 
       for (int j = 0; j < 2; j++) 
       { 
         printf("%d ", B[i][j] + constante); 
       } 
       printf("\n"); 
     } 
     break; 
   case 4: 
     for (int i = 0; i < 2; i++) 
     { 
       for (int j = 0; j < 2; j++) 
       { 
         printf("%d ", A[i][j]); 

       } 
       printf("\n"); 
     } 
     for (int i = 0; i < 2; i++) 
     { 
       for (int j = 0; j < 2; j++) 
       { 
         printf("%d ", B[i][j]); 
       } 
       printf("\n"); 
     } 
     break; 
   default: 
     printf("Opção inválida!\n"); 
     break; 
   } 
   return 0; 
 } 
 ----------------------------------------------------------------
