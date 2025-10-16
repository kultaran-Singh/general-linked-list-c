# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Isrc -Wall -g

# Source files for the library
SRCS = src/linked_list.c

# Main executable source
MAIN = main.c

# Name of the final program
TARGET = linked_list_demo

# Default command to run when you type "make"
all: $(TARGET)

# Rule to link the program
$(TARGET): $(SRCS) $(MAIN)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(MAIN)

# Rule to clean up compiled files
clean:
	rm -f $(TARGET)