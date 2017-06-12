
all:
	   gcc hello.c -o ../bin/tpihello
	   gcc tpinsub.c -o ../bin/tpinsub
	   gcc tpitemp.c -o ../bin/tpitemp 
	   gcc tpijukebox.c -o ../bin/tpijukebox 
	   gcc tpibunny.c -o ../bin/tpibunny
	   gcc makelist.c -o makelist


install:
	cp ../bin/tpihello /usr/local/bin ; chmod +x /usr/local/bin/tpihello
	cp ../bin/tpitemp /usr/local/bin ; chmod +x /usr/local/bin/tpitemp  
	cp ../bin/tpinsub /usr/local/bin ; chmod +x /usr/local/bin/tpinsub 
	cp ../bin/tpibunny /usr/local/bin ; chmod +x /usr/local/bin/tpibunny
	cp makelist /usr/local/bin ; chmod +x /usr/local/bin/makelist 
	cp -v  ../bin/*   /usr/local/bin ; chmod +x /usr/local/bin/tpi*

clean:
	  rm -v ../bin/* 

