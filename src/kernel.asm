;;the start of the kernel
;; main is kernel.c
;; taken from https://github.com/chipsetx/Simple-Kernel-in-C-and-Assembly/blob/master/kernel.asm
	
bits 32; 32 bit mode

section .text
	; multiboot spec
	align 4
	dd 0x1BADB002 ; magic
	dd 0x00 ; flags
	dd - (0x1BADB002 + 0x00) ; checksum - m+f+c should be zero

global start
extern kmain ; kmain is defined in kernel.c

start:
	cli ; stop interrupts
	call kmain ; call kernel
	hlt ; halt the cpu
