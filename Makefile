build:
	make -C gdm_svg
	make -C usplash

clean:
	make -C gdm_svg clean
	make -C usplash clean

install:
	make -C gdm_svg install
	make -C usplash install
