#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int findValueAtIndex(long int superLongDataLength, long int find);
int main(){
    //binary search
    //int length = 
    long int superLongDataLength= 8998897589;
    printf("before \n");
    //printf("size of count %p", (i));
    //int find =7589464;
   long int find = 7989487942;
    for(long int i=0; i< superLongDataLength; i++){
      if(i == find){
        printf("linear search found data %ld \n", i);
        break;
      };
      if((i + 1) == superLongDataLength){
        printf("No data found on liner search\n");
      }
    }
    int result= findValueAtIndex(superLongDataLength, find);
    //
    printf("search reasult - %d \n", result);
    return 0;
}

 int findValueAtIndex(long int superLongDataLength, long int find){
      long int forward= 0;
      long int middle=0; 
      long incrementMiddle = superLongDataLength / 2;
      const long int maxItiration= 1000;
      printf("size of %ld \n", sizeof(superLongDataLength));
      //printf("max value %ld \n", maxItiration);
      bool isValueFound= false;
      while (((forward  + middle) < superLongDataLength) && !isValueFound){
      int countFoward=0;
    //
   long int forwardsLimit= (forward + maxItiration) > (superLongDataLength / 2) ? (superLongDataLength / 2) : (forward + maxItiration);
   //printf("fowards limit %ld \n", forwardsLimit);
    for(long int i =forward; i< forwardsLimit; i++){
      // printf("forwards %ld \n", i);  
      if(i == find){
            printf("found value at %ld index value is %ld moving fowards  moved %ld fowards \n", i, find, (forward + countFoward));
            isValueFound = true;
            return 0;
          }
        countFoward +=1;
        forward +=1;
    }
   //forward += countFoward;
    //
    int countMiddle=0;
    for(long int i =incrementMiddle; i < superLongDataLength;  i++){
        //printf("middle %ld \n", i);
        if(i == find){
            printf("found value at %ld index value is %ld moving from middle  moved %ld started at %ld \n", i, find, (incrementMiddle +  countMiddle), (superLongDataLength / 2));
          isValueFound = true;
          printf("index %ld \n", i);
            return i;
          }
        countMiddle +=1;
        middle+=1;
    }
   incrementMiddle += countMiddle;
   //middle += countMiddle;
   //printf("forwards %ld - middle %ld - backwards %ld \n", forward, middle, backward);
    }
    printf("total value %ld\n", (forward + middle ));
    if((forward  + middle ) == superLongDataLength){
      printf("No data found\n");
      return -1;
    }
    }