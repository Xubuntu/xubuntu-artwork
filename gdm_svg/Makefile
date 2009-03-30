INSTALL = /usr/bin/install -c
INSTALL_DATA = $(INSTALL) -m 644

build: $(patsubst %.svg,%.png,$(wildcard *.svg))

clean:
	-rm *.png

install:
	$(INSTALL) -d $(DESTDIR)/usr/share/gdm/themes/xubuntu
	$(INSTALL_DATA) *.png $(DESTDIR)/usr/share/gdm/themes/xubuntu

jaunty-gdm.png: jaunty-gdm.svg
	rsvg -f png -w 2000 -h 1800 jaunty-gdm.svg jaunty-gdm.png

icon_%.png: icon_%.svg
	rsvg -f png -w 32 -h 32 $< $@

