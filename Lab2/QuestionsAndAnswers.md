##Asignment 1

1.  Explain what this code does.by
  * The code points the pointer for LED 1 to a memory adress 
  where the value is set to 1 and then interated through to light the different segments of the digit.
  
  0-6 segments are lighten individually
  Bit 7: The dot is lightened.
  
  0 = Top
  1 =  Top Right
  2 = Bottom Right
  3 = Bottom
  4 = Bottom Left
  5 = Top Left
  6 = Middle
  7 = Dot

##Asignment 2

const unsigned int display_codes[]= {0b0111111, // “index 0”
0b0000110, // “index 1”
0b1011011, // “index 2”
0b1001111, // “index 3”
0b1100110, // “index 4”
0b1101101, // “index 5”
0b1111101, // “index 6”
0b0000111, // “index 7”
0b1111111, // “index 8”
0b1101111}; // “index 9”
  
##Asignment 3
  
1. Explain what this code does.
  * If the command is valid, hence a digit 0-7 and a number 0-9. The memory adress to the corresponding segment display and sets the value
  light that certain digit.
  
  
##Asignment 4
1.  Study the codes of the two functions. Explain what each of the functions does.
  *  Number of Digits = How many integers is does the integer contain.
  * displayNumber = Displays the number by iterating through the least significant digit to the highest. The number is displayed.

2. What is going to be displayed on the displays if the function “displayNumber” is
invoked with an integer number that has at least 9 digits?
  * Nothing.
  
3. What happens when displaying a number that has less digits than a number
that has been previously displayed?
  * The higher digits are still present while the lower digits change to the lower number.
  

##Asignment 5
Done

##Asignment 9
UP 2
DOWN 16
RIGHT 8
LEFT 4
MIDDLE 1

##Asignment 11
1. Does the provided code work well in practice?
  * No. Not effective condition.
  
2. Why does the displayed value change much more rapidly than expected?
  * While a button is pressed the number is incremented with the speed of the processor.
  
3.  What happens when you press and hold the “down” button?
  *  We reduce the value displayed.
  
4.  What is the explanation for this phenomena?
  * 
  
5.  Would similar thing happen if you press and hold the “up” button?
  * 
  
6.  How can you solve the two problems above?
  * 
  
##Asignment 12
  
1.  Does the provided code work well in practice?
  * Okay, better than before. Still issues.
  
2.  What do you observer?
  * The counter now de-/increment only by one.
  
##Asignment 14
1.  What happens with the counter?
  *  Nothing
2.  What happens with the counter?
  * Nothing
3.  What happens with the counter?
  * Nothing
  
 

  
