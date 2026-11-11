name "addizione"

data segment
    
ends
 
 
stack segment 
    dw   128  dup(0)      
ends
    

code segment  
    
start:
    ;operazioni su registri generali
    
    mov ax, 10   ; 00 10
    inc ax       ; 00 11
    inc ax       ; 00 12
    inc ax       ; 00 13
    dec ax       ; 00 12
    mov bx, ax   ; 00 12
    sub bx, 2    ; 00 10
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    


ends

end start ; set entry point and stop the assembler.
