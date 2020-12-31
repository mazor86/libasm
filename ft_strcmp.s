				global		_ft_strcmp

				section		.text
_ft_strcmp:
				mov		rax, [rdi]
				sub		rax, [rsi]
				jnz		.return
				cmp		byte [rdi], 0
				

.return:
				ret