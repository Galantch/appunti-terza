; multi-segment executable file template.

data segment
    ; area di memoria RAM destinanta a contenere variabili
    pkey db "press any key...$"
ends
 
 
 
stack segment 
    ;riservo della memoria per la gestione dello stack  (pila)
    dw   128  dup(0)
    ;riversa 256 byte di memoria per lo stack 
    ;(128 parole inizializzate a zero) 
    ; dw = define word, specifica che stai allocando della parole 
    ; da 16 bit (2 byte ciascuna)
    ; 128 dup(0) significa RIPETI il valore 0 per 128 volte
    ;moltiplicando 128 parole per 2 byte = 256 byte di spazio
    ; totale par la pila (stack)
    
ends
    
    
    
    
code segment 
    ;sezione di memoria RAM (segmento) che contiene
    ; le istruzioni eseguibili
    
start: ;label: indirizzo simbolico che assemblatore e linker
; trasformato le informazioni in codice macchina

;Dato che la CPU non sa dove si trova il blocco di memoria data segment
;le stiamo passando il suo indirizzo di partenza
    
    
    mov ax, data ;copia l'indirizzo di base del segmento data in AX
    mov ds, ax   ;copia quell'indirizzo (che avevamo messo in AX)
                 ;dentro il registro segmento DS: e' il registro della
                 ;CPU che permette di individuare il segmento
    mov es, ax

    ; add your code here
            
    lea dx, pkey  ;load effective address - carica indirizzo effettivo  
                   ;prendi l'indirizzo di memoria in cui si trova
                   ;la variabile pkey e caricala dentro il registro DX
    
    
    mov ah, 9
    int 21h        ; SCRIVI A VIDEO
    
    
    
    ; wait for any key....    
    mov ah, 1       ;"STO ASPETTANDO CHE PREMI UN TASTO"
    int 21h
    
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    


ends

end start ; set entry point and stop the assembler.
