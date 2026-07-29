#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    /*
    //first looking at c syntex it isent that far of from javascript 
    char name[] = "victory"; /* char a varible delcation keyword to store strings value
    char only stors a single carecter taking 1 byte in memory but to store a string with multiple bytes
    we use an array syntex after the varible name to tell the program this stores more then a single value since arrays store multible values but we can only store strings in it i wounder what would happen if i
    tried storing a hole number in a caracter delacration but char []array taks up much byte as the caracters grow am think if each byte in char is one if i have
    say five caracters thats 5 bites
    */
   /*
    int age= 22; // init a varable delaration key word use to store hole numbers int takes up 4 bytes in memory also init cant hold decimal values only hole so 45.23 is stored as 45 as it cant store decimal
    float rate= 12.5; // floart is used to store floating point numbers thats decimal numbers but floart is limited to how many remender values thats values after . we could store float stakes up 4 bytes in memory
    double doubleRate= 12.5998888893; // double just like float stores decimal values or floating point values but un like float it can store upto 15 values after the . decimal double takes up 8 bytes in memory as its float multibled by two  4 bytes * 2;
    bool isCSeeing= true; //that leavs us with boolen values boolen values bool a keyword used to tell the program its storing boolan values also to let the program know am are going to be using boolon values we inlude it in i think is like an import moduls like js moduls so we includes <stdbool.h> note boolon return true or false also 1 for true and 0 for false but we can litraly return 1 for true and 0 for false
    printf("first day of learning c \n");
    //time to write a program for all i have leant
    //also i like as we end each block of code with a semicoln it helps keep track of where our program ends
    char userName[]= "victory nwanoruo";
    char focus[]= "software & network engineering";
    int userAge= 22;
    char programmingLangues[]="javascript & c";
    bool isLimitReached= false;
    printf("user status: name %s \n", userName);
    printf("age : %d \n", userAge);
    printf("programing stack %s \n", programmingLangues);
    printf("carear focus: %s \n", focus);
    printf("is user reaching limit: %d \n", isLimitReached);
    //note to run a program in c we first compile it how awsome is that i fucking compile my code my self i and see the assembly code in a.out file does see gets more intresting
    //also we need to retun value in our funtion call 0 for code runs smothly 1 for errors
    //time to compile :)
    */

    char product[20];
    int qountity;
    char validation[5];
    int total=0;
    printf("hello welcome to shopping demo what would you like to order \n");
    fgets(product, 20, stdin);
    product[strlen(product) - 1] = '\0';
    printf("how many %-1s do you want to order: ", product);
    scanf("%d", &qountity);
    printf("is your older correct if its correct validate with \"yes\" if not validate with \"no\" your're getting %d \n", qountity);
    printf("%s\n", product);
    getchar();
    fgets(validation, sizeof(validation), stdin);
    validation[strlen(product) - 1]= '\0';
    total= qountity * 2;
        printf("great your total is %d thank you for shopping have a nice day\n", total);
    //printf("%s", validation[0]);
    //printf(validation);
    /*
    if(validation == "yes"){
        int total= qountity * 2;
        printf("great you total is %d thank you for shopping have a nice day\n", total);
    }else{
        printf("sorry we got your order wrong could you place it over again \n");
    };
    */
    return 0;
}