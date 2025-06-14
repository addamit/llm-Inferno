
# Why a 10GB model needs partitioning on 16GB GPUs (memory fragmentation, activations, KV cache)
# Practical Challenge 
    - Out of memory during inference 
# Different types of parallelism: data vs tensor vs pipeline
# Latency vs throughput trade-offs in inference


# Code Section:

- Memory calculator for transformer models
- Simple profiling script to measure single-GPU inference
