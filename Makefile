CC = gcc

CFLAGS = -g -Wall -Wextra -Wpedantic -fno-builtin -Iinclude

LDFLAGS =
LDLIBS = -lm

TARGET = program

SRC = main.c $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

clean:
	rm -f $(OBJ) $(DEP) $(TARGET)

.PHONY: clean
