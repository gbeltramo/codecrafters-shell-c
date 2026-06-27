.PHONY: build format clean

build:
	./build.sh

format:
	clang-format -i src/main.c

clean:
	@echo "--- Removing ./bin/"
	rm -r ./bin/ || true
