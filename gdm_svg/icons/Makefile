INSTALL = /usr/bin/install -c
INSTALL_DATA = $(INSTALL) -m 644

build: $(patsubst %.svg,%.png,$(wildcard *.svg))

icon_%.png: icon_%.svg
	rsvg -f png -w 32 -h 32 $< $@

clean:
	-rm *.png

install:
	$(INSTALL) -d $(DESTDIR)/usr/share/gdm/themes/xubuntu
	$(INSTALL_DATA) *.png $(DESTDIR)/usr/share/gdm/themes/xubuntu
