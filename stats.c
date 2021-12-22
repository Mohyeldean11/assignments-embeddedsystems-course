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
 * @file <STATS.c> 
 * @brief <ASSIGNMENT 1 >
 *
 * <Add Extended Description Here>
 *
 * @author <MOHIEE ELDEAN EHAB>
 * @date <12/22/2022 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main()
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  unsigned char *ptr; //CREATING A POINTER 
  ptr=test;  //POINTING TO THE ARRAY 

 int median=0;
 int mean=0;
 int maximum=0;
 int minimum=0;

  /* Statistics and Printing Functions Go Here */
  
  print_array(SIZE,ptr); //PRINTING THE ARRAY
  printf("\n");

  median=find_median(SIZE,ptr); //assigning the median to a variable
  printf("the median is: %d \n",median); //printing the median of the array
  printf("\n");
  
  mean=find_mean(SIZE,ptr); //assigning the mean to a variable
  printf("the mean is: %d \n",mean); //printing the mean of the array
  printf("\n");

  maximum=find_maximum(SIZE,ptr); //assigning the maximum to a variable
  printf("the maximum is: %d \n",maximum); //printing the maximum of the array
  printf("\n");
  
  minimum=find_minimum(SIZE,ptr);
  printf("the minimum is: %d \n",minimum); //printing the maximum of the array
  printf("\n");
 
  sort_array(SIZE,ptr); //sorting the array ascendingly
  printf("\n");

  print_statistics(SIZE,ptr);
}

/* Add other Implementation File Code Here */

int print_array(int length,unsigned char *pointer)
{
  printf("the array : \n");
  for(int i = 0;i< length; i++ )
  {
    printf("%d",pointer[i]);
    printf("\t");
  }
  printf("\n");
}

int find_median(int length,unsigned char *pointer)
{
  int median=0;
  int first_mean=0;
  int second_mean=0;

  if ( length%2 == 0)
  {
  first_mean=pointer[(length/2)] ;
  second_mean=pointer[(length/2)+1] ;

  median=(first_mean+second_mean)/2 ;
  
  }
  else if (length%2 != 0)
  {
    median=pointer[length/2];
  }
  
  return median;
}

int find_mean(int length,unsigned char *pointer)
{
  int sum=0;
  int mean=0;
  for(int i=0 ; i < length ; i++){

    sum+=pointer[i];

  }
  mean = sum/length;
  return mean;
}

int find_maximum(int length,unsigned char *pointer)
{
  int maximum=pointer[0];

  for (int i = 0; i < length; i++)
  {
    if(maximum<pointer[i])
    {
      maximum=pointer[i];
    }
  }
  return maximum;
}

int find_minimum(int length,unsigned char *pointer)
{
  int minimum=pointer[0];

  for (int i = 0; i < length; i++)
  {
    if(minimum>pointer[i])
    {
      minimum=pointer[i];
    }
  }
  return minimum;
}

int sort_array(int length, unsigned char *pointer)
{

  int current=0;
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (pointer[i] > pointer[j])
      {
        current=pointer[i];
        pointer[i]=pointer[j];
        pointer[j]=current;
      }
    }
  }
  printf("the array after sorting\n");
  print_array(length,pointer);
  
}

int print_statistics(int length, unsigned char *pointer)
{
  int median=0;
  int mean=0;
  int maximum=0;
  int minimum=0;

  printf("ALL THE INFO FOR THE ARRAY: \n");
  printf("\n");
  
  median=find_median(length,pointer); //assigning the median to a variable
  printf("the median is: %d \n",median); //printing the median of the array
  printf("\n");
  
  mean=find_mean(length,pointer); //assigning the mean to a variable
  printf("the mean is: %d \n",mean); //printing the mean of the array
  printf("\n");

  maximum=find_maximum(length,pointer); //assigning the maximum to a variable
  printf("the maximum is: %d \n",maximum); //printing the maximum of the array
  printf("\n");
  
  minimum=find_minimum(length,pointer);
  printf("the minimum is: %d \n",minimum); //printing the maximum of the array
  printf("\n");

}