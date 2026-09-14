CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = main.c
TARGET = program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) -lm

clean:
	rm -f $(TARGET)

.PHONY: all clean
