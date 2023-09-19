CC=gcc
CFLAGS=-O

all: test_open test_copy test_cat test_dup test_hotel

test_open: ../1/test_open.o
	$(CC) -o $@ $<
test_copy: ../2/test_copy.o
	$(CC) -o $@ $<
test_cat: ../3/test_cat.o
	$(CC) -o $@ $<
test_dup: ../4/test_dup.o
	$(CC) -o $@ $<
test_hotel: test_hotel.o
	$(CC) -o $@ $<
%.o: %.c
	$(CC) -c -o $@ $<
clean:
	rm *.o test_open test_copy test_cat test_dup test_hotel
