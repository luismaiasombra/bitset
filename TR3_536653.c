#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){

   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;

   	//#########################
   	//z ser� a posi��o vetorial
   	//
   	for (i=0;i<200;i++) {
        x[i]=0;
   	}
   	y = 0;
    i = 0;

    while (1) { //loop de inser��o do bit
            printf("insira um numero qualquer. Insira -1 para finalizar");
        scanf("%d",&y);
        if (y==-1) {
            break;
        }
        x[y/32]=x[y/32]|(1<<(y%32));

    }
    for (i=0;i<200;i++) {
        for (j=0;j<32;j++) {
            if ((x[i]>>j)&1) {
                printf("%d\n",(i*32+j));
            }
        }
    }
	return 0;
}

   	//#########################

