# 📡 **minitalk**  
### 🛠️ **Client-Server Communication Using Signals in C**  

![result](https://i.postimg.cc/grphdCPb/Screen-Shot-2025-03-17-at-2-06-35-AM.png)

---

## 🎯 **Overview**  
**minitalk** is a project at **[1337 Coding School](https://1337.ma)** (part of the **42 Network**) where you create a **client-server communication system** using **UNIX signals**. This project teaches you how to use **signals**, **bitwise operations**, and **inter-process communication (IPC)** in C. It’s a great way to understand how processes can communicate with each other in a lightweight and efficient manner.

---

## 🧠 **What You'll Learn**  
- **📖 UNIX Signals**:  
  Learn how to use signals like `SIGUSR1` and `SIGUSR2` for communication between processes.  
- **🧩 Bitwise Operations**:  
  Use bitwise operations to encode and decode messages into binary signals.  
- **⚙️ Inter-Process Communication (IPC)**:  
  Implement a simple client-server model for sending and receiving messages.  
- **🧠 Error Handling**:  
  Handle edge cases and errors gracefully to ensure robust communication.  

---

## 🚀 **Features**  
- **✅ Core Functionality**:  
  - Implement a **server** that listens for signals and decodes messages.  
  - Implement a **client** that sends messages to the server using signals.  
  - Use `SIGUSR1` and `SIGUSR2` to represent binary `0` and `1`, respectively.  

- **✨ Advanced Features**:  
  - Handle large messages by splitting them into smaller chunks.  
  - Implement error handling for invalid inputs or communication failures.  
  - Add support for Unicode characters (optional).  

- **📦 Organized Code**:  
  Clean, modular, and well-documented code for easy readability and maintenance.  

---

## 💡 **Why minitalk Matters**  
The **minitalk** project is a critical step in understanding how **inter-process communication** works in UNIX-based systems. By completing this project, you’ll:  
- **🔧 Gain hands-on experience with UNIX signals and bitwise operations.**  
- **🧠 Learn how to implement a client-server communication system.**  
- **🚀 Prepare for more advanced projects involving networking and IPC.**  

---

## 🛠️ **Technologies Used**  
- **💻 C Programming Language**  
- **📜 UNIX Signals (`SIGUSR1`, `SIGUSR2`)**  
- **🧠 Bitwise Operations**  
- **⚙️ Inter-Process Communication (IPC)**  

---

## 🌟 **Skills Gained**  
- **🧩 Problem Solving**  
- **📚 Deep Understanding of Signals and IPC**  
- **⚙️ Efficient Code Optimization**  
- **🧠 Algorithm Design**  

---

## 📂 **Project Structure**  
```bash
minitalk/  
├── Makefile             # Compilation automation  
├── server.c             # Server program to receive and decode messages  
├── client.c             # Client program to send messages  
├── utils              # Helper functions (e.g., bitwise operations)  
└── minitalk.h           # Header file with function prototypes and constants  
