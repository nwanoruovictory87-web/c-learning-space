#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

 int findValueAtIndex(int superLongDataLength, int find);

int main(){
    //binary search
    //int length = 
    long int superLongDataLength= 9889758944;
    printf("before \n");
    //printf("size of count %p", (i));
    //int find =7589464;
    int find =994879472;
    for( int i=0; i< superLongDataLength; i++){
      if(i == find){
        printf("linear search found data %d \n", i);
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

 int findValueAtIndex(int superLongDataLength, int find){
      int forward= 0;
      int backward=0;
      int movedMiddle=0;
      int middle = superLongDataLength / 2;  
      const int maxItiration= 1000;
      bool isValueFound= false;
      while (((forward + movedMiddle + backward) < superLongDataLength) && !isValueFound){
      int countFoward=0;
    //
    for(int i =forward; i< ((forward + maxItiration) > (superLongDataLength / 2)? (superLongDataLength / 2) : (forward + maxItiration)); i++){
       //printf("forwards %d \n", i);  
      if(i == find){
            printf("found value at %d index value is %d moving fowards  moved %d fowards & %d from middle & %d backwards\n", i, find, forward, (superLongDataLength / 2), backward);
            isValueFound = true;
            return i;
          }
        countFoward +=1;
    }
   forward += countFoward;
   int countMiddle=0;
   for(int i =middle; i< ((middle + maxItiration) > (superLongDataLength - backward) ? (superLongDataLength - backward) : (middle + maxItiration)); i++){
      // printf("middle %d \n", i);  
      if(i == find){
           printf("found value at %d index value is %d moving from middle  moved %d fowards & %d from middle & %d backwards\n", i, find, forward, (superLongDataLength / 2), backward);
            isValueFound = true;
            return i;
          }
        countMiddle +=1;
    }
    middle +=countMiddle;
    movedMiddle +=countMiddle;
    //
    int countBackword=0;
    int bacwardScaned= superLongDataLength - backward;
    for(int i =bacwardScaned; i > (bacwardScaned - maxItiration);  i--){
        //printf("backwords %d \n", i);
        if((i + 1) <= middle) break;
        if(i == find){
            printf("found value at %d index value is %d moving backwards moved %d fowards & %d from middle & %d backwards\n", i, find, forward, (superLongDataLength / 2), backward);
          isValueFound = true;
            return i;
          }
        countBackword +=1;
    }
   backward += countBackword;
   //printf("forwards %d - middle %d - backwards %d \n", forward, middle, backward);
    }
    printf("total value %d\n", (forward + movedMiddle + backward ));
    if((forward + movedMiddle  + backward ) == superLongDataLength){
      printf("No data found\n");
      return -1;
    }
    }