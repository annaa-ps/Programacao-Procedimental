//01. Faça um programa que leia um número inteiro e o imprima.
#include <stdio.h>

int main()
{
   int num = 0; // variavel que vai ler o numero inteiro

    printf("qual o numero? ");
    scanf("%d",&num);
     printf("seu numero e: %d",num);
    return 0;
}


//02. Faça um programa que leia um número real e o imprima.
#include <stdio.h>

int main()
{
    float num = 0; // variavel que vai ler o numero real

    printf("qual o numero? ");
    scanf("%f",&num);
    printf("seu numero e: %f",num);
    return 0;
}


//03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main()
{
    int num1 = 0; // variavel que vai ler o numero inteiro
    int num2 = 0; // variavel que vai ler o numero inteiro
    int num3 = 0; // variavel que vai ler o numero inteiro
    int res = 0; // resultado da soma

    printf("qual o primeiro numero? ");
    scanf("%d" ,&num1);
    printf("qual o segundo numero? ");
    scanf("%d" ,&num2);
    printf("qual o terceiro numero? ");
    scanf("%d" ,&num3);

    res = num1 + num2 + num3;

    printf("sua soma deu: %d",res);

    return 0;
}
//04. Leia um número real e imprima o resultado do quadrado desse número
#include <stdio.h>

int main()
{
    float num = 0; // variavel que vai ler o numero inteiro
    float res = 0; // variavel do resultado da multipicação

    printf("qual o numero? ");
    scanf("%f", &num);

     res = num * num;

    printf("o quadrado do numero e: %.2f", res);

    return 0;
}


//05. Leia um número real e imprima a quinta parte deste número.
#include <stdio.h>

int main()
{
    float num = 0; // variavel que vai ler o numero inteiro
    float res = 0; // variavel do resultado da multipicação

    printf("qual o numero? ");
    scanf("%f", &num);

     res = num /5;

    printf("a quinta parte do numero e: %.2f", res);

    return 0;
}


//06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
#include <stdio.h>

int main()
{
    float Celsius = 0; // usuario vai digitar
    float Fahrenheit = 0; // resultado

    printf("qual a temperatura em Celsius? ");
    scanf("%f", &Celsius);
     Fahrenheit = Celsius*(9.0/5.0)+32.0;

    printf("sua temperatura em Fahrenheit e: %.2f", Fahrenheit);

    return 0;
}


//07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura
em Fahrenheit.
#include <stdio.h>

int main()
{
    float Fahrenheit = 0; // usuario vai digitar
    float Celsius = 0; // resultado

    printf("qual a temperatura em Fahrenheit? ");
    scanf("%f", &Fahrenheit);

     Celsius = 5.0*(Fahrenheit- 32.0)/9.0 ;

    printf("sua temperatura em Celsius e: %.2f", Celsius);

    return 0;
}


//08. Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A fórmula de
conversão é: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
#include <stdio.h>

int main()
{
    float Kelvin = 0; // usuario vai digitar
    float Celsius = 0; // resultado

    printf("qual a temperatura em Kelvin? ");
    scanf("%f", &Kelvin);

     Celsius = Kelvin -273.15;

    printf("sua temperatura em Celsius e: %.2f", Celsius);

    return 0;
}


//09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de
conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
#include <stdio.h>

int main()
{
    float Celsius = 0; // usuario vai digitar
    float Kelvin = 0; // resultado

    printf("qual a temperatura em Celsius? ");
    scanf("%f", &Celsius);

     Kelvin = Celsius + 273.15 ;

    printf("sua temperatura em Kelvin e: %.2f", Kelvin);

    return 0;
}


//10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros
por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.
#include <stdio.h>

int main()
{
    float km = 0; // usuario vai digitar
    float ms = 0; // resultado

    printf("qual a velocidade em km? ");
    scanf("%f", &km);

      ms = km/3.6 ;

    printf("sua velocidade em M/s e: %.2f", ms);

    return 0;
}


//11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e M em
m/s.

#include <stdio.h>

int main()
{
    float km = 0; // usuario vai digitar
    float ms = 0; // resultado

    printf("qual a velocidade em M/s? ");
    scanf("%f", &ms);
      km = ms*3.6 ;

    printf("sua velocidade em KM e: %.2f", km);

    return 0;
}


//12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão
é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
#include <stdio.h>

int main()
{
    float milhas = 0; // usuario vai digitar
    float km = 0; // resultado

    printf("qual a velocidade em milhas? ");
    scanf("%f", &milhas);

      km = 1.61*milhas ;

    printf("sua velocidade em KM e: %.2f", km);

    return 0;
}


//13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão
é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
#include <stdio.h>

int main()
{
    float km = 0; // usuario vai digitar
    float milhas = 0; // resultado

    printf("qual a velocidade em km? ");
    scanf("%f", &km);

      milhas = km/1.61 ;

    printf("sua velocidade em milhas e: %.2f", milhas);

    return 0;
}


//14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é: R =
G*/180, sendo G o ângulo em graus e R em radianos e = 3.141592.
#include <stdio.h>
int main()
{
    float angul = 0; // usuario vai digitar
    float radi = 0; // resultado

    printf("qual o angulo? ");
    scanf("%f", &angul);

      radi = angul*3.141592/180 ;

    printf("o radiano e: %.2f", radi);

    return 0;
}


//15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G =
R*180/, sendo G o ângulo em graus e R em radianos e = 3.141592.
#include <stdio.h>

int main()
{
    float radi = 0; // usuario vai digitar
    float angul = 0; // resultado

    printf("qual o angulo em radiano? ");
    scanf("%f", &radi);

      angul = radi*180/3.141592 ;

    printf("o radiano e: %.2f", angul);

    return 0;
}


//16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento em
polegadas.
#include <stdio.h>

int main()
{
    float pole = 0; // usuario vai digitar
    float centmetros = 0; // resultado

    printf("qual o angulo em polegadas? ");
    scanf("%f", &pole);

     centmetros = pole*2.54;

    printf("o comprimento em centimetros: %.2f", centmetros);
    return 0;
}


//17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento em
polegadas.
 #include <stdio.h>

int main()
{
    float centmetros = 0; // usuario vai digitar
    float pole = 0; // resultado

    printf("qual o angulo em centmetros? ");
    scanf("%f", &centmetros);

    pole = centmetros/2.54 ;

    printf("o comprimento em polegadas: %.2f", pole);

    return 0;
}


//18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de
conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros cúbicos.
#include <stdio.h>

int main()
{
    float centmetros = 0; // usuario vai digitar
    float pole = 0; // resultado

    printf("qual o angulo em centmetros? ");
    scanf("%f", &centmetros);

    pole = centmetros/2.54 ;

    printf("o comprimento em polegadas: %.2f", pole);

    return 0;
}


//19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A fórmula de
conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros cúbicos.
#include <stdio.h>

int main()
{
     float vom = 0; // usuario vai digitar
     float vol = 0; // resultado

    printf("qual o volume em litros? ");
    scanf("%f", &vol);

    vom = vol/1000 ;

    printf("o volume em volume em metros: %.2f", vom);

    return 0;
}


//20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.
#include <stdio.h>

int main()
{
    float vql = 0; // usuario vai digitar
    float vli = 0; // resultado

    printf("qual o valor da massa em quilogramas? ");
    scanf("%f", &vql);

    vli = vql/0.45;

    printf("o volume em volor em libras. : %.2f", vli);

    return 0;
}


//21. Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de
conversão é: K = L*0.45, sendo K a massa em quilogramas e L a massa em libras.
#include <stdio.h>

int main()
{
    float vli = 0; // usuario vai digitar
    float vql = 0; // resultado

    printf("qual o valor da massa em libras? ");
    scanf("%f", &vli);

    vql = vli*0.45;

    printf("o volume em volor em quilogramas. : %.2f", vql);

    return 0;
}
//22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.
#include <stdio.h>

int main()
{
    float jad = 0; // usuario vai digitar
    float metros = 0; // resultado

    printf("qual o valor comprimento em jadas? ");
    scanf("%f", &jad);

    metros = 0.91*jad;

    printf("o volume em valor em metros. : %.2f", metros);

    return 0;
}


//23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.
#include <stdio.h>

int main()
{
    float jad = 0; // usuario vai digitar
    float metros = 0; // resultado

    printf("qual o valor comprimento em metros? ");
    scanf("%f", &metros);

    jad = metros/0.91;

    printf("o volume em valor em metros. : %.2f", jad);

    return 0;
}


//24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A fórmula
de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em acres.

#include <stdio.h>

int main()
{
    float acre = 0; // usuario vai digitar
    float metros = 0; // resultado
    printf("qual o valor da area em metros quadrados? ");
    scanf("%f", &metros);

    acre = metros*0.000247 ;

    printf("o valor em acres e: %.2f", acre);

    return 0;
}


//25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2 . A fórmula
de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em acres.
#include <stdio.h>

int main()
{
    float acre = 0; // usuario vai digitar
    float metros = 0; // resultado

    printf("qual o valor da area em acre? ");
    scanf("%f", &acre);

    metros = acre*4048.58;

    printf("o valor em metros quadrados e: %.2f", acre);

    return 0;
}


//26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
hectares.
#include <stdio.h>

int main()
{
    float metros = 0; // usuario vai digitar
    float hect = 0; // resultado

    printf("qual o valor da area em metros quadrados? ");
    scanf("%f", &metros);

    hect = metros*0.0001;

    printf("o valor em hectares e: %.2f", hect);

    return 0;
}
//27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2 . A
fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
hectares.
#include <stdio.h>

int main()
{
    float metros = 0; // resultado
    float hect = 0; // usuario vai digitar

    printf("qual o valor da area em hectares? ");
    scanf("%f", &hect);

    metros = hect*10000;

    printf("o valor em hectares e: %.2f", metros);

    return 0;
}


//28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.
#include <stdio.h>

int main()
{
   int num1 = 0; // usuario vai digitar
   int num2 = 0; // usuario vai digitar
   int num3 = 0; // usuario vai digitar
   int resu = 0; // resultado

    printf("qual os valores? ");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);

    resu = (num1 * num1) + (num2 * num2) + (num3 * num3);

    printf("o valor da soma e: %d", resu);

    return 0;
}


//29. Leia quatro notas, calcule a média aritmética e imprima o resultado.
#include <stdio.h>

int main()
{
   float num1 = 0;    // usuario vai digitar
   float num2 = 0;    // usuario vai digitar
   float num3 = 0;    // usuario vai digitar
   float num4 = 0;    // usuario vai digitar
    float resu = 0; // resultado

    printf("qual os valores? ");
    scanf("%f" "%f" "%f" "%f", &num1, &num2, &num3, &num4);

    resu = (num1 + num2 + num3 + num4)/4;

    printf("a media e e: %.2f", resu);

    return 0;
}


//30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.
#include <stdio.h>

int main()
{
    float real = 0; // usuario vai digitar
    float dolar = 0;

    printf(" cotação do dolar\n----------------------\n 1 dolar = 5.28 reais\n----------------------\n\n");
    printf("qual o valor em real? ");
    scanf("%f", &real);

    dolar = real/5.28;




    printf("o valor em dolar e de: %.2f", dolar);

    return 0;
}


//31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor
#include <stdio.h>

int main()
{
    int numero = 0; // usuario vai digitar


    printf("qual o numero ? ");
    scanf("%d", &numero);

    printf(" seu numero: %d \n antecessor: %d \n sucessor: %d", numero, numero-1, numero+1);

    return 0;
}
//32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.
#include<stdio.h>
#include<stdlib.h>


    int
    main() {
                    int num = 5;
                    printf("Numero inteiro: %d" , num);
                    printf("\nSoma do do sucessor de seu triplo com o antecessor de seu dobro : %d ",
                num * 3 + 1 + num * 2 -1);
                    printf("\n\n");
                    system("pause");
                    return 0;
                }




//33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
#include <stdio.h>

int main() {
   int quadrado = 0 ;
   printf("qual o tamanho do lado? ");
   scanf("%d", &quadrado);
   printf("O tamanho de um lado do quadrado e:%dcm" , quadrado);
   printf("\nA area do quadrado e: %dcm ",quadrado*quadrado);
   return 0;
}


//34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área
do círculo é *raio2 , considere = 3.141592.

#include <stdio.h>

int main() {
   int raio = 12;
   float raioquadrado = raio * raio;
   printf("qual o valor do raio do circulo? ");
   scanf("%d", &raio);
   printf("O valor do raio do circulo e: %d" , raio);
   printf("\nA area do circulo e: %.2f " , 3.14* raioquadrado);

    return 0;
}
//35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 =
√𝑎 2 + b 2. Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através
da equação. Imprima o resultado dessa operação.

#include <stdio.h>

int main() {
   int num1, num2, num3;
   float hipotenusa;
   printf("Insira o primeiro valor: ");
   scanf("%d", &num1);
   printf("Insira o segundo valor: ");
   scanf("%d", &num2);
   hipotenusa = ((num1* num1) + (num2* num2));
   printf("A hipotenusa dos valores e = %.2f", hipotenusa);

    return 0;
}


//36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
cilindro circular é calculado por meio da seguinte fórmula: V = * raio2 * altura, onde = 3.141592.
#include <stdio.h>

int main() {
   int altura = 4;
   printf("qual a altura do cilindro? ");
   scanf("%d",& altura);
   int raio = 2;
   printf("\nO raio do cilindro eh: 2");
   float volume = 3.14 * (raio*raio) * altura;
   printf("\nO volume do cilindro eh: %.2f" , volume);
   return 0;
}


//37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em
vista que o desconto foi de 12%.
#include <stdio.h>

int main() {
   float valor, desconto, vfinal;
   printf("Digite o preco do produto: ");
   scanf("%f" , &valor);
   desconto = valor * 0.12;
   vfinal = valor - desconto;
   printf("\nO valor com desconto eh: %.2f" ,vfinal);


    return 0;
}


//39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo que
da quantia total: - O primeiro ganhador receberá 46%; - O segundo receberá 32%; - O terceiro
receberá o restante; Calcule e imprima a quantia ganha por cada um dos ganhadores.
#include <stdio.h>

int main() {
   float valor = 780.000;
   printf("O valor total eh:R$%.3f", valor );
   float gan1, gan2, desc2, gan3, desc3;
   gan1= valor * 0.46;
   printf("\nPrimeiro ganhador recebe:R$%.3f", gan1);
   gan2= valor * 0.32;
   printf("\nPrimeiro ganhador recebe:R$%.3f", gan2);
   gan3= valor * 0.22;
   printf("\nPrimeiro ganhador recebe:R$%.3f", gan3);

    return 0;
}


//40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.

#include <stdio.h>

int main() {
   float dias;
   printf("\nQuantos dias o encanador trabalhou? ");
   scanf("%f" , &dias);
   float sal = 30.00;
   float ir, salfinal;
   ir = sal * 0.08;
   salfinal = sal - ir;
   printf("\nO encanador recebera: R$%.2f" , salfinal * dias);

    return 0;
}


//41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.
#include <stdio.h>

int main() {
   float horadia = 5.50;
   printf("Voce recebe por hora: R$%.2f", horadia);
   float horames;
    printf("\nQuantas horas voce trabalhou esse mes: ");
    scanf("%f", &horames);
    float hrstrab = horadia * horames;
    float bonus, salfim;
    bonus = hrstrab * 0.10;
    salfim = hrstrab + bonus;
    printf("Voce recebera esse mes: R$%.2f", salfim);

    return 0;
}

//42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de
imposto sobre o salário-base.

#include <stdio.h>
#include <stdlib.h>

int main() {
   float salb;
   printf("Insira seu salario: R$");
   scanf("%f", salb);
   float gratificacao, imposto, saltot;
   gratificacao = salb * 0.05;
   imposto = salb * 0.07;
   saltot = salb + gratificacao - imposto;
   printf("\nSalario a receber eh: R$%.2f", saltot);
   printf("\n\n");
   system("pause");
   return 0;
}


//43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: - o total
a pagar com desconto de 10%; - o valor de cada parcela, no parcelamento de 3% sem juros; - a
comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto); - a comissão
do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
#include <stdio.h>

int main() {
   float vlrtot;

    printf("Qual o valor total? ");
    scanf("%f", &vlrtot);

    float des10, vlrapagar;
    des10 = vlrtot * 0.10;
    vlrapagar = vlrtot - des10;
    printf("\nTotal a pagar com desconto de 10%: R$%.2f" , vlrapagar);
    float parc3;
    parc3= vlrtot / 3;
    printf("\nTotal do parcelamento em 3x sem juros: R$%.2f", parc3);
    float comissao;
    comissao= vlrapagar * 0.05;
    printf("\nComissao venda a vista: R$%.2f", comissao);
    float comissao2;
    comissao2= vlrtot * 0.05;
    printf("\nComissao venda parcelada: R$%.2f", comissao2);

    return 0;
}


//44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a
escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
#include <stdio.h>

int main() {
   float degrau, altura, qtd;
   printf("Insira a altura do degrau em centimetros: ");
   scanf("%f", &degrau);
   printf("Qual altura deseja alcancar em metros: ");
   scanf("%f", &altura);
   qtd = (degrau*100) / altura;
   printf("\nA quantidade de degraus para alcancar a altura eh: %.0f" , qtd);
   return 0;
}


//45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII
para resolver o problema.
#include <stdio.h>
#include <ctype.h>

int main(void) {
   char letra;
   printf("Digite uma letra minuscula: ");
   scanf("%c", &letra);
   letra = toupper(letra);
   printf("\nLetra em maiusculo: %c " , letra);

    return 0;
}


//46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro
número formado pelos dígitos invertidos do número lido.
#include <stdio.h>

int main() {
  int num, num1, num2, num3;
  printf("Digite um numero inteiro de 3 digitos positivo: ");
  scanf("%d", &num);
  if (num > 10) {
        num1 = num%10;
             num = num/10;
             num2 = num%10;
             num = num/10;
             num3=num%10;
             num=num/10;
    }
    printf("%d%d%d\n", num1, num2, num3);

    return 0;
}


//47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
#include <stdio.h>
#include <stdlib.h>

    int
    main()
    {
                int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4;
                    printf("Numero inteiro de 4 digitos : %d%d%d%d " , num1, num2, num3, num4);
                    printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3);
                    system("pause");
                    return 0;
                }



//48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
#include <stdio.h>
#include <stdlib.h>

int main() {
  int horas, minutos, segundos;
  printf("Digite os segundos: ");
  scanf("%d" , &segundos);
  horas = segundos / 3600;
  minutos = (segundos -(horas*3600))/60;
  segundos = segundos - (horas*3600)-(minutos*60);
  printf("%dh: %dm: %ds: ", horas, minutos, segundos);

    return 0;
}


//49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto
e segundo) do termino da mesma.
#include <stdio.h>
int main() {
  int h= 15, m =30, s=10;
  printf("A hora inicial eh: %d:%d:%d", h, m, s);
  int duracao = 10800;
  printf("\nA hora de duracao da experiencia em segundos eh: %d", duracao);
  int horas, minutos, segundos;
  horas = duracao / 3600;
  minutos = (duracao-(horas*3600))/60;
  segundos = duracao - (horas*3600)-(minutos*60);
  int hf, mf, sf;
  hf= h + horas;
  mf= m + minutos;
  sf= s + segundos;
  printf("\nA experiência terminara as: %d:%d:%d", hf, mf, sf );

    return 0;
}


//50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade
e do ano atual.
#include <stdio.h>

int main() {
   int idade, ano_atual, ano_nasc;
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   printf("Insira em que ano estamos: ");
   scanf("%d", &ano_atual);
   ano_nasc = ano_atual - idade;
   printf("Voce nasceu em: %d", ano_nasc);

    return 0;
}


//51. Escreva um programa que leia as coordenadas x e y de pontos no R 2 e calcule sua distância
da origem (0, 0).
#include <stdio.h>
#include <math.h>

int main() {
   float x = 0;
   float y = 0;
   float R = 0;
   printf ("Digite a coordenada x \n");
   scanf ("%f", &x);
   printf ("Digite a coordenada y \n");
   scanf ("%f", &y);
   R=sqrt(pow(x,2)+pow(y,2)); //pow(base, expoente) pra elevar ao quadrado e sqrt() é raíz quadrada
   printf("A distancia e: %f \n", R);
    fflush(stdin);

    return 0;
}


//52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que leia
quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio
com base no valor investido.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   float amg1, amg2, amg3, vlrarrecadado;
   printf("\nValor aposta amigo 1: ");
   scanf("%f", &amg1);
   printf("\nValor aposta amigo 2: ");
   scanf("%f", &amg2);
   printf("\nValor aposta amigo 3: ");
   scanf("%f", &amg3);
   vlrarrecadado = amg1 + amg2 + amg3;
   printf("\nValor arrecadado para aposta: %.2f" , vlrarrecadado);
   float premio = 980.000;
   printf("\nO valor do premio eh: %.3f" , premio);
   float pct1, pct2, pct3;
   pct1 = (amg1 * 100)/vlrarrecadado;
   pct2 = (amg2 * 100)/vlrarrecadado;
   pct3 = (amg3 * 100)/vlrarrecadado;
   printf("\nAmigo 1 apostou: %.2f porcento do total arrecadado.", pct1);
   printf("\nAmigo 2 apostou: %.2f porcento do total arrecadado.", pct2);
   printf("\nAmigo 3 apostou: %.2f porcento do total arrecadado.", pct3);
   printf("\nAmigo 1 recebera: R$%.2f.", premio * pct1/100);
   printf("\nAmigo 2 recebera: R$%.2f.", premio * pct2/100);
   printf("\nAmigo 3 recebera: R$%.2f.", premio * pct3/100);
   return 0;
}


//53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como
o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   float largura, comprimento, preco, total;
   printf("\nQual a largura do terreno: ");
   scanf("%f", &largura);
   printf("\nQual o comprimento do terreno: ");
   scanf("%f", &comprimento);
    printf("\nQual o preco do terreno: R$");
    scanf("%f", &preco);
    total = (comprimento * largura * preco);
    printf("\nVoce gastara para cercar o terreno: R$%.2f", total);
    return 0;
}

