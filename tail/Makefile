CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
LDFLAGS =

TARGET = tail
SRC = main.c utils.c buffer.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ) $(TARGET)

re: clean all
