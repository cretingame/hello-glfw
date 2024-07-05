
main.out: main.c
	gcc main.c -lglfw -o main.out

clean:
	rm -f *.out

.PHONY:
	clean
