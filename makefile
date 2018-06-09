All: bin build bin/game

bin/game: build/main.o build/win.o build/stroke.o build/matrix.o build/players.o
		gcc -Wall -w -o bin/game build/main.o build/win.o build/stroke.o build/matrix.o build/players.o

build/main.o: src/main.c 
		gcc -Wall -w -o build/main.o -c src/main.c 

build/win.o: src/win.c 
		gcc -Wall -w -o build/win.o -c src/win.c 

build/stroke.o: src/stroke.c
		gcc -Wall -w -o build/stroke.o -c src/stroke.c 

build/matrix.o: src/matrix.c
		gcc -Wall -w -o build/matrix.o -c src/matrix.c

build/players.o: src/players.c
		gcc -Wall -w -o build/players.o -c src/players.c

bin/test: build/test.o build/players.o
		gcc -Wall -w -o bin/test build/test.o build/players.o

builf/test.o: test/test.c
		gcc -Wall -w -o build/test.o -c test/test.c -Ithirdparty -Isrc

clean:
		rm -rf *.o