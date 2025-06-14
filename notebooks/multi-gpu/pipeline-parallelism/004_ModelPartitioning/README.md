# Split models intelligently

Layer-wise partitioning (simplest approach)
Tensor parallelism within layers (more complex but needed for large layers)
Handling edge cases: embeddings, final layers, shared parameters
Load balancing across GPUs
Memory-aware partitioning algorithms

# Code Sections:

- Automatic model partitioner
- Partition analyzer (shows memory/compute distribution)
- Support for custom partitioning strategies
- Validation tools to ensure correctness

- How does deepspeed do this under the hood ?
- How does accelerate implement this under the covers?
