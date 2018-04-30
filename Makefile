a.out : main.c phoneFunc.c screenOut.c
    gcc main.c phoneFunc.c screenOut.c -std=c99
clean :
    rm a.out