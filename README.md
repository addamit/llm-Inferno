# llm-inferno 🔥

Welcome to the inferno — a dive into the chaotic, buzzword-filled world of large language model (LLM) inference.

It's an attempt to **build an LLM inference engine from scratch**, while making sense of all the intimidating terms and concepts people love to drop on Twitter and conference slides — like _KV caching_, _speculative decoding_, _guided generation_, and _flash attention_ (what does that even mean?).

### Why?

The goal here is to **de-jargon** the stack, one low-level experiment at a time:

- Figure out what happens between a prompt and a prediction
- Build intuition by implementing pieces in C and Python
- Touch the metal — via C, CPU, GPU, and maybe a bit of pain
- Break the black box and De-jargon the stack, piece by piece



### What’s in the repo?

- `notebooks/` — math, visualizations, prototyping
- `c/` — raw system-level explorations
- `inferno/` — where the actual engine may slowly emerge

### What this is not

- Not production code  
- Not a how-to for training your own GPT-4  

This is a work in progress repo. Expect broken code, incomplete thoughts, and TODOs everywhere. But if you're also trying to figure this stuff out, feel free to follow along or suggest ideas.

### 🙏 Inspiration

This project is inspired by the amazing work of:

- [Andrej Karpathy](https://github.com/karpathy) — especially his philosophy of learning by building
- [llama.cpp](https://github.com/ggerganov/llama.cpp) and [tinygrad](https://github.com/geohot/tinygrad) — proof that you can go deep with minimal code
- All the folks making ML more accessible, one explainer at a time
