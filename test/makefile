build: main.c
	gcc $^ -o main_a -L../lib/ -lsort_a
	gcc $^ -o main_so -L../lib/ -lsort_so -Wl,-rpath=../lib/

.PHONY: clean
clean:
	rm -f main_a main_so
