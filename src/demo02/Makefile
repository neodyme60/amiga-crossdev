all: run

demo: *.asm
	vc -O2 -notmpfile -nostdlib -o demo start.asm main.asm player.asm

install: demo
	cp -rv demo ../../drive/DH0/
	echo "demo" > ../../drive/DH0/s/startup-sequence

run: install
	uae -f ../../config/a1200.uaerc

clean:
	rm -rf *.o demo02
