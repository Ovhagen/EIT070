
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
   *  00001A91 (88+3)
   
9. At which address is the least significant byte of the variable “b” stored?
   *   00001A88

10. Which format is used (big vs. little endian)?
   *  Little endian, since FFFFFFF7.
   
##Assignment 3
1. At which memory address is the variable “b” stored?
   *  00001A88

2. Modify the contents of the memory address next to the affected memory address by typing a non-zero value at that address. Does this have any impact on the variable “b”? 
   *  Yes, it changes the value since the unsigned int takes 4 bytes.

3. What is the value of the variable “b”?
   *  2^32 - 1

4. What happens with the memory?
   *  All bits are set to ones.

5. How many bytes are needed to store a variable of type unsigned int?
   *  4 bytes

6. What is the value of the variable “b”?
   *  2^32 - 1

7. What is the difference when the keyword “unsigned” is used?
   *  We don't represent negative bits and all the 32 bits is used to represent a positive number.

##Assignment 4

1. What is the value of the variable “b”?
   *  6800 (decimal)

2. What does this value represent?
   *  Starting value. (The value of the adress)

3. Where in the memory, are the elements of the array stored?
   *  00001A-90, -94, -98

4. What is the address of the element b[3]
   *  00001A93
   

5. What is the size of each element of the array?
   *  8 Bits
   
##Assignment 5
1. What is the value of the variable “b”?
   *  6800 (decimal)

2. What does this value represent?
   *  Starting value. (The value of the adress)

3. Where in the memory, are the elements of the array stored?
   *  00001A90 to 00001AB4 (40 bytes)

4. What is the address of the element b[3]?
   *  00001A9C

5. What is the size of each element of the array?
   *  4 bytes. (32 bits)

##Assignment 6
1. What is the value of the variable “b”?
   *  0

2. What is the value of the variable “address”?
   *  0x000000 (0) and when initialized address of b (1A 78)

3. What is stored in the memory at that memory address?
   *  The memory address of the variable b.

4. What is the value of the variable “b”?
   *  The value is 5. Done by pointer value change.

5. What is the memory address of the variable “address”?
   *  00001A7C
   
##Assignment 7
1. Explain what this code does.
   *  First we initiate the value of B to 0xFFFFFFF. Then we initialize the value of the address as b:S address + 3 (ask about this). Finally we change the value at the memory address at which "address" points to which sets the value of b to 0XFFFFFFFF which gives the decimal value of -1.
   
##Assignment 8
1. At which memory address is the variable “counter” stored?
   *  00001ABC (4 bytes)
   
2. At which memory address is the variable “state” stored?
   *  00001AB8 (4 bytes)

3. Does the variable “state”, at every point in time, have the same value as the data register of the switches? Explain the reasoning behind your answer. 
   *  No. When we flipped a switch the SWITCHES_DATA in the data register updates instantly while the state variable changes only when we enter the loop.
   
   
##Assignment 9
1. Study the code below. Do you expect any difference?
   *  We expect it to run as the previous code.

2. What do you observe on the board?
   *  All the LED:s truned on.

3. Open the “Expression” view in the debug environment, and check the contents of the expression “*LED_DATA”. How is the expression evaluated?
   *  The value is 0 and LED_DATA is of type Write-only which we can't read the data of LED_DATA.

4. What happens when the program reads a write-only memory location?
   *  We try to fetch the value of LED_DATA and reduce it by 1. Since we can't fetch the value of LED_DATA the value is set to -1 and all the bits are set to ones. When this happens all the LED:s are turned on.
   
##Assignment 10
1. Do you observe any changes?
   *  No.

2. What happens when the program writes to a read-only memory location?
   *  Nothing happens. It does not work.
   
##Assignment 11



