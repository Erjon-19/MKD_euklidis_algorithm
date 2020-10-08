# simplicity-and-beauty-
MKD_euklidis_algorithm

The simple code illustrates the method that mathematician Euclid use to find greatest common divisor(GCD) of two integers numbers.

Mathematically defined:
if a==b     return a 
if a<b      MKD(a, b-a)   //recursive call until they match 
else        MKD(b-a, b)   // >>     >>

Here I have a list of pairs instead of only 2 integers. 
