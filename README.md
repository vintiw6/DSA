<style>
  .title {
    font-size: 2em;
    color: #333;
    text-align: center;
  }

  .description {
    font-style: italic;
    padding: 1em;
  }

  .content h2 {
    font-size: 1.5em;
    margin-bottom: 0.5em;
  }

  .data-structure, .algorithm {
    margin-bottom: 1em;
  }

  .data-structure code, .algorithm code {
    font-family: monospace;
    background-color: #f5f5f5;
    padding: 0.5em 1em;
    border-radius: 3px;
  }
</style>

<h1 class="title">Data Structures and Algorithms in C</h1>

<p class="description">This repository documents my journey through learning data structures and algorithms using the C programming language. It serves as a valuable resource for anyone interested in exploring these fundamental concepts and practicing their C skills.</p>

<div class="content">

  ## Data Structures

  Here's an overview of the data structures I've explored with code examples in C:

  **Arrays**

  Arrays are a fundamental data structure that stores a fixed-size collection of elements of the same data type.

  ```c
  #include <stdio.h>

  int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
      printf("%d ", numbers[i]);
    }

    return 0;
  }


