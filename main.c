#include <stdio.h>
#include <stdlib.h>



int main(){

   	//x is the bitset itself
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;

   	
   	for (i=0;i<200;i++) {
        x[i]=0;
   	}
   	y = 0;
    i = 0;

    while (1) { 
	    //this loop inserts the bits
            printf("Insert any number you want. Type -1 to end\n");
        scanf("%d",&y);
        if (y==-1) {
            break;
        }
        //y is the position in the biset, or absolute position
        //y%32 is what I call relative position. The position inside one of the sets
        x[y/32]=x[y/32]|(1<<(y%32));

    }
    //the following double loop prints the bits. 
    //it transforms (i,j) into 32*i+j
    for (i=0;i<200;i++) {
        for (j=0;j<32;j++) {
            if ((x[i]>>j)&1) {
                printf("%d\n",(i*32+j));
            }
        }
    }
	return 0;
}

   	

