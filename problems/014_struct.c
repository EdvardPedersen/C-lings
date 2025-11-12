/*
 * Structs allow us to combine multiple variables into a single data type.
 * In this program, we're using a struct to represent a two-dimensional
 * vector.
 *
 * We've implemented a function for adding two vectors together, and we're
 * trying to use this to add up two vectors which should end up with a vector
 * with coordinates (11.0, 22.0), but we're not getting the right result.
 *
 * Some notes, we're typedefing the struct vector to vector_t, which means that
 * instead of typing struct vector, we can type vector_t, and it has the same
 * meaning.
 */

#include <stdio.h>

struct vector {
    float x;
    float y;
};

typedef struct vector vector_t;

vector_t vec_add(vector_t a, vector_t b) {
    vector_t result = {.x = a.x + b.x, .y = a.y + b.y};
    return result;
}

int main() {
    vector_t first = {0};
    first.x = 1.0;
    first.y = 2.0;

    struct vector second = {.x = 10.0};

    vector_t combined = vec_add(first, second);

    printf("Result: (%f, %f)", combined.x, combined.y);
}
