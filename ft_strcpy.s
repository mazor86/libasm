				global		_ft_strcpy

				section		.text
_ft_strcpy:
				xor		rcx, rcx			; i = 0;
.loop:			mov		al, [rsi + rcx]		; 
				mov		[rdi + rcx], al		; dst[i] = src[i]
				cmp		al, 0				; if src[i] = '\0'
				je		.return				; then return 
				inc		rcx					; else i++
				jmp		.loop

.return:
				mov rax, rdi
				ret
