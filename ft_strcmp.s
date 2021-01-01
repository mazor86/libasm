				global		_ft_strcmp

				section		.text
_ft_strcmp:
				xor		rax, rax
				xor		rdx, rdx
				xor		rcx, rcx
.loop:			mov		al, [rdi + rcx]	; rax = s1[i] 
				mov		dl, [rsi + rcx]	; rcx = s2[i]
				sub		rax, rdx	; rax = s1[i] - *s2[i]
				jnz		.return		; if rax !=0 return (rax)
				cmp		dl, 0
				je		.return
				inc		rcx
				jmp		.loop

.return:
				ret
