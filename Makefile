all:
	mkdir -p build && gcc src/*.c src/*.h -o pretty_printer && mv pretty_printer build

clean:
	rm -rf build

