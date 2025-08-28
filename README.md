# Constructor and Destructors in C++

## Aim
To understand and explore the concepts of constructors, destructors, object creation and destruction, copy constructors, parameterized constructors, and date handling using classes in C++, by implementing multiple program experiments demonstrating these features.

***

## Theory

### Introduction to Constructors and Destructors
A **constructor** is a special member function of a class that initializes objects of that class. It has the same name as the class and no return type and is called automatically when an object is created.

A **destructor** is a special member function that is automatically invoked when an object is destroyed or goes out of scope. It has the same name as the class preceded by a tilde (~), takes no parameters, and has no return type. Destructors perform cleanup tasks such as releasing dynamically allocated memory or other resources to prevent resource leaks and ensure proper program stability.

### Types of Constructors
| Constructor Type         | Description                                                        | Example from experiments                               |
|-------------------------|--------------------------------------------------------------------|--------------------------------------------------------|
| Default Constructor     | Takes no parameters and initializes members with default values    | `construct` class initializing `a = 10, b = 20`       |
| Parameterized Constructor | Takes parameters to initialize members with specific values      | `construct` class with date parameters (day, month, year) |
| Copy Constructor        | Initializes a new object using another object of the same class    | `Student` class copying age and name                   |

### Destructor Characteristics
| Feature              | Description                                                           |
|----------------------|---------------------------------------------------------------------|
| Name                 | Same as class name preceded by `~`                                  |
| Parameters           | None                                                                |
| Return Type          | None                                                                |
| Invocation           | Automatically called when object is destroyed or goes out of scope |
| Use Cases            | Cleanup tasks like releasing memory, closing files, decrementing object count |

### Constructor Overloading
A class can have multiple constructors differing in parameter lists, which enables the creation of objects initialized in different ways according to context.

### Object Lifecycle
- **Creation:** When an object is declared, constructors are triggered to initialize member variables.
- **Destruction:** When an object’s lifetime ends (e.g., it goes out of scope), the destructor is called automatically to free resources or execute cleanup code.

### Copy Constructor
The copy constructor creates a new object as a copy of an existing object, essential for deep copying when handling objects with dynamic memory or other non-trivial resources.

### Static Variables in Classes
Static variables, shared among all objects, are commonly used to track how many objects currently exist or have been created, as seen with an `objectCount` variable incremented in constructors and decremented in destructors.

### Real-Time Date Handling using C++ `ctime`
The `ctime` library enables access to the system’s current date and time, allowing real-time initialization of class members such as day, month, and year for representing the current date dynamically.

***

## Algorithms for Experiments

### Experiment 1: Default Constructor
1. Define a class with private members `a` and `b`.
2. Define a default constructor to initialize `a` to 10 and `b` to 20.
3. Define a function `display()` to print the values of `a` and `b`.
4. In `main()`, create an object and call the `display()` function.

### Experiment 2: Constructor with Output Message and Default Values
1. Define a class with private members for day (`d`), month (`m`), and year (`y`).
2. Define a default constructor that sets these to 28, 8, and 2025 respectively.
3. Print a message indicating constructor invocation.
4. Define a `display()` function to print the date in `d/m/y` format.
5. Create an object in `main()` and call `display()`.

### Experiment 3: Constructor with User Input
1. Define a class with private members for roll number, name, and fee.
2. Define a constructor that prompts the user to enter values for these members.
3. Store user input values in the members.
4. Define a `display()` function to print the stored values.
5. Create an object in `main()` and call `display()`.

### Experiment 4: Copy Constructor
1. Define a class with members age and name (string).
2. Define a parameterized constructor to initialize these members.
3. Define a copy constructor that copies the values from another object.
4. Define a `display()` function to print member values.
5. In `main()`, create an object, copy it using the copy constructor, and display both.

### Experiment 5: Parameterized Constructor with System Date
1. Use C++ `ctime` functions to obtain the current system date.
2. Pass day, month, and year as arguments to a parameterized constructor.
3. Store these values in the respective members.
4. Define a `display()` function to show the current date.
5. Instantiate an object in `main()` with system date parameters and call `display()`.

### Experiment 6: Object Count Tracking Using Constructor and Destructor
1. Define a global static variable `objectCount` initialized to zero.
2. In the class constructor, increment `objectCount` and print the number of objects created so far.
3. In the destructor, decrement `objectCount` and print the number of objects remaining after destruction.
4. Create multiple objects in `main()`, including a temporary object inside a nested block to demonstrate constructor and destructor invocation.

***

## Conclusion

The series of experiments effectively illustrates core object-oriented programming concepts in C++, focusing on constructors, destructors, and object lifecycle management. Default and parameterized constructors provide robust options for initializing objects either with predefined or dynamic values, while user input constructors facilitate interactive initialization. The copy constructor exemplifies safe and correct duplication of objects. Incorporating system date reveals practical use of external libraries for dynamic data assignment.

Furthermore, the use of destructors emphasizes responsible resource management by ensuring timely cleanup, and the static object count demonstrates class-level tracking of instances for insightful monitoring.

Mastering these concepts enables writing reliable, efficient, and maintainable C++ programs by fully leveraging constructors and destructors, elevating programming skill to professional standards.

***
