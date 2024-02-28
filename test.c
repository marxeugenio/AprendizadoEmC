#include <stdio.h> /* Protótipo da função printf */
void imp_mens1(void); /* Protótipo da função imp_mesn1 */
void imp_mens2(int); /* Protótipo da função imp_mens2 */
void imp_mens3(int, float); /* Protótipo da função imp_mens3 */
void main (void) /* definição da função main */
{
 int I;
 float x = -2.4f;
 I = 12;
 imp_mens1( ); /*chamada da função imp_mesn1*/
 imp_mens2(I); /*chamada da função imp_mens2*/
 imp_mens3(I,x); /*chamada da função imp_mens3*/
}
void imp_mens1 (void) /*definição da função imp_mesn1*/
{
 printf(“ O valor da constante e %d \n”, 10); /*chamada printf*/
}
void imp_mens2 (int var) /*definição da função imp_mens2*/
{
 printf(“ O valor da var recebida c/ argumento e %d \n”, var); /*chamada printf*/
 printf(“ O valor da constante e %d \n”, 10); /*chamada printf*/
}
void imp_mens3 (int var1, float var2) /*definição da função imp_mens2*/
{
 printf(“ Os valores das var recebidas como arg sao %d e %2.2f\n”, var1,var2);
 printf(“ O valor da constante e %d \n”, 10); /*chamada printf*/
}
