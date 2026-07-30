#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>

bool includes(char* data, char value);

int  main(){
    //am going to be creating some javaScript built in methods
    //1 .inclueds which is a linear seacrh that goes through the list and cheack if a value exist it returns true if it does if not it return false
    //2 .push and .pop // .push which takes a value and append it to the end of an array and //.pop removes a single value from the end of an erray
    //3 

    char name[]= "victory";
    char find = 's';
    //char* pName = malloc(50);
    //printf("%ld \n", sizeof(name));
    //first am going to go with linear seach as .includes do then i check if i coud do binary search
    //int* pointer= &name;
    //printf("%p \n",  &name);
    printf("those %c includes in %s : %s \n", find, name, (includes(name, find)) ? "true": "false");
    //includes(name, find);
    //printf("name: %c\n", name[0]);
    //printf("pointer %p\n", pName);
    //free(pName);
    return 1;
}

//1 .includes
bool includes(char* data, char value){
    int length= sizeof(data) / sizeof(data[0]);
    //
    //single search after full search fails
    for(char i=0; i < length; i++ ){ 
        if((data[i]) == value) return true;
        if(i + 1 == length) return false;
    }
    

   
}