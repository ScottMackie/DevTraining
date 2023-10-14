---
id: kc7zf75c3yd6c78ucf6d1ua
title: cout
desc: ''
updated: 1697277826266
created: 1697275809956
---

# Cout  

---

Cout is like `printf()` in C.  
Cout is accessed via the `<iostream>` header.  
Part of the `std::` Namespace.  


## Examples

```cpp  
std::cout << "Hello World!" << std::endl;
```  

In this example we are printing `Hello World!` to the screen/output/terminal.  
The syntax `<<` is used to add whatever is to be outputted. The arrows face the direct of the dataflow, data to output.  

Multiple pieces of data can be added to the output using multiple `<<` like:

```cpp  
std::cout << "cout can string multiple " << "like this" << std::endl; // 2 strings
std::cout << "we can also add numbers like " << 42 << std::endl;  // 1 string & 1 number
```  

The `endl` syntax is used to end the line, like carriage return in C, we can also use `\n` with in a string like C.  
