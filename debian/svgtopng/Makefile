ICONDIR ?= elementary-xfce

all: svgtopng

svgtopng:
	gcc -Wall -Werror -O0 -pipe \
	`pkg-config --libs --cflags gtk+-2.0` \
	`pkg-config --libs --cflags libxfce4ui-1` \
	`pkg-config --libs --cflags gdk-pixbuf-2.0` \
	svgtopng.c -o svgtopng

convert: svgtopng | $(ICONDIR)
	chmod +x pngtheme.sh
	./pngtheme.sh $(ICONDIR)

clean:
	rm -f svgtopng
