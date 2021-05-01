#include <stdio.h>  /*bibliotecas padrões em linguagem C*/
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>


int main(void) {
    


char* banco [3];  /* variáveis char para armazenar as respostas*/
banco[0]= "sim";
banco[1]= "nao";
banco[2]= "talvez";
char * pergunta;
int resposta; 
int i; 

printf("\n\nPergunte-me qualquer coisa, responderei com Sim, Não ou Talvez\n\n");
scanf("%s", pergunta);

srand(time(NULL)); /*função que só funciona com a biblioteca time.h*/
for (i = 0; i < 11; i++) {
resposta = rand() % 3;

printf("%s", banco[resposta]); /*comparamos o banco com as respostas para dar a resposta aleatória ao usuário*/

return (0);
}
}







