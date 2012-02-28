CC=gcc
CFLAGS=-g
LIBS=-lcrypto -lssl
OBJS = vmac.o

VMAC: ${OBJS}
	${CC} -o VMAC ${CFLAGS} ${OBJS} ${LIBS}

vmac.o: vmac.c vmac.h
	$(CC) ${CFLAGS} -c vmac.c