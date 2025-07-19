#ifndef clox_vm_h
#define clox_vm_h

#include "chunk.h"
#define STACK_MAX 256

typedef struct {
    Chunk* chunk;
    uint8_t* ip; // next instruction to be executed
    Value stack[STACK_MAX];
    Value* stackTop;
}VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
 }interpretResult;

void initVM();
void freeVM();

interpretResult interpret(const char* source);
void push(Value value);
Value pop();

#endif