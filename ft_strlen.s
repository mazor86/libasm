				global		_ft_strlen

				section		.text
_ft_strlen:
				xor		rax, rax ; rax = 0
.loop:			cmp		byte [rdi + rax], 0 ; compare *str and '\0'
				je		.return
				inc		rax
				jmp		.loop


.return:
				ret