				global		_ft_strcpy

				section		.text
_ft_strcpy:
				mov		rax, rdi		; copy dst for return
.loop:			mov		rcx, [rsi]
				mov		[rdi], rcx		; copy *src to *dst 
				cmp		rcx, 0			; if *src == 0 then return
				je		.return
				inc		rdi				;else dst++, srs++, jump
				inc		rsi
				jmp		.loop
.return:
				ret
