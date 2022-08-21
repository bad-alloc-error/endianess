#include<stdio.h>

int main(int argv, char **argc){

    unsigned short int value = 1;

    char bit = *((char *)&value);
    
    if(bit == 0){
        printf("Big endian\n");
    }

    if(bit == 1){
        printf("Little endian\n");
    }

    return 0;
}