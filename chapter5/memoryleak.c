#include <stdio.h>
#include <stdlib.h>


#define ONEKB 1024


void foo(void);


int main(int argc, char **argv){

    int *p = NULL;

    p = (int *)malloc(4 * sizeof(int));
    //some statements
    p = (int *)malloc(8 * sizeof(int));
    //some statements
    free(p);
    //the first memory will not be freed

    for(int i = 0; i < ONEKB; i ++){
        p = (int *)malloc( ONEKB * ONEKB * ONEKB);
    }
    printf("End\n");


    return 0;
}


void foo(void){

    int *p = (int *)malloc(sizeof(int));
    return ;
}//memory leak