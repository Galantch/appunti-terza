name "addizione"

data segment
    
ends
 
 
stack segment 
    dw   128  dup(0)      
ends
    

code segment  
    
start:
    ;operazioni su registri generali
    mov ax, 5    ;INDIRIZZAMENTO IMMEDIATO
    mov bx, 3    ; INDIRIZZAMENTO IMMEDIATO
    add ax, bx    ;INDIRIZZAMENTO DIRETTO DA REGISTRO A REGISTRO
    
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    


ends

end start ; set entry point and stop the assembler.
