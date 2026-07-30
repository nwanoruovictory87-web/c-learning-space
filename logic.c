#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
//am going to be creating some javaScript built in methods
    //1 .inclueds which is a linear seacrh that goes through the list and cheack if a value exist it returns true if it does if not it return false
    //2 .push and .pop // .push which takes a value and append it to the end of an array and //.pop removes a single value from the end of an erray
    //3 
//
//bool includes(char* pArray, char value);
//bool includesMultiple(char* pArray, char* pArrayValue);
//char pushSingle(char *pArray, char value);
//char pushMultiple(char *pArray, char* pValues);
int pop(char *pArray);
int  main(){
    char name[]= "victory";
    //char find = 's';
    //char name[]= "victory";
    //char find[] = "victor";
    //char name[]= "Victory";
    /*
    char* name= malloc(20);
    (name[0])= 'v';
    (name[1])= 'i';
    (name[2])= 'c';
    (name[3])= 't';
    (name[4])= 'o';
    (name[5])= 'r';
    (name[6])= 'y';
    */
   //scanf("%c", &name[0]);
   //printf("name value %s \n", name);
    //char value[] = " Nwanoruo";
    //char* pName = malloc(50);
    //printf("%ld \n", sizeof(name));
    //first am going to go with linear seach as .includes do then i check if i coud do binary search
    //int* pointer= &name;
    //printf("%p \n",  &name);
    //printf("those %c includes in %s : %s \n", find, name, (includes(name, find)) ? "true": "false");
    //printf("those %s includes in %s : %s \n", find, name, (includesMultiple(name, find)) ? "true": "false");
    //includes(name, find);
    //printf("name: %c\n", name[0]);
    //printf("pointer %p\n", pName);
    //free(pName);
    //pushSingle(name, value);
    //pushMultiple(name, value);
    pop(name);
    pop(name);
    //pop(name);
    //pop(name);
    printf("finished modified array %s \n",name);
    return 1;
}
/*//1 .includes
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
*/

/*// 2 .push 
char pushSingle(char *pArray, char value){
    int lenthOfArray= sizeof(pArray) / sizeof((pArray[0]));
    printf("original pointer %p \n", pArray);
    printf("original array %s \n",(pArray));
    for(int i=0; i< lenthOfArray; i++){
        (pArray[i]) = (pArray[i]);
        if((i + 1) == lenthOfArray){
            (pArray[i]) = value;
        }
    }
    printf("modified array %s \n",(pArray));
    printf("modified pointer %p \n", pArray);
}
//
char pushMultiple(char *pArray, char* pValues){
    int lenthOfParentArray= sizeof(pArray) / sizeof((pArray[0]));
    int lenthOfChildArray= sizeof(pValues) / sizeof((pValues[0]));
    for(int i=0; i< lenthOfParentArray; i++){
        (pArray[i]) = (pArray[i]);
        if((i + 1) == lenthOfParentArray){
            for(int j=0; j< lenthOfChildArray; j++){
                (pArray[(i + j)]) = (pValues[j]);
                
            }
        }
    }
}
*/
//
///3 pop
int pop(char *pArray){
    int lengthOfArray= sizeof(pArray) / sizeof((pArray[0]));
    printf("original pointer %p \n", pArray);
    printf("original array %s \n",(pArray));
    printf("calculated size %ld original size %d \n", ((sizeof(char) * lengthOfArray) - sizeof(char)), lengthOfArray);
    printf("size of char in bytes %ld size of array in bytes %ld \n", sizeof(char), sizeof(pArray));
    for(int i=0; i<lengthOfArray; i++){
        //printf("i :%d\n", i);
        if(i < lengthOfArray - 2){
            printf("keep %c\n", (pArray[i]));
           (pArray[i]) = (pArray[i]);
        }
    }; 
    printf("array size %ld \n", sizeof(pArray));
    printf("modified array %s \n",(pArray));
    printf("modified pointer %p \n", pArray);
}