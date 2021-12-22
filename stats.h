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

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
int print_array(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO PRINT THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <size> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <NULL>
 */

int sort_array(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO SORTING THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <length> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <NULL>
 */

int find_median(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO FINDING THE MEDIAN IN THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <length> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <median>
 */
int find_mean(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO FIND THE MEAN IN THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <size> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <MEAN>
 */
int find_maximum(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO FIND THE MAXIMUM IN THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <size> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <MAXIMUM>
 */
int find_minimum(int length,unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO FIND THE MINIMUM IN THE ARRAY>
 *
 * <Add Extended Description Here>
 *
 * @param <size> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <MINIMUM>
 */
int print_statistics(int length, unsigned char *pointer);
/**
 * @brief <THIS FUNCTION IS TO FIND ALL INFORMATION  ABOUT THE ARRAY>
 *
 * <FINDING THE MAXIMUM,MINIMUM,MEAN,MEDIAN OF THE ARRAY>
 *
 * @param <size> <THE length OF THE ARRAY>
 * @param <pointer > <THE POINTER TO THE ARRAY THAT IS GOING TO BE PRINTED>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <NULL>
 */
#endif /* __STATS_H__ */
