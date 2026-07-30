#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>

bool includes(char* pArray, char value);
bool includesMultiple(char* pArray, char* pArrayValue);

int  main(){
    //am going to be creating some javaScript built in methods
    //1 .inclueds which is a linear seacrh that goes through the list and cheack if a value exist it returns true if it does if not it return false
    //2 .push and .pop // .push which takes a value and append it to the end of an array and //.pop removes a single value from the end of an erray
    //3 

    //char name[]= "victory";
    //char find = 's';
    char name[]= "victory";
    char find[] = "victor";
    //char* pName = malloc(50);
    //printf("%ld \n", sizeof(name));
    //first am going to go with linear seach as .includes do then i check if i coud do binary search
    //int* pointer= &name;
    //printf("%p \n",  &name);
    //printf("those %c includes in %s : %s \n", find, name, (includes(name, find)) ? "true": "false");
    printf("those %s includes in %s : %s \n", find, name, (includesMultiple(name, find)) ? "true": "false");
    //includes(name, find);
    //printf("name: %c\n", name[0]);
    //printf("pointer %p\n", pName);
    //free(pName);
    return 1;
}

//1 .includes
bool includes(char* pArray, char value){
    int length= sizeof(pArray) / sizeof(pArray[0]);
    //
    //single search after full search fails
    for(char i=0; i < length; i++ ){ 
        if((pArray[i]) == value) return true;
        if(i + 1 == length) return false;
    }
    

   
}
//
bool includesMultiple(char* pArray, char* pArrayValue){
    int lenthOfParentArray= sizeof(pArray) /sizeof((pArray[0]));
    int lenthOfChildArray = sizeof(pArrayValue) / sizeof((pArrayValue[0]));
    //
    //printf("pointer refreances: %p - %p \n", pArray, pArrayValue);
    int validatedCarecters=0;
    for(int i=0; i<lenthOfParentArray; i++){
        if((pArray[i]) == (pArrayValue[i])){
                validatedCarecters +=1;
        };
    }
    printf("count %d length %d \n", validatedCarecters, lenthOfParentArray);
    if((validatedCarecters == lenthOfParentArray) && (validatedCarecters  == lenthOfChildArray)) return true;
    return false;
};