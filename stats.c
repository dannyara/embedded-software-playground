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

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  void print_statistics(char[] arr, char len){

  }
  void print_array(char[] arr, char len){
    char i;
    for(i = 0; i < len; i++){
      printf("%d", arr[i])
    }
    // printf("\n")
    return;
  }

}

void print_statistics(char[] arr) {
  unsigned char min = 0;
  unsigned char max = 255;
  unsigned char mean = 0;
  unsigned char med = 0;
  printf("min: %d, max: %d, mean: %d, median: %d", min, max, mean, med);
  return;
}

/* Add other Implementation File Code Here */

