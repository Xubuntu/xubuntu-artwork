LO_STYLE_DIR = libreoffice-style-elementary

.PHONY: libreoffice_style_elementary

libreoffice_style_elementary:
	$(MAKE) -C $(LO_STYLE_DIR)

install:
	$(MAKE) -C $(LO_STYLE_DIR) install

clean:
	$(MAKE) -C $(LO_STYLE_DIR) clean