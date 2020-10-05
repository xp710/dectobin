dectobin: main.cpp
	g++ -o dectobin main.cpp

clean:
	rm dectobin

install: 
	mv dectobin /usr/bin

uninstall:
	rm /usr/bin/dectobin
