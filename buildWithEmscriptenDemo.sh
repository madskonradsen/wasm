mkdir output
emcc ./fibonacci.c -s WASM=1 -o ./output/test.html
