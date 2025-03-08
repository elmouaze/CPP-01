Here's a **README** file for your **C++ - Module 01** project:  

---

# C++ - Module 01  

## 🚀 Overview  
This repository contains exercises for **C++ - Module 01**, which focuses on:  
- Memory allocation  
- Pointers to members  
- References  
- Switch statements  

These exercises aim to strengthen your understanding of Object-Oriented Programming (OOP) principles in C++.  

## 📜 Exercises  

### ✅ Exercise 00: BraiiiiiiinnnzzzZ  
- Implement a `Zombie` class with an `announce()` method.  
- Create two functions: `newZombie()` (heap allocation) and `randomChump()` (stack allocation).  
- Handle memory properly by ensuring zombies are destroyed when no longer needed.  

### ✅ Exercise 01: Moar brainz!  
- Implement `zombieHorde()` to allocate and initialize `N` zombies at once.  
- Use proper memory management to prevent leaks.  

### ✅ Exercise 02: HI THIS IS BRAIN  
- Work with references and pointers.  
- Print memory addresses and values for comparison.  

### ✅ Exercise 03: Unnecessary violence  
- Create a `Weapon` class with `getType()` and `setType()`.  
- Implement `HumanA` (always has a weapon) and `HumanB` (weapon is optional).  
- Demonstrate the difference between using a pointer and a reference.  

### ✅ Exercise 04: Sed is for losers  
- Implement a program that replaces occurrences of `s1` with `s2` in a file.  
- Avoid using `std::string::replace`.  

### ✅ Exercise 05: Harl 2.0  
- Create a `Harl` class with different complaint levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`).  
- Use function pointers instead of multiple `if` statements.  

### ✅ Exercise 06: Harl filter  
- Implement a filtering system that only prints messages above a specified log level.  
- Use a `switch` statement for decision-making.  

## 🛠️ Compilation & Execution  
All exercises include a **Makefile**. Use the following commands:  

```sh
make        # Compile the project
./executable_name   # Run the program
make clean  # Remove object files
make fclean # Remove executables
make re     # Recompile from scratch
```

## 🔥 Notes  
- Code is written in **C++98**.  
- **STL is not allowed** until Modules 08 and 09.  
- Avoid memory leaks and ensure proper deallocation of dynamically allocated memory.  

## 📜 Submission Rules  
- Submit only the required files.  
- Follow the project’s naming conventions.  
- Ensure your code compiles without errors using `-Wall -Wextra -Werror -std=c++98`.  

## 📌 License  
This project follows the **42 School** guidelines.  

---

Let me know if you want any modifications! 🚀