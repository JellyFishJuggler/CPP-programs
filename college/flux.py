import torch
from diffusers import FluxPipeline

pipe = FluxPipeline.from_pretrained("", torch_dtype=torch.bfloat16)

prompt = "A home"