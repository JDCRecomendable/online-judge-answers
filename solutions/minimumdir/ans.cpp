#include "minimum.h"
using namespace std;

int findMin(int N, int A[]) {
    int min = A[0];
    for (int i = 1; i < N; i++)  {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}
