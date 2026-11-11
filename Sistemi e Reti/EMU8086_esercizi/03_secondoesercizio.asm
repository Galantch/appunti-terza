name "addizione"

data segment
    
ends
 
 
stack segment 
    dw   128  dup(0)      
ends
    

code segment  
    
start:
    ;operazioni su registri generali
    
    mov ax, 0  ;indirizzamento immediato - 
    mov al, 5
    mov ah, 2 
    mov al, 8
    mov ah, 1  ;01  08
                
    inc ax      ;01 09
    dec ax      ;01 08
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    


ends

end start ; set entry point and stop the assembler.
