output: master.o 
	gcc -o master master.o 

master.o: master.c 
	gcc -c master.c

clean: 
		rm master.o 