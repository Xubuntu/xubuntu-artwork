INSTALL = /usr/bin/install -c
INSTALL_DATA = $(INSTALL) -m 644

build: $(patsubst %.svg,%.png,$(wildcard *.svg))

jaunty-gdm.png: jaunty-gdm.svg
	rsvg -f png -w 2000 -h 1800 jaunty-gdm.svg jaunty-gdm.png

clean:
	-rm jaunty-gdm.png

install:
	$(INSTALL) -d $(DESTDIR)/usr/share/gdm/themes/xubuntu
	$(INSTALL_DATA) jaunty-gdm.png $(DESTDIR)/usr/share/gdm/themes/xubuntu
