#include <stdio.h>

int myfun(a,b,c,d){
    printf( "%i",a+b);
}

int main(){

int nums[4]={1,2,3,4};

myfun(*nums);
return 0;
}
