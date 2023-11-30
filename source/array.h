// #pragma once

#include <stddef.h>
#include <stdlib.h>

#define CAT_( a, b ) a##b
#define CAT( a, b ) CAT_( a, b )

// #define T int

#define init CAT( NAME, _init )
#define insert CAT( NAME, _insert )
#define cleanup CAT( NAME, _cleanup )

typedef struct {
    size_t size;
    size_t capacity;
    T* buffer;
} NAME;

void init(NAME* self, size_t size) {
    self->size = size;
    self->capacity = size;
    self->buffer = malloc(sizeof(T) * self->size);
}

T* insert(NAME* self, size_t index, T value) {
    return 0;
}

void cleanup(NAME* self) {
    self->size = 0;
    self->capacity = 0;
    free(self->buffer);
}

#undef init
#undef insert
#undef cleanup
#undef NAME
#undef T