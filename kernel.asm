bits    32
section    .text
    align   4
    dd      0x1BADB002  ; magic
    dd      0x00        ; flags
    dd      - (0x1BADB002+0x00)

global start
extern kmain ; this function will start our kernel.c
start:
       cli          ; to clear the interrupts 
       call kmain   
       hlt 