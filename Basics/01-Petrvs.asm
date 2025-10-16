org 100h

start:

    mov dx, offset msg
    mov ah, 09h
    int 21h
    
    mov ax, 4C00h
    int 21h
msg db 'Petrvs Henricvs',13,10,'$'
end start