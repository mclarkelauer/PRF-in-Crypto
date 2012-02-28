CC=gcc
CFLAGS=-g
LIBS=-lcrypto -lssl
OBJS = ecrypt.o bigtest.o

Salsa: ${OBJS}
	${CC} -o Salsa ${CFLAGS} ${OBJS} ${LIBS}

ecrypt.o: ecrypt.c ecrypt-config.h ecrypt-portable.h ecrypt-machine.h ecrypt-sync.h
	$(CC) ${CFLAGS} -c ecrypt.c

bigtest.o: bigtest.c ecrypt-config.h ecrypt-portable.h ecrypt-machine.h ecrypt-sync.h
	$(CC) ${CFLAGS} -c bigtest.c -lcrypto -lssl
