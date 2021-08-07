## MKD_euklidis_algorithm

This simple code in C++ illustrates the method that mathematician Euclid use to find greatest common divisor(GCD) of two integers numbers.

Mathematic definition:
if a==b     return a 
//recursive call until they match 
if a<b      MKD(a, b-a)   
else        MKD(b-a, b)

Here I have a list of pairs instead of only 2 integers. 
