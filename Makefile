dectobin: main.cpp
	g++ -o main.cpp

clean:
	rm dectobin

install: 
	mv dectobin /usr/bin

uninstall:
	rm /usr/bin/dectobin
