section .data
	msg db "Hello, Holberton", 0x0a ;Mensaje
	len equ $ - msg ;Tamaño del mensaje
section .text
	global main ;Necesitamos exportar 'main' a ld, para que lo reconozca
                                         ;como el punto de entrada del programa.
main:
;Escribimos el saludo a stdout.
	mov eax, 4 ;Número de la llamada al sistema (sys_write).
	mov ebx, 1 ;Primer argumento: file handle (stdout).
	mov ecx, msg ;Segundo argumento: puntero a la cadena a escribir.
	mov edx, len ;Tercer argumento: tamaño de la cadena.
	int 0x80     ;Llama al Kernel.
	mov eax, 1  ;Número de la llamada al sistema (sys_exit).
	xor ebx, ebx ;Argumento de la llamada: código de salida (0: ejecución exitosa).
	int 0x80 ;Llama al Kernel.
