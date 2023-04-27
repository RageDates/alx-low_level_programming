section .data
    message db 'Hello, Holberton', 0
    format db '%s\n', 0

section .text
    global main
    extern printf

main:
    ; set up the stack frame
    push rbp
    mov rbp, rsp
    
    ; load the message and format strings into registers
    mov rdi, format
    mov rsi, message
    
    ; call printf to print the message
    mov eax, 0
    call printf
    
    ; clean up the stack and return
    mov rsp, rbp
    pop rbp
    ret

