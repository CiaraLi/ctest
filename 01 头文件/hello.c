#include <stdio.h> 

int max(int a,int b)
{
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int n=max(3,4);
    printf("the max is %d\n",n);
    return 0;
}

 
