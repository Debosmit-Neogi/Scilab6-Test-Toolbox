This repository is a test tool box for Scilab mainly to run in Linux environment. The repository contains a folder named "test" that conatins following files:

1. main.c : It contains the main function that calls the transpose function to perform transpose of a matrix of n x m dimensions.
2. trans.c: It contains the stand alone function for finding out the transpose of a matrix of the above mentioned dimensions. since C language doesnot support 2D arrays, we have predefined the dimensions.
3. trans.h: It is the header file of trans.c , that is included in the main.c file.
4. main.sh: It is the shell script that contains all the steps to run the program in your linux environment. It has been made executable using the command: chmod +x <filename>

Operating System (OS) used:  Ubuntu
Version: 20.04.2

Note: All the steps mentioned are also tested on Kali OS. Verison: 2020.4

Build and Execute the program locally:

The main.sh is shell script file that contains steps to run the programs. 
Open the terminal in your linux environment (preferably Ubuntu) and type the following command:
   a. sudo bash main.sh
   b. Input the values of the array
   c. ./main.sh
