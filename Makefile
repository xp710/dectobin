dectobin: cursor.o space.o lifeboard.o engine.o main.o
	g++ -o main.cpp

clean:
	rm dectobin

install: 
	mv dectobin /usr/bin

uninstall:
	rm /usr/bin/dectobin
