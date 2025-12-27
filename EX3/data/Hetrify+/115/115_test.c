#undef NDEBUG
#include <assert.h>
#include <stdlib.h>

int max_fill(int** grid, int gridSize, int* gridColSize, int capacity);

int main() {
    // Test 1: {{0,0,1,0}, {0,1,0,0}, {1,1,1,1}}, capacity=1
    int g1r1[] = {0,0,1,0};
    int g1r2[] = {0,1,0,0};
    int g1r3[] = {1,1,1,1};
    int* g1[] = {g1r1, g1r2, g1r3};
    int g1Cols[] = {4, 4, 4};
    assert(max_fill(g1, 3, g1Cols, 1) == 6);

    // Test 2: {{0,0,1,1}, {0,0,0,0}, {1,1,1,1}, {0,1,1,1}}, capacity=2
    int g2r1[] = {0,0,1,1};
    int g2r2[] = {0,0,0,0};
    int g2r3[] = {1,1,1,1};
    int g2r4[] = {0,1,1,1};
    int* g2[] = {g2r1, g2r2, g2r3, g2r4};
    int g2Cols[] = {4, 4, 4, 4};
    assert(max_fill(g2, 4, g2Cols, 2) == 5);

    // Test 3: {{0,0,0}, {0,0,0}}, capacity=5
    int g3r1[] = {0,0,0};
    int g3r2[] = {0,0,0};
    int* g3[] = {g3r1, g3r2};
    int g3Cols[] = {3, 3};
    assert(max_fill(g3, 2, g3Cols, 5) == 0);

    // Test 4: {{1,1,1,1}, {1,1,1,1}}, capacity=2
    int g4r1[] = {1,1,1,1};
    int g4r2[] = {1,1,1,1};
    int* g4[] = {g4r1, g4r2};
    int g4Cols[] = {4, 4};
    assert(max_fill(g4, 2, g4Cols, 2) == 4);

    // Test 5: {{1,1,1,1}, {1,1,1,1}}, capacity=9
    int g5r1[] = {1,1,1,1};
    int g5r2[] = {1,1,1,1};
    int* g5[] = {g5r1, g5r2};
    int g5Cols[] = {4, 4};
    assert(max_fill(g5, 2, g5Cols, 9) == 2);

    return 0;
}
