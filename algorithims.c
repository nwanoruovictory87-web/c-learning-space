#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

 int findValueAtIndex(long int superLongDataLength, long int find);


int main(){
    //binary search
    //int length = 
    long int superLongDataLength= 899889758944;
    printf("before \n");
    //printf("size of count %p", (i));
    //int find =7589464;
   long int find = 7989487942;
    
    int result= findValueAtIndex(superLongDataLength, find);
    //
    printf("search reasult - %d \n", result);
    return 0;
}

 int findValueAtIndex(long int superLongDataLength, long int find){
      long int forward= 0;
      long int backward=0; 
      const long int maxItiration= 1000;
      //printf("max value %ld \n", maxItiration);
      bool isValueFound= false;
      while (((forward  + backward) < superLongDataLength) && !isValueFound){
      int countFoward=0;
    //
    for(long int i =forward; i< (forward + maxItiration); i++){
       //printf("forwards %ld \n", i);  
       if((i + 1) >= (superLongDataLength - backward)) break;
      if(i == find){
            printf("found value at %ld index value is %ld moving fowards  moved %ld fowards  & %ld backwards\n", i, find, forward, backward);
            isValueFound = true;
            return i;
          }
        countFoward +=1;
    }
   forward += countFoward;
    //
    int countBackword=0;
    long int bacwardScaned= superLongDataLength - backward;
    for(long int i =bacwardScaned; i > (bacwardScaned - maxItiration);  i--){
        //printf("backwords %ld \n", i);
        if((i + 1) <= forward) break;
        if(i == find){
            printf("found value at %ld index value is %ld moving backwards moved %ld fowards  & %ld backwards\n", i, find, forward, backward);
          isValueFound = true;
            return i;
          }
        countBackword +=1;
    }
   backward += countBackword;
   //printf("forwards %ld - middle %ld - backwards %ld \n", forward, middle, backward);
    }
    printf("total value %ld\n", (forward + backward ));
    if((forward  + backward ) == superLongDataLength){
      printf("No data found\n");
      return -1;
    }
    }