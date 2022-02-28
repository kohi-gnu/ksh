CC	?= gcc
RM	= rm -f

CFLAGS	+= -Wall -Wextra -Werror -DVI #-DEMACS
LDFLAGS	+= -lcurses -lbsd

SRCS=	alloc.c c_ksh.c c_sh.c c_test.c c_ulimit.c edit.c emacs.c eval.c \
	exec.c expr.c history.c io.c jobs.c lex.c mail.c main.c \
	misc.c path.c shf.c syn.c table.c trap.c tree.c tty.c var.c \
	version.c vi.c
OBJS	= $(SRCS:.c=.o)

TARGET	= ksh

MAN=	ksh.1 sh.1

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	$(RM) $(TARGET) $(OBJS)

re: clean all

.PHONY: all clean re