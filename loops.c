#include <stdio.h>

int main(){
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    };

    int n = 5;
    while(n>0){ // can use break and continue
        printf("%d\n",n);
        n--;
    };

    return 0;
}