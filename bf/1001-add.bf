,		; read input and store in s1
>		; move pointer to s2 
,		; read input and store in s2
[		 ; enter loop
<		 ; move to s1
+		 ; increment s1
>		 ; move to s2
-		 ; decrement s2
]		 ; exit loop
<		 ; go back to s1
------------------------------------------------	;subtract 48(ASCCI 0)
.							;print s1
