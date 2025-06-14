# inter-GPU communication

Before we get into the details, the below shows a high level stack of code. 
So we can understand which layer sits where. 


 Application Code (PyTorch, TensorFlow, etc.)  
    ↓  
 GPU Libraries (cuDNN, cuBLAS, NCCL, cuFFT, cuSPARSE, etc.)  
    ↓  
 CUDA Toolkit APIs (Runtime API, Driver API)  
    ↓  
 NVIDIA Driver (kernel-space)  
    ↓  
 GPU Hardware  

 

| API Type                | Role                                                             |
| ----------------------- | ---------------------------------------------------------------- |
| **CUDA Runtime API**    | Simplified API (e.g., `cudaMalloc`, `cudaMemcpy`)                |
| **CUDA Driver API**     | Lower-level, more control (e.g., `cuMemAlloc`, `cuLaunchKernel`) |
| **CUDA Graphs API**     | Advanced control of execution graphs                             |
| **CUDA Streams/Events** | Async execution primitives                                       |


# CUDA basics: streams, events, memory management

We will using NCCL and that sits on top of CUDA in user-space.
NCCL = Nvidia Communications Collective library

What is CUDA streams and events



# Point-to-point communication with NCCL
# Async vs sync communication patterns
# Overlapping compute and communication
# Error handling and debugging distributed code

# Code Sections:

- Simple tensor passing between GPUs
- Benchmark communication bandwidth
- Async communication wrapper class
- Debugging utilities for multiple GPUs

