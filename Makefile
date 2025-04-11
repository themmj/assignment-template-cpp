WARNINGS = -Wall -Werror -Wextra -Wpedantic -Wconversion -Wcast-align -Wno-unused -Wshadow
CFLAGS = -std=c++20 -O0 -g -I./src $(WARNINGS)
SRC = $(shell find . -type f -name "*.cpp")

main: $(SRC)
	mkdir -p out
	g++ $(CFLAGS) $^ -o out/main
