
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main
SRC = main.c
BIN_DIR = bin

$(BIN_DIR)/$(TARGET): $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TARGET) $(SRC)

.PHONY: clean

clean:
	rm -rf $(BIN_DIR)