				global		_ft_strdup
				extern		_malloc
				extern		_ft_strlen
				extern		_ft_strcpy

				section		.text

; char	*ft_strdup(char *str)
; rdi = str

_ft_strdup:
				push		rdi			; save char *str
				call		_ft_strlen
				add			rax, 1		; rax = ft_strlen(str) + 1
				mov			rdi, rax
				call		_malloc		; rax = malloc(rax)
				pop			rsi			; move str from stack to rsi
				cmp			rax, 0
				je			.return		; if rax == NULL then return
				mov			rdi, rax
				call		_ft_strcpy

.return:
				ret
