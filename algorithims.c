#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //binary search
    //int length = 
    long int superLongDataLength= 985649035;
    printf("before \n");
    //printf("size of count %p", (i));
    int find =7589464;
    //
    if(((superLongDataLength % 2) == 0)){
        printf("yes \n");
        int firstHalf = superLongDataLength /2;
        int secondHalf = superLongDataLength /2;
        printf("first half %d \n", firstHalf);
        printf("second half %d \n", secondHalf);
        //
        if((firstHalf % 2) == 0){
            int firstHalfOfFirstHalf= firstHalf /2;
            int secondHalfOfFirstHalf= (firstHalf / 2) + firstHalfOfFirstHalf;
            //
            printf("first half  of first half %d \n", firstHalfOfFirstHalf);
            printf("second Half of first half %d \n", secondHalfOfFirstHalf);
            //
            for(int i=0; i< firstHalfOfFirstHalf; i++){
                if(i == find){
                    printf("found value at firstHalfOfFirstHalf data %d value %d \n", i, find);
                    break;
                }
            };
            for(int i=firstHalfOfFirstHalf; i< secondHalfOfFirstHalf; i++){ 
                if(i == find){
                    printf("found value at secondHalfOfFirstHalf data %d value %d \n", i, find);
                    break;
                }
            }
        }else{
            for(int i=0; i< firstHalf; i++){
                if(i == find){
                    printf("found value at firstHalf data %d value %d \n", i, find);
                    break;
                }
            }
        };
        //
        if((secondHalf % 2) == 0){
            int firstHalfOfSecondHalf= (secondHalf /2) + firstHalf;
            int secondHalfOfSecondHalf= (secondHalf / 2) + firstHalfOfSecondHalf;
           printf("first half  of first half s %d \n", firstHalfOfSecondHalf);
            printf("second Half of first half s %d \n", secondHalfOfSecondHalf);
            //
            for(int i=firstHalf; i< firstHalfOfSecondHalf; i++){
                if(i == find){
                    printf("found value at firstHalfOfSecondHalf s data %d value %d \n", i, find);
                    break;
                }
            };
            for(int i=firstHalfOfSecondHalf; i< secondHalfOfSecondHalf; i++){
                if(i == find){
                    printf("found value at secondHalfOfSecondHalf s data %d value %d \n", i, find);
                    break;
                }
            }
        }else{
            for(int i=secondHalf; i< superLongDataLength; i++){
                if(i == find){
                    printf("found value at secondHalf data %d value %d \n", i, find);
                    break;
                }
            }
        };
    }else {
        int firstHalf = superLongDataLength /2;
        int secondHalf = superLongDataLength - firstHalf;
        printf("first half 2 %d \n", firstHalf);
        printf("second half 2 %d \n", secondHalf);
        //
        if((firstHalf % 2) == 0){
            int firstHalfOfFirstHalf= firstHalf /2;
            int secondHalfOfFirstHalf= firstHalf / 2;
            //
            printf("first half  of first half %d \n", firstHalfOfFirstHalf);
            printf("second Half of first half %d \n", secondHalfOfFirstHalf);
            //
            for(int i=0; i< firstHalfOfFirstHalf; i++){
                if(i == find){
                    printf("found value at firstHalfOfFirstHalf data %d value %d \n", i, find);
                    break;
                }
            };
            for(int i=secondHalfOfFirstHalf; i< firstHalf; i++){ 
                if(i == find){
                    printf("found value at secondHalfOfFirstHalf data %d value %d \n", i, find);
                    break;
                }
            }
        }else{
            for(int i=0; i< firstHalf; i++){
                if(i == find){
                    printf("found value at firstHalf data %d value %d \n", i, find);
                    break;
                }
            }
        };
        //
        if((secondHalf % 2) == 0){
            int firstHalfOfSecondHalf= secondHalf /2;
            int secondHalfOfSecondHalf= secondHalf / 2;
            //
            for(int i=0; i< firstHalfOfSecondHalf; i++){
                if(i == find){
                    printf("found value at firstHalfSecondHalf data %d value %d \n", i, find);
                    break;
                }
            };
            for(int i=secondHalfOfSecondHalf; i< secondHalf; i++){
                if(i == find){
                    printf("found value at secondHalfOfSecondHalf data %d value %d \n", i, find);
                    break;
                }
            }
        }else{
            for(int i=secondHalf; i< superLongDataLength; i++){
                if(i == find){
                    printf("found value at secondHalf data %d value %d \n", i, find);
                    break;
                }
            }
        };
    }
    for( int i; i< superLongDataLength; i++){
      if(i == 1000000){
        printf("one million \n");
      }else if(i == 10000000){
        printf("10 million \n");
      } else if(i == 100000000){
        printf("100 million \n");
      } 
    }
    
    printf("after  \n");
    printf("split %ld \n", (superLongDataLength  / 2));
    return 0;
}