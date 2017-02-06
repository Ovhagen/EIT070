
What does the code do?

The code lowers the char value until it has reached its minimum value.

What is the expected value of the variable "b"?

The expected value is b = 127.



##Setup

1. What is the value of the variable “b”?

    * b = 127

2. What is the binary representation of “b”?

   * 0b1111111

3. Are there any changes in the memory?
   * Yes

4. Which memory address is affected?
   * 00001A98

5. Compare the contents of the variable “b” with the contents of the affected memory address. What is the conclusion?
   * They are connected.

6. What is stored at that memory address?
   * b:s value is stored in in that memory slot.

7. Modify the contents of the memory address next to the affected memoryaddress by typing a non-zero value at that address. Does this have any impact on the variable “b”?
   * No it does not.

8. How many bits are required to store a variable of type char?
   * 8 bitar. One byte.

9. Why is the value of the variable “b” larger than 10?
   * Because we can only represent -127 then we start running running down from the maximum value 127.
   
   
##Assignment 1
1. At which memory address is the variable “b” stored?
   * 00001A88 
   
2. What is the value of the variable “b”?
   *  b = 255
   
3. Why is the value different compared to the previous case?
   *  This time we used a unsigned char which only can represent values in the range 0-255. We will reach 0 then switch to the max value of 255 where the condition will not be fulfilled.
   
4. How many bits are required to store a variable of type unsigned char?
   *  8 bits. One byte.
   
##Assignment 2
1. At which memory address is the variable “b” stored?
   * 00001A88
   
2. Modify the contents of the memory address next to the affected memory address by typing a non-zero value at that address. Does this have any impact on the variable “b”?
   *  Yes it will, since the variable b is represented with 4 bytes, its value will be changed.

3. What happens in the memory?
   * All the bits are set to ones since we have a signed int.
   
4. How many bytes are needed to store a variable of type int?
   *  4 bytes

5. What is the value of the variable “b”?
   *  2^31 - 1

6. What is the binary representation of “b”?
   * 0b1111111111111111111111111111111

7. What is the hexadecimal representation of “b”?
   *  7FFFFFFF

8. At which address is the most significant byte of the variable “b” stored?
   *  00001a88  3
   
9. At which address is the least significant byte of the variable “b” stored?
   *   00001a88  0

10. Which format is used (big vs. little endian)?
   *  Little endian, since FFFFFFF7.
   
##Assignment 3
1. At which memory address is the variable “b” stored?
   *  

2. Modify the contents of the memory address next to the affected memory address by typing a non-zero value at that address. Does this have any impact on the variable “b”? 
   *  

3. What is the value of the variable “b”?
   *  

4. What happens with the memory?
   *  

5. How many bytes are needed to store a variable of type unsigned int?
   *  

6. What is the value of the variable “b”?
   *  

7. What is the difference when the keyword “unsigned” is used?
   *  
