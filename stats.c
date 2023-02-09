/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief function defintions of stats
 *
 * This is for coursera week 1
 *
 * @author Danny A
 * @date 01/25/2023
 *
 */



#include <stdio.h>
#include "stats.h"
#include <string.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char sorted[SIZE];


  /* Statistics and Printing Functions Go Here */
  void print_array(char arr[], int len){
    char i;
    for(i = 0; i < len; i++){
      printf("%d ", (unsigned char)arr[i]);
    }
    printf("\n");
    return;
  }

  void print_statistics(char arr[] ) {
  unsigned char min = find_minimum(sorted, SIZE);
  unsigned char max = find_maximum(sorted, SIZE);
  unsigned char mean = find_mean(sorted, SIZE);
  unsigned char med = find_median(sorted, SIZE);
  printf("ARRAY STATISTICS: min: %d, max: %d, mean: %d, median: %d \n", min, max, mean, med);
  return;
}

void sort_array(char arr[], int len){
  int i, j, tmp;
  //make a copy of the array and store it in sorted
  strcpy(sorted, arr);
  //bubble sort
  for(i = 0; i< len; i++){
    for(j = i; j< len; j++){
      if(sorted[i] < sorted[j]){
        tmp = sorted[i];
        sorted[i] = sorted[j];
        sorted[j] = tmp;
      }
    }
  }
}

  sort_array(test, SIZE);
  printf("SORTED ARRAY:\n");
  print_array(sorted, SIZE);
  print_statistics(test);

}


/* Add other Implementation File Code Here */

unsigned char find_maximum(char arr[], int len){
  return arr[0];
}

unsigned char find_minimum(char arr[], int len){
  return arr[len-1];
}

unsigned char find_mean(char arr[], int len){
  int i;
  int sum = 0;
  for(i = 0; i < len; i++){
    // increment sum, while casting as an unsigned char so it can work with ints
    sum = sum + (unsigned char)arr[i];
  }
  return sum / len;
}

unsigned char find_median(char arr[], int len){
  if(len/2){
    //no remainder, take numbers are len/2 and len/2+1 and get avg
    return (arr[len/2] + arr[(len/2)+1])/2;
  }
  else{
    //odd set, the median will be the middle index in a sorted array
    return arr[len/2];
  }
}
