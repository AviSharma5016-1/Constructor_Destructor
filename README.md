##Constructor and Object Concepts in C++

## Aim
To understand and explore the concepts of constructors, object creation and destruction, copy constructors, parameterised constructors, and date handling using classes in C++, by implementing multiple program experiments demonstrating these features.

***

## Theory

### Introduction to Constructors
A **constructor** is a special member function of a class that initialises objects of that class. It has the same name as the class and does not have a return type. Constructors are called automatically when an object is created.

### Types of Constructors
| Constructor Type       | Description                                                     | Example from experiments                        |
|-----------------------|-----------------------------------------------------------------|------------------------------------------------|
| Default Constructor   | Takes no parameters and initializes members with default values | `construct` class with `a = 10, b = 20`         |
| Parameterised Constructor | Takes parameters to initialise members with specific values  | `construct` class with date parameters (day, month, year) |
| Copy Constructor      | Initializes an object using another object of the same class    | `Student` class copying age and name            |

### Constructor Overloading
A class can have multiple constructors with different parameters to create objects in various ways.

### Object Lifecycle
- **Creation**: When an object is declared, constructors are invoked.
- **Destruction**: At the end of the object's lifecycle, destructors are called, used for cleanup.
  
### Copy Constructor
- Used to create a new object as a copy of an existing object.
- Useful for deep copying when objects manage dynamic resources.

### Static Variables in Classes
- Used for counting total objects created or still existing.
- `objectCount` is a global variable incremented in the constructor and decremented in the destructor in one experiment.

### Real-Time Date Handling using C++ `ctime`
The `ctime` library provides current system time details that can be used to initialise class members like the current date.

***

## Algorithms for Experiments

### Experiment 1: Default Constructor
1. Define a class with private data members `a` and `b`.
2. Define a default constructor to initialise `a` and `b`.
3. Define a `display` function to print values.
4. In `main()`, create an object and call `display()`.

### Experiment 2: Constructor with Output Message and Default Values
1. Define class with date members `d`, `m`, and `y`.
2. Create a constructor setting default date values.
3. Print a message indicating a constructor call.
4. Output the date on a `display` function.

### Experiment 3: Constructor with User Input
1. Class with private members for roll number, name, and fee.
2. The constructor asks the user for input values.
3. Store the inputs in members.
4. Display function prints the input data.

### Experiment 4: Copy Constructor
1. Class with private members age and name (string).
2. Define a parameterised constructor.
3. Define a copy constructor to copy members from an existing object.
4. Display function to print details.
5. Create an object, copy it and display both.

### Experiment 5: Parameterised Constructor with System Date
1. Use `ctime` functions to get the system date.
2. Pass date values to parameterised constructor.
3. Display date in desired format.

### Experiment 6: Object Count Tracking Using Constructor and Destructor
1. Global variable `objectCount` holds the current count.
2. Constructor increments `objectCount` and prints count.
3. Destructor decrements and prints the remaining count.
4. Create multiple objects, including a temporary one, within a block to show destruction effects.

***

## Tables for Key Concepts

| Concept             | Syntax/Usage                           | Effect                                                             |
|---------------------|-------------------------------------|--------------------------------------------------------------------|
| Constructor         | `ClassName() { /* init code */ }`    | Initializes members automatically on object creation              |
| Parameterized Constructor | `ClassName(int a, int b) { ... }`   | Initializes with given values during object creation                |
| Copy Constructor    | `ClassName(const ClassName &obj) { ... }` | Creates new object as a copy of another                             |
| Destructor          | `~ClassName(){ /* cleanup code */ }` | Called when object is destroyed                                    |
| Static Variable     | `static int count;`                   | Shared variable to track data across all objects                   |
| Date from `ctime`   | `time_t t = time(0); tm *now = localtime(&t);` | Retrieves system date/time for dynamic initialization              |

***

## Conclusion

The experiments comprehensively demonstrate the versatile role of constructors in C++ programming. Default constructors provide automatic initialisation, parameterised constructors enable flexible initialisation with specific values, and copy constructors ensure proper copying of objects. The object lifecycle is highlighted through constructor and destructor calls, teaching resource management and scope implications. Additionally, leveraging system time with standard libraries showcases integration of system data with class structures. These foundational principles in object-oriented programming are critical for writing robust, maintainable, and efficient C++ programs.

The experiments provide a strong foundation for understanding class design, object behaviour, and memory management, making these concepts essential for advancing in software development with C++.

***
