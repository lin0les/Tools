CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -Iinclude
LDFLAGS = -lm

TARGET  = tabs

SRC     = main.c \
          src/buff.c \
          src/detab.c

OBJ     = $(SRC:.c=.o)

.PHONY: all clean re

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all
