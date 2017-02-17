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
  * The register r3.
  
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
     
