section .data
    hello_message db "Hello, Holberton,",0
    format db "%s",0

section .text
    global main
    extern printf

main:
    push rdi
    push rsi

    lea rdi, [rel format]
    lea rsi, [rel hello_message]
    call printf

    pop rsi
    pop rdi

    ret
