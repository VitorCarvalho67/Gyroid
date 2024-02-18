#include <stdio.h>
#include <math.h>

int main() {
    // box side length
    unsigned int N = 100;
    double MAX = (double)N;

    // JSON format
    // Wrap point in []
    printf("[");
    for (unsigned int k = 0; k < N; ++k) {
        for (unsigned int j = 0; j < N; ++j) {
            for (unsigned int i = 0; i < N; ++i) {
                // transform into space -PI to PI;
                double x = 2 * M_PI * i / MAX - M_PI;
                double y = 2 * M_PI * j / MAX - M_PI;
                double z = 2 * M_PI * k / MAX - M_PI;

                double f = sin(x) * cos(y) + sin(y) * cos(z) + sin(z) * cos(x);
                if (fabs(f) < 0.01) {
                    // current cell is on the surface.
                    printf("[%.2f, %.2f, %.2f],", i / 100.0, j / 100.0, k / 100.0);
                }
            }
        }
    }    

    // Remove the last comma and close the array
    printf("\b]");

    return 0;
}
