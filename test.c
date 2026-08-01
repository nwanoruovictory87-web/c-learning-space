#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct user {
    char *name;
    int age;
    char *carear;
};

int main(){
    /*
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
     /*
    char *data= "some data";// i get both the poinet and refrance;
    printf("is data a ponter or actule value - %p \n", data);
    */
   FILE *p_File;
    p_File= fopen("someFile.txt", "w"); // fopen opens file with agument of file action which is read (r) write (w)
    int count =0;
    while(count < 5){
        fprintf(p_File, "Hey man hows it going \n");
        count ++;
    }
    fprintf(stdout, "succesfully wrote to file \n");
    fclose(p_File);
    p_File= fopen("someFile.txt", "r");
    char streamBuffer[1024];  // why we use char here is that we are reading a stream of string and a single char is 1 byte so why spicefed why need 1024 bytes
     while(fgets(streamBuffer, sizeof(streamBuffer), p_File) != NULL){ // fgets is a function that reads a file it takes 3 aguments 1 buffer varable 2 buffer size 3 file to read varable or address in this case aguments one is used to store the varable agument 2 is used to read date below the specified buffer size and agument 3 is the file to read; 
    fprintf(stdout, "buffer data - %s \n", streamBuffer);
    sleep(1);// this is a test to see if fgets is acturly reading par line;
    //and it is reading a single line now what makes a new line is anything after \n before \n is one line
     }
    fclose(p_File);
    return 0;
}