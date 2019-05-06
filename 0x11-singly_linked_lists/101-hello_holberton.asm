	%ifidn __OUTPUT_FORMAT__,elf64
	section .note.GNU-stack noalloc noexec nowrite progbits
	%endif

	sys_exit    equ 60
	sys_write   equ 1

	default rel
	global main		

	section	.text
main:				
	mov	edx, len	
	mov	esi, msg	
	mov	edi, 1		
	mov	eax, sys_write	
	syscall			
	xor edi, edi
	mov	eax, sys_exit	
	syscall			

	section	.rodata
	msg	db	'Hello, Holberton',0xa 
	len	equ	$ - msg		       
