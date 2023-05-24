# C DYNAMIC/SHARED LIBRARY

## Synopsis
This repository illustrates how to create a dynamic library in Linux. To read how to do so, read my blog here   

## Description of important files:
0. create_dynamic_lib.sh - shell script to create dynamic library named liball.so
1. libdynamic.so - created this dynamic library containing some functions as liball.so
2. functions_folder - all .c files hold functions; all .o files were used to create dynamic library
3. main.h - included function prototypes of functions in library
4. len - executable program to run 0-main.c
5. 100-operations.so - created this C dynamic library to be imported into python program 100-tests.py

