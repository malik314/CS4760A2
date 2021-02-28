# CS4760A2
Assignment 2 - Operating Systems


### TASK
Write a program to compute the sum of n integers using a binary tree of processes. Assume that n is a power of 2.
If you have fewer than 2k numbers, fill in other numbers with 0 to make it a power of 2. You will achieve the task
as follows:
Partition the n integers into n/2 pairs. Use n/2 processes to add each pair of integers resulting into n/2 integers.
Repeat the method on the n/2 integers and continue until the final result is obtained. (This is a binary tree
algorithm.)

## INVOKE
master should take in several command line options as follows:  
./master -h  
./master [-h] [-s i] [-t time] datafile  
-h Describe how the project should be run and then, terminate       
-s x Indicate the number of children allowed to exist in the system at the same time. (Default 20)  
-t time The time in seconds after which the process will terminate, even if it has not finished. (Default 100)  
datafile Input file containing one integer on each line.  

