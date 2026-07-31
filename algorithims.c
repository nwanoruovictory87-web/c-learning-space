#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

 int findValueAtIndex(int superLongDataLength, int find);

int main(){
    //binary search
    //int length = 
    long int superLongDataLength= 987589464;
    printf("before \n");
    //printf("size of count %p", (i));
    //int find =7589464;
    int find =798589464;
    __DATE__;
    int result= findValueAtIndex(superLongDataLength, find);
    //
    __DATE__;
    printf("search reasult - %d \n", result);
    for( int i=0; i< superLongDataLength; i++){
      if(i == find){
        printf("linear search found data %d \n", i);
      }
    }
    return 0;
}

 int findValueAtIndex(int superLongDataLength, int find){
      int forward= 0;
      int backward=0;
      const int maxItiration= 1000;
      bool isValueFound= false;
      while (((forward + backward + 1) != superLongDataLength) && !isValueFound){
      int countFoward=0;
    //
    for(int i =forward; i< ((forward + maxItiration) > superLongDataLength ? superLongDataLength : (forward + maxItiration)); i++){
       //printf("forwards %d \n", i);  
      if(i == find){
            printf("found value at %d index value is %d moving forwards moved %d forwards & %d backwords \n", i, find, forward, backward);
            isValueFound = true;
            return i;
          }
        countFoward +=1;
    }
    forward += countFoward;
    //
    int countBackword=0;
    int bacwardScaned= superLongDataLength - backward;
    for(int i =bacwardScaned; i> ((bacwardScaned - maxItiration) < forward ? forward : (bacwardScaned - maxItiration)); i--){
        //printf("backwords %d \n", i);
        if(i == find){
            printf("found value at %d index value is %d moving backwords  moved %d backwords & %d forwards\n", i, find, backward, forward);
          isValueFound = true;
            return i;
          }
        countBackword +=1;
    }
    backward += countBackword;
    }
    }