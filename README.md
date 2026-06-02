<h1 align="center">Tipto Ghosh</h1>

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=500&size=18&duration=3000&pause=1000&color=6366F1&center=true&vCenter=true&width=700&lines=Multimodal+AI+%7C+LLM+Research+%7C+Retrieval-Augmented+Generation;Building+at+the+intersection+of+vision+%26+language." alt="Typing SVG" />
</p>

<p align="center">
  <a href="mailto:tiptoghosh@gmail.com"><img src="https://img.shields.io/badge/Email-D14836?style=flat-square&logo=gmail&logoColor=white"/></a>&nbsp;
  <a href="https://www.linkedin.com/in/tipto-ghosh-4b0aab283/"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=flat-square&logo=linkedin&logoColor=white"/></a>&nbsp;
  <a href="https://leetcode.com/u/Tipto_Ghosh/"><img src="https://img.shields.io/badge/LeetCode-FFA116?style=flat-square&logo=leetcode&logoColor=black"/></a>
</p>

---

## About

I am a final-year Computer Science student with a focused interest in **multimodal large language models**, **retrieval-augmented generation**, and **efficient LLM fine-tuning**. My work centers on building systems that bridge vision and language — from page-level multimodal RAG pipelines to parameter-efficient model adaptation via QLoRA.

I always try to approach the problems with a research mindset: understanding the underlying mechanics before engineering the solution. I am currently expanding into **agentic AI architectures** using LangGraph, and exploring late-interaction retrieval models (ColPali-style) for document understanding.

---

## Education

**B.Sc. in Computer Science** — American International University-Bangladesh (AIUB)  
*Expected graduation: 2027 · Current CGPA: 3.99 / 4.00*

---

## Research Interests

- Multimodal Retrieval-Augmented Generation (vision-language pipelines)
- Parameter-efficient fine-tuning of LLMs (QLoRA, LoRA, PEFT)
- Agentic AI — tool-augmented, multi-step reasoning systems
- NLP for low-resource languages, with a focus on Bangla
- Computer vision for real-world applications (disaster response, agriculture, medical)

---

## Selected Projects

### Multimodal RAG System
*End-to-end retrieval-augmented generation treating document pages as retrieval units*

Developed multimodal RAG pipelines across three domains — culinary advisory (Chef-Bot), agricultural disease diagnosis (Agri-Doctor), and general document retrieval. The architecture covers PDF-to-image rendering, vision-language embedding, vector storage, optional cross-encoder reranking, and VLM-based answer generation.

- **Embedding**: `nvidia/llama-nemotron-embed-vl-1b-v2` for vision-language alignment; `BAAI/bge-large-en-v1.5` for dense text retrieval
- **Vector Storage**: Dual-collection ChromaDB / Qdrant (separate text and image indices bridged by document ID)
- **Retrieval**: LangChain LCEL pipeline with HyDE, MMR, EnsembleRetriever, and cross-encoder reranking
- **Generation**: Qwen2.5-7B-Instruct via HuggingFace Inference Endpoint

---

### Flood Detection Multimodal Pipeline
*Aerial image understanding combining VQA and semantic segmentation for disaster response*

Built a dual-task pipeline on the FloodNet dataset capable of open-ended visual question answering and pixel-level flood region segmentation from aerial imagery.

- **VQA**: BLIP-2 (Flan-T5-XL backbone) with custom T5-compatible answer tokenization and loss computation
- **Segmentation**: DINOv2 encoder paired with a SegFormer-style segmentation head
- **Target deployment**: ONNX / TensorRT for edge inference

---

## Technical Skills

**ML / Deep Learning**

![PyTorch](https://img.shields.io/badge/PyTorch-EE4C2C?style=flat-square&logo=pytorch&logoColor=white)
![HuggingFace](https://img.shields.io/badge/HuggingFace-FFD21E?style=flat-square&logo=huggingface&logoColor=black)
![Unsloth / TRL / PEFT](https://img.shields.io/badge/Unsloth%20·%20TRL%20·%20PEFT-8B5CF6?style=flat-square)
![Scikit-Learn](https://img.shields.io/badge/Scikit--Learn-F7931E?style=flat-square&logo=scikitlearn&logoColor=white)

**RAG & Orchestration**

![LangChain](https://img.shields.io/badge/LangChain%20·%20LangGraph-1C3C3C?style=flat-square&logo=langchain&logoColor=white)
![ChromaDB](https://img.shields.io/badge/ChromaDB-FF6B35?style=flat-square)
![Qdrant](https://img.shields.io/badge/Qdrant-DC244C?style=flat-square)
![Pinecone](https://img.shields.io/badge/Pinecone-000000?style=flat-square)

**Languages & Deployment**

![Python](https://img.shields.io/badge/Python-3670A0?style=flat-square&logo=python&logoColor=ffdd54)
![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=flat-square&logo=fastapi&logoColor=white)
![Streamlit](https://img.shields.io/badge/Streamlit-FF4B4B?style=flat-square&logo=streamlit&logoColor=white)

---

## Currently Exploring

```
→ Agentic AI systems with LangGraph (multi-step tool-augmented reasoning)
→ Late-interaction retrieval — ColPali-style models for document RAG
→ Bangla NLP — low-resource document understanding
```

---

<p align="center">
  <em>"Discipline and curiosity are the foundations of excellence."</em>
</p>
