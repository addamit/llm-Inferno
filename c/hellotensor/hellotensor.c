/* 
In this program we will build our tensor data structure and some common operations.
*/
#include <stdio.h>
#include <stdlib.h>

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

// Function to free a tensor
void free_tensor(Tensor *tensor) {
    if (tensor) {
        free(tensor->data);
        free(tensor);
    }
}

// function to create a tensor with all elements initialized to zero
Tensor *create_zero_tensor(int ndims, int *dimensions) {
    Tensor *tensor = create_tensor(ndims, dimensions);
    for (size_t i = 0; i < tensor->size; i++) {
        tensor->data[i] = 0.0f;
    }
    return tensor;
}

// Function to print a tensor. Usefule for debugigng purpose
void print_tensor(const Tensor *tensor) {
    printf("Tensor with %d dimensions:\n", tensor->ndims);
    for (int i = 0; i < tensor->ndims; i++) {
        printf("Dimension %d: %d\n", i, tensor->dimensions[i]);
    }
    printf("Data: ");
    for (size_t i = 0; i < tensor->size; i++) {
        printf("%f ", tensor->data[i]);
    }
    printf("\n");
}

// function to create a tensor with random values
Tensor *create_random_tensor(int ndims, int *dimensions) {
    Tensor *tensor = create_tensor(ndims, dimensions);
    for (size_t i = 0; i < tensor->size; i++) {
        tensor->data[i] = (float)rand() / RAND_MAX; // Random float between 0 and 1
    }
    return tensor;
}

// create a tensor from an array of values
Tensor *create_tensor_from_array(int ndims, int *dimensions, float *values) {
    Tensor *tensor = create_tensor(ndims, dimensions);
    for (size_t i = 0; i < tensor->size; i++) {
        tensor->data[i] = values[i];
    }
    return tensor;
}

// now a simple main function to test our functions we have so far
int main() {
    int dimensions[2] = {3, 4}; // A 2D tensor with dimensions 3x4
    Tensor *tensor = create_tensor(2, dimensions);
    
    // Initialize tensor with random values
    for (size_t i = 0; i < tensor->size; i++) {
        tensor->data[i] = (float)i; // Just for testing, fill with sequential numbers
    }

    print_tensor(tensor);

    // Free the tensor
    free_tensor(tensor);


    // lets create a tensor from an array of values
    float values[12] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0};
    Tensor *tensor_from_array = create_tensor_from_array(2, dimensions, values);
    print_tensor(tensor_from_array);
    free_tensor(tensor_from_array);

    // Create a zero tensor
    Tensor *zero_tensor = create_zero_tensor(2, dimensions);
    print_tensor(zero_tensor);
    free_tensor(zero_tensor);

    // Create a random tensor
    Tensor *random_tensor = create_random_tensor(2, dimensions);
    print_tensor(random_tensor);
    free_tensor(random_tensor);


    return 0;
}