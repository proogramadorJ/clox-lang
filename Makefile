TARGET = main

CC = gcc

CFLAGS = -Wall -Wextra -std=c99 -g

SRCS = main.c chunk.c memory.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
