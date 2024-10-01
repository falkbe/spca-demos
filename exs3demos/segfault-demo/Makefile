segfault:
	gcc -o segfault -std=c99 -g segfault.c

run: segfault
	./segfault

debug: segfault
	gdb segfault

clean:
	rm -f segfault
