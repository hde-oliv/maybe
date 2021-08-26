SRC	:=	maybe.c

all: $(SRC)
	$(CC) $(SRC) -o maybe

install: $(SRC)
	$(CC) $(SRC) -o maybe
	mv maybe /usr/local/bin
