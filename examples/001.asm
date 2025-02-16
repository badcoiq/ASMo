;First, set CPU
;86 - Intel 8086
.CPU 86

push CS
pop DS

mov DX, message
mov AH, 9
int 21h

message DB 'Hello world from DOS$'
