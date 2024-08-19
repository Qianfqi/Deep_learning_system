#include <cuda_runtime.h>
#include <iostream>

__global__ void kernel() {
    printf("Hello from CUDA!\n");
}

int main() {
    kernel<<<1, 1>>>();
    cudaDeviceSynchronize();
    return 0;
}
