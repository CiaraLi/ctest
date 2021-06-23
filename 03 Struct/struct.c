#include <stdio.h>
#include <string.h>

struct Student{
	 int age;
	 char name[50];
}  ;

int main(){
    struct Student stu1;
    stu1.age=15;
    strcpy(stu1.name,"张三");
    printf("the %s age is %d\n",stu1.name,stu1.age);
    
	return 0;
}