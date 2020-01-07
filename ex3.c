#include<stdio.h>
#include<string.h>
#include <ctype.h>
#include<stdlib.h>

int isinteger(char *in)
{
    for(int i=0;in[i];++i) {
        if(!isdigit(in[i])) {
            return 0;
        }
    }

    return 1;
}

int main(int argc,char** argv)
{
    if(argc <= 1) {
        puts("The program needs at least one integer parameter to run !");
        return 1;
    }

    int min = 99999999;

    for(int i=1;i<argc;i++) {
        if(!isinteger(argv[i])) {
            puts("The parameter has be an integer format!");
            return ;
        }

       
    }

    
}
