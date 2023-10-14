---
id: eogl70s2hygunnqxzjx27qr
title: cin
desc: ''
updated: 1697277959646
created: 1697277553051
---

# Cin  

---

Cin is like `scanf()` in C.  
Cin is accessed via the `<iostream>` header.  
Part of the `std::` Namespace.  


## Examples

```cpp  
string str;
std::cin >> str;
std::cout << "Your string was " << str << std::endl;
```  

In this example we are reading an input from the terminal and storing it within `str`.  
The syntax `>>` is used to accept whatever is being inputted. The arrows face the direct of the dataflow, input to stored data.  

Multiple pieces of data can be inputted using multiple `>>` like:

```cpp  
std::cin >> var1 >> var2;
std::cout << "Your Numbers were " << var1 << " & " << var2 << "the sum is: " << var1 + var2 << std::endl;
```  
