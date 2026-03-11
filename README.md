# Graph Handshaking Lemma Analysis in C

## 📌 Project Overview

This project explores properties of a randomly generated **undirected graph** using the **C programming language**.

The program generates a graph with a specified number of vertices and randomly creates edges between them. It then calculates:

* Number of edges
* Degree of each vertex
* Sum of all vertex degrees
* Verification of the **Handshaking Lemma**
* Computational time required to process the graph

The project also analyzes how computational time increases as the number of vertices increases.

---

## 🧠 Handshaking Lemma

The **Handshaking Lemma** in graph theory states:

Sum of degrees of all vertices = 2 × Number of edges

This program verifies this property by computing both values and checking whether the equality holds.

---

## ⚙️ Features

* Random undirected graph generation
* Adjacency list representation
* Edge counting
* Vertex degree calculation
* Handshaking Lemma verification
* Computational time measurement
* Time complexity analysis

---

## 💻 Technologies Used

* C Programming Language
* Standard Libraries

  * stdio.h
  * stdlib.h
  * time.h

---

## 🚀 How the Program Works

1. The user enters the number of vertices.
2. The program randomly generates edges between vertices.
3. The adjacency list is constructed.
4. The program calculates:

   * Number of edges
   * Degree of each vertex
5. It verifies the **Handshaking Lemma**.
6. It measures the computational time.

---

## 📊 Experimental Results

The program was executed with different numbers of vertices.

| Number of Vertices | Computational Time (ms) |
| ------------------ | ----------------------- |
| 1000               | 48                      |
| 2000               | 203                     |
| 3000               | 442                     |
| 4000               | 935                     |
| 5000               | 1473                    |

The results show that computational time increases rapidly as the number of vertices increases. 

---

## ⏱ Time Complexity

From both experimental results and theoretical analysis:

Time Complexity = **O(n²)**

This occurs because the program checks possible edges between every pair of vertices.

---

## 👨‍💻 Authors

* Belal Hossain
* MD Waseer Ahmed
* Md. Nazmul Hossen

---

## 🏫 Course Information

Course: **Discrete Mathematics (CSE106)**
Section: **02**
Group: **04**
Department: **Computer Science and Engineering**
University: **East West University**

---

⭐ If you find this project helpful, feel free to explore the code.
