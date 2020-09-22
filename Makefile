all: main.o bin2source.o
	gcc -o bin2source main.o bin2source.o

main.o:
	gcc -c src/main.c

bin2source.o:
	gcc -c src/bin2source.c

clean:
	rm bin2source main.o bin2source.o
