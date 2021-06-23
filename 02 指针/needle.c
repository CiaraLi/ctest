#include <stdio.h>

void change(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(){
    int a=4;
    int b=7;
    change(&a,&b);
    printf("a=%d\r\nb=%i\r\n",a,b);
}