##Assignment 1

1. Study the code. What does the program do?
  * The program sets the switches to active and initiates with the leds unactive. Lisens for switches switched and lights the corresponding LED:s.
  
2.  What is the difference between the memory addresses of two consecutive machine instructions?
  * 4 Bytes
  
3. What is the size of each instruction?
  * 4 Bytes
  
4.  What does the instruction “addk r1, r19, r0” do?
  * Add and keep Carry. Adds r0 = 0 with r19 and stores in register r1 and keeps the carry flag.
  
5.  What do the values stored in the rpc register reference to?
  * It references to the instruction that is to be executed.
  
6.  Which instructions modify the rpc register?
  * Branch instructions modify the program counter.
  
7.  Which instruction modifies the register r15?
  * Branch and link immidiately changes the r15 register.
  
8.  What does that instruction do?
  * The instruction copies the adress where we execute a subrutine call. So when we have executed the instructions in the function we can start executing instructions where we called the function again.
  
9. What does the value stored in r15 reference to?
 * The address where the function call was made.
 
10. Which instructions are used to load values from memory? 
  *  LW and LWI instructions.
  
11. Which instructions are used to store values in memory?
   * SW and SWI.

12. Where is the variable “temp” stored?
  * The register r19 + 4. 2bd4
   
13. What is the address of the “temp” variable?
   * 0x00002bdc
   
14. The address of the “temp” variable is obtained by adding an immediate value to the value of register r1. What does the value in the register r1 reference to?
    * The stack pointer where variables are stored.
    
15. What is the size of the stack frame?
   * r1-r19 18*4 = 64 bytes.
   
16. What is stored in the stack frame?
    * Rturn address, Local variables, Saved registers, input arguments to callee functions.
    
17. Which instruction is used to return from a function call?
    * RTSD
     
18. How does the program know where to return?
     * The first register in the RTSD instruction.
      
19. Which register keeps the return address? 
     * r15
       
20. What happens with the stack pointer before the function returns?
     * Adds the value of r19 to r1 and then adds 12 immediate and keep carry for r1.
     
##Assignment 2
1. Which register stores the output of the function “readSwitches”?
 * r19

2. Which register does the function “readSwitches_writeLed” use to pass the argument to the function “writeLed”?
 * r5
 
 3. If a function calls another function, what is stored at the stack pointer, in the stack frame allocated for the caller function? Why?
  * The start of the other functions stack frame that is called upon. 
  
4. What is the size of the stack frame of the function “readSwitches_writeLed”? 
 * 12 bytes. (3 memory adresses)
 
 ##Assignment 3
 
| 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  |
|----|----|----|----|----|----|----|----|
| 36 | 36 | 36 | 36 | 36 | 36 | 40 | 44 |
| r5 | r5 | r5 | r5 | r5 | r5 | r5 | r5 |
|    |    |    |    |    |    |    | r3 |
 
##Assignment 4
1. At which memory address is the function “readSwitches_writeLed_Assembly” stored?
 * 000003a8
 
2. Are there any differences between the assembly program and the machine code?
 * 
3. How is the “nop” instruction translated?
 * or r0, r0, r0 which achieves nothing, NOP
 
4. If you compare this program, with the program from Assignment 1, which program is more efficient? Why?
 * 6 instructions (A) vs 11 instructions (C). Bad compilition.
 
##Assignment 5
1. How many input arguments are required for the subroutine number_of_ones?
 * 1
 
2. How many input arguments are required for the subroutine translateN?
 * 1
 
3. Does the subroutine number_of_ones provide any outputs?
 * N, the amount of ones in the binary representation of the input

4. Does the subroutine translateN provide any outputs?
 * Yes, a binary number with N consecutive 1s

5. Which of the subroutines require a stack frame?
 * function, the other two only use the addresses r2-r12
 
6. What is stored in the stack frame, and why?
  * r15 is stored in the stack frame, PC
 
7. How are arguments passed from a caller to a callee subroutine?
  * r5 passes the argument
  
8. Which register is used to return an output from a callee to a caller subroutine?
  * r3
  
9. The subroutines number_of_ones and translateN implement a loop. How are the loops implemented in these subroutines?
  * check if r5 is zero, if not continue and r5>>1 and jump back to label while:, if zero jump to label result:translateN will loop N times; if r5 = 0 jump to done: else continue and r5--; then jump back up to again:
 
10. The global symbols are translated into memory addresses. What are the memory addresses for the symbols: function, translateN, and number_of_ones?
   * The byte distance to the function number_of_ones (44 bytes)
 
11. The subroutine function invokes the subroutine number_of_ones by using the instruction brlid r15, number_of_ones. In the disassembled code, the symbol number_of_ones is replaced by an immediate value. What is the immediate value?
 * The byte distance to the function number_of_ones (44 bytes)
 
12. Is the immediate value the same as the address for the symbol number_of_ones?
 * No, relative jump from current address
 
13. The subroutine function invokes the subroutine translateN by using the instruction brlid r15, translateN. In the disassembled code, the symbol translateN is replaced by an immediate value. What is the immediate value?
 * 72 bytes
 
14. Is the immediate value the same as the address for the symbol translateN?
 * No, relative jump from current address
 
15. How does the processor obtain the address of the callee subroutine?
 * By adding the immediate value to the current address
 
16. The instruction brid again in the translateN subroutine is part of a loop and it is used to set the program counter to the memory address of the instruction that is labeled with the label “again:”. In the disassembled code, what is the memory address of the instruction labeled with “again:”?
 * 0x410
 
17. Observe the disassembled code. For the instruction brid again in the translateN subroutine, the label again is replaced with an immediate value. What is theimmediate value?
 * -16
 
18. Is it the same as the address of the instruction labeled with the label “again:”?
 * YES.
 
19. How does the processor compute the address of the instruction that should be executed after the brid instruction?
 * By adding the immediate value to the current address
 
20. The instruction beqid r5, result in the subroutine number_of_ones is part of a loop and it represents a conditional branch instruction. The symbol result is replaced by an immediate value. What is the immediate value?
 * 28
 
21. How does the processor compute the address of the instruction that should be executed after the beqid instruction?
 * By adding the immediate value to the current address
 
##Assignment 6
1. What is passed as an input to the subroutine number_of_ones?
 * number of rightmost 8 switches activated
 
2. Which registers are used to pass arguments to number_of_ones?
 * r5

3. What is passed as input to the subroutine first_position_of_one?
 * the value of the 8 leftmost binaries, shifted down 8 bits to the right
 
4. Which registers are used to pass arguments to first_position_of_one?
 * r5

5. What is passed as input to the subroutine display_value_at_index?
 * This subroutine takes two input arguments: (1) the digit that should be displayed and (2) the index of the seven-segment display where the digit should be displayed. 

6. Which registers are used to pass arguments to display_value_at_index?
 * r5, r6
 
7. Which subroutine accesses a variable that is declared in C?
 * reset_display
 
8. Which instruction is used to access the variable declared in C?
 * 00000518:  lwi r9, r7, 7992
 
9. How is the address obtained?
 * variable display_codes is used in the assembly code and translated to immediate value of memory address by assembler.
 
