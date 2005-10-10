DESTDIR = ../debian/tmp

BUILT_SOURCES = usplash-artwork.c usplash-artwork.o

AM_INCLUDES = -I/usr/include/bogl

usplashdir = /usr/lib/usplash

build: xubuntu-splash.so

install: install-exec-local

clean:
	rm -f usplash-artwork.c usplash-artwork.o xubuntu-splash.so usplash-artwork.png

distclean: clean
	-rm -f Makefile

install-exec-local: xubuntu-splash.so
	mkdir -p $(DESTDIR)$(usplashdir)
	cp xubuntu-splash.so $(DESTDIR)$(usplashdir)

usplash-artwork.c: xusplash.png
	cp $< usplash-artwork.png
	pngtobogl usplash-artwork.png >$@

usplash-artwork.o: usplash-artwork.c
	$(CC) -Os -g -I/usr/include/bogl -fPIC -c $< -o $@

xubuntu-splash.so: usplash-artwork.o
	$(CC) -shared -Wl,-soname,usplash-artwork.so $< -o $@
