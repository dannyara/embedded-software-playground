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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* main entry point for stats.c file*/ 

void main();


/**
 * @brief function that prints statistics from an array:
 *  min, max, mean, and median
 *
 * void function takes in an array of unsigned integers, prints the statistics, and then returns 
 *
 * @param arr => the int array to run statistics on
 *
 * @return void
 */
void print_statistics(char arr[]);

/**
 * @brief prints array
 * 
 * void function that takes in unisgned char integers and length and prints out the array to the screen
 * 
 * @param  arr: array to print, len: length of input arrray
 * @return void
 * 
*/
void print_array(char arr[], int len);


/**
 * @brief finds median of array
 * 
 * Function that takes in an array and length and finds the median 
 * @param  arr: 8bit array to print, len: length of input arrray
 * @return median 8 bit word
 * 
*/
int find_median(char arr[], int len);

/**
 * @brief finds mean of array
 * 
 * Function that takes in an array and length and finds the mean 
 * @param  arr: 8 bit array to calculate mean, len: length of input arrray
 * @return mean 8 bit word
 * 
*/
int find_mean(char arr[], int len);

/**
 * @brief finds max value of array
 * 
 * Function that takes in an array and length and finds the maximum value 
 * @param  arr: 8 bit array , len: length of input arrray
 * @return max 8 bit int
 * 
*/
int find_maximum(char arr[], int len);

/**
 * @brief finds min value of array
 * 
 * Function that takes in an array and length and finds the minimum value 
 * @param  arr: 8 bit array , len: length of input arrray
 * @return max 8 bit int
 * 
*/
int find_minimum(char arr[], int len);

/**
 * @brief sorts array fromlargest to smallest
 * 
 * Function that takes in an array and length and sorts it, returning the sorted array
 * @param  arr: 8 bit array , len: length of input arrray
 * @return 8bit array of sorted chars
 * 
*/
char sort_array(char arr[], int len);



#endif /* __STATS_H__ */
