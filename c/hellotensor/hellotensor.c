/* 
In this program we will build our tensor data structure and some common operations.
*/
#include <stdio.h>

typedef struct {
    int dimensions[4]; // The size of each dimension
    int ndims; // The number of dimensions
    size_t size; // The total size of the tensor
    float *data; // A pointer to the data
} Tensor;

// Function to create a tensor 
Tensor *create_tensor(int ndims, int *dimensions) {
    Tensor *tensor = (Tensor *)malloc(sizeof(Tensor));
    tensor->ndims = ndims;
    tensor->size = 1;
    for (int i = 0; i < ndims; i++) {
        tensor->dimensions[i] = dimensions[i];
        tensor->size *= dimensions[i];
    }
    tensor->data = (float *)malloc(tensor->size * sizeof(float));
    return tensor;
}
