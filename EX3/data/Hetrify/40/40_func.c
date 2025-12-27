typedef int bool;
#define true 1
#define false 0

bool triples_sum_to_zero(int* l, unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        for (unsigned int j = i + 1; j < length; j++) {
            for (unsigned int k = j + 1; k < length; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}
