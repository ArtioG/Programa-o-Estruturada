//Nome: Eduardo Barbosa Pereira, Curso: Engenharia de Software, Professor: Lucas, Matricula: UC21106180
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
 int dia, ano, mes, bissexto, dias, diatual;
 dias = 31;
 

 printf("Digite o dia: ");
 scanf("%d", &dia);

 printf("Digite o mes: ");
 scanf("%d", &mes);
 
 printf("Digite o ano: ");
 scanf("%d", &ano);

 if (ano % 400 == 0)
 {
   bissexto = 1;
 }
 else if (ano % 4 == 0 && ano % 100 != 0)
 {
     bissexto = 1;
 }
 else
 {
    bissexto = 0;
 }
 if (mes < 1 || mes > 12)
 {
    printf("mes invalido, digite novamente");
    return (main);
 }
 switch (mes)
 {
 case 2:
    if(bissexto = 1)
    {
    dias --;
    }
    else
    {
        dia -= 2;
    }
 case 4: case 6: case 9: case 11:
 dias --; 
 }
 if (dia > dias)
 {
    printf("dia invalido, digite novamente");
    return (main);
 }
 if (dia == dias)
 {
    dia == 1;
 }
 else
 {
    dia = dia + 1;
 }
 printf("O dia seguinte sera %d", dia);
 
}

