#include <stdio.h>
#include <string.h>

struct user {
    char *name;
    int age;
    char *carear;
};

int main(){
    struct user Victory={.name="Victory", .age=22, .carear="software engineer"};
    printf("user name is %s \n", Victory.name);
    printf("code is running \n");
    printf("size of struct %zu \n", sizeof(Victory));
    printf("size of name in user %zu \n", strlen(Victory.name));
    int count=0;
   /*
    while (count < 9){
    count++;
        if(Victory.name[count] == '\0')
            printf("found space in name - %c \n", Victory.name[count]);
       printf("did'nt find space in name - %c \n", Victory.name[count]); 
       
    }
   */
    char *data= "some data";// i get both the poinet and refrance;
    printf("is data a ponter or actule value - %p \n", data);
    return 0;
}