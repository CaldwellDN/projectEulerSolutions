# Makefile for compiling program%n.c

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11

# Target executable name (without number)
TARGET = program

# Find all source files matching the pattern
SRC = $(wildcard $(TARGET)*.c)

# Default target
all: $(SRC:.c=)

# Rule to build the target from .c files
%: %.c
	$(CC) $(CFLAGS) -o $@ $<

# Clean rule to remove all executables
clean:
	rm -f $(TARGET)*
