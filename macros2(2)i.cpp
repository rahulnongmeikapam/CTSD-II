#include<stdio.h>
#define BUG
int main(){
    #ifdef DEBUG
    printf("DEBUGGING mode is enabled.\n");
    #else
    printf("DEBUGGING mode is disabled.\n");
    #endif
    return 0;
}

