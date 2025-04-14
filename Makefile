CC = gcc
CFLAGS = -shared
LDFLAGS = -Os
OUTPUT = parser.so

all: npm build
npm:
	npm run build

build:
	$(CC) $(CFLAGS) -o $(OUTPUT) src/parser.c $(LDFLAGS)

playground: wasm
	npm run playground

wasm:
	npm run wasm
