#include “wasm.h”
WASM_IMPORT void log(int i);
WASM_EXPORT int fib(int i) {
    int res = i <= 1 ? i : fib(i — 1) + fib(i — 2);
    log(res);
    return res;
}