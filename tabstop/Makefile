CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c11 -Iinclude -g

TARGET  = tabs

SRC     = main.c \
          src/entab.c

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
