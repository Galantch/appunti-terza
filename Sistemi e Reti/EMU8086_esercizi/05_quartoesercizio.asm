name "addizione"

data segment
    
ends
 
 
stack segment 
    dw   128  dup(0)      
ends
    

code segment  
    
start:
    ;operazioni su registri generali
    
    mov ax, 12  ; AX 00 12
    mov bx, 5   ; BX 00 05
    add bx, ax  ; BX 00 17
    mov cx, ax  ; CX 00 12
    sub cx, 3   ; CX 00 09
    inc bx      ; BX 00 18
    inc bx      ; BX 00 19
    add bx, ax  ; BX 00 31 
    
    ; valori finali -> AX 12 BX 31 CX 9
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    


ends

end start ; set entry point and stop the assembler.
