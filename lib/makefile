libsort_a.a: sort_a.o
	ar rcs $@ $^

libsort_so.so: sort_so.o
	gcc -shared $^ -o $@

sort_a.o: sort.c
	gcc -c $^ -o $@

sort_so.o: sort.c
	gcc -c -fPIC $^	-o $@

all: libsort_a.a libsort_so.so

.PHONY: clean
clean:
	rm -f *.o *.a *.so
