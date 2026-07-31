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
    long int find =758946486;
    //long int find = 87942;
    for(long int i=0; i< superLongDataLength; i++){
      if(i == find){
        printf("linear search found data %ld \n", i);
        break;
      };
      if((i + 1) == superLongDataLength){
        printf("No data found on liner search\n");
      }
    };
    int result= findValueAtIndex(superLongDataLength, find);
    //
    printf("search reasult - %d \n", result);
    return 0;
}

int findValueAtIndex(long int superLongDataLength, long int find){
  long int halfOfList= superLongDataLength /2;
  long int supHalfList= halfOfList / 2;
  //
  printf("half %ld subHalf %ld  \n", halfOfList, supHalfList);
  //
  long int first=0;
  long int middle =0;
  long int last=0;
  const long int maxItarationForEachCycle= 100;
  bool isDataFound=false;
  //
  while (((first + middle + last) < superLongDataLength) && !isDataFound)
  {
    long int fLimit= (((first + maxItarationForEachCycle) > ( halfOfList / 2) ) ? ( halfOfList / 2) : (first + maxItarationForEachCycle));
  for(long int i=first; i< fLimit; i++){
    if(i == find){
      printf("found data at index %ld in %s \n", i, (supHalfList == 0) ? "First loop" : "Second loop");
      printf("scaned first %ld second %ld last %ld ",  first, middle, last);
      isDataFound = true;
      return i;
    }
    first ++;
  }
 //
 long int sLimit= (((supHalfList + maxItarationForEachCycle) > halfOfList ) ? halfOfList : (supHalfList + maxItarationForEachCycle));
  for(long int i=supHalfList; i< sLimit; i++){
    if(i == find){
      printf("found data at index %ld in %s \n", i, (supHalfList == 0) ? "First loop" : "Second loop");
      printf("scaned first %ld second %ld last %ld ",  first, middle, last);
      isDataFound = true;
      return i;
    };
    supHalfList ++;
    middle ++;
  }
  //
  long int e= (superLongDataLength - 1) -last;
  long int eLimit = (((e - maxItarationForEachCycle ) < halfOfList ) ? halfOfList : (e - maxItarationForEachCycle )) - 1;
  for(long int i=e; i >eLimit; i--){
    if(i == find){
      printf("found data at index %ld in Last loop\n", i);
      printf("scaned first %ld second %ld last %ld ",  first, middle, last);
      isDataFound = true;
      return i;
    };
    last ++;
  }
  }
  printf("No data macthed  scanded %ld records\n", (first + middle + last));
  return -1;
}