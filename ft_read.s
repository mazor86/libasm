				global		_ft_read
				extern		___error

				section		.text
_ft_read:
				mov		rax, 0x2000003		; number of syscall read
				syscall
				jc		.error
				ret

.error:
				push	rax
				push	rsi
				call	___error
				pop		rsi
				pop		rcx
				mov		[rax], rcx
				mov		rax, -1
				ret