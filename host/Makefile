CC ?= $(CROSS_COMPILE)gcc
LD ?= $(CROSS_COMPILE)ld

OBJS = main.o

CFLAGS += -Wall -I../ta/include -I$(TEEC_EXPORT)/include -I./include
LDADD += -lteec -L$(TEEC_EXPORT)/lib

BINARY = hello_ta

all: $(BINARY)

$(BINARY): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $< $(LDADD)

.PHONY: clean
clean:
	rm -f $(OBJS) $(BINARY)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all
