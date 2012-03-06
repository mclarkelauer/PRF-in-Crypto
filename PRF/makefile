CC=gcc
CFLAGS=-g
LIBS=-lcrypto -lssl
OBJS = vmac.o ecrypt.o PRF.o

PRF: ${OBJS}
	${CC} -o PRF ${CFLAGS} ${OBJS} ${LIBS}

vmac.o: vmac.c vmac.h
	$(CC) ${CFLAGS} -c vmac.c
	
ecrypt.o: ecrypt.c
	$(CC) ${CFLAGS} -c ecrypt.c
	
PRF.o: PRF.c
	$(CC) ${CFLAGS} -c PRF.c
