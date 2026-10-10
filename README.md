# C-CCA

Small C++ examples covering arrays, enumerations, pointers, structures, and
unions. Each `.cpp` file is a separate program with its own `main()` function.

## Build and run

From this directory, compile and run one example at a time:

```sh
g++ -std=gnu++17 array/sum.cpp -o array-sum
./array-sum
```

`gnu++17` is used because the array examples declare arrays whose size is read
at runtime, a compiler extension supported by GCC and Clang in GNU mode. The
example inputs below are illustrative; programs that read input will produce
different results for different values. In the sample console transcripts,
typed input is shown as it appears when entered in a terminal.

## Examples and sample output

### Arrays

#### [`array/display.cpp`](array/display.cpp)

Reads and displays five integers. The last line has a trailing space.

```text
enter the number of element
5
enter the array elements
1 2 3 4 5
1 2 3 4 5
```

#### [`array/largest.cpp`](array/largest.cpp)

Reads an array and prints its largest value.

```text
enter the number of elements
4
enter the elements
1 5 23 5
the largest number is 23
```

#### [`array/sorting.cpp`](array/sorting.cpp)

Sorts the entered integers in ascending order.

```text
Enter the number of elements: 5
Enter the array elements: 9 2 7 1 5
Sorted array: 1 2 5 7 9
```

#### [`array/sum.cpp`](array/sum.cpp)

Prints the sum and integer average of the entered array.

```text
enter the number of elements
3
the array elements
1 2 3
the sum of the numbers is : 6
the avg of the numbers is : 2
```

### Enumerations

#### [`ENUM/day.cpp`](ENUM/day.cpp)

Prints the underlying integer value of `MONDAY` (the first enum value is `0`).

```text
0
```

#### [`ENUM/day1.cpp`](ENUM/day1.cpp)

Uses a `switch` statement to print the selected day.

```text
Sunday
```

#### [`ENUM/sum.cpp`](ENUM/sum.cpp)

Selects the `add` operation and adds the two fixed values, 10 and 20.

```text
sun is 30
```

#### [`ENUM/version2.cpp`](ENUM/version2.cpp)

Selects `ADD` for the fixed values 10 and 5.

```text
Sum = 15
```

### Pointers

#### [`pointer/code.cpp`](pointer/code.cpp)

Displays the five values in a fixed array, one per line.

```text
1
2
3
4
5
```

#### [`pointer/fun.cpp`](pointer/fun.cpp)

Adds two entered integers by passing their addresses to a function.

```text
enter the number
7 8
the sum is 15
```

#### [`pointer/swap.cpp`](pointer/swap.cpp)

Swaps two fixed values through pointers.

```text
after the swap is 20 10
```

#### [`pointer/test.cpp`](pointer/test.cpp)

Prints the entered value twice: once by dereferencing a pointer and once
directly. The final line is the address of the variable; its exact value
changes between runs and systems.

```text
enetr the number you want
42
the value 42
the value 42
the value 0x...
```

### Structures

#### [`structure/arr.cpp`](structure/arr.cpp)

Reads five integers into a structure and prints their sum and integer average.

```text
enter the elements
2 4 6 8 10
the sum of the number is 30
the avg of the number is 6
```

#### [`structure/employee.cpp`](structure/employee.cpp)

Prints the fixed employee ID and salary.

```text
Employee ID: 101
Salary: 25000
```

#### [`structure/student.cpp`](structure/student.cpp)

Reads two students' single-character names and roll numbers, then prints them.

```text
enter the name of the student
A
enter the roll nuber os the student
1
enter the secound student name
B
enetr the roll number of the student
2
student list
the first student name is :A
the roll of the student is :1
the 2nd nae of the student is : B
the 2nd roll number os the student is :2
```

#### [`structure/sum.cpp`](structure/sum.cpp)

Adds two integers stored in a structure.

```text
enetr the two numbers
12 30
the sum of two number is 42
```

### Unions

#### [`union/firstcode.cpp`](union/firstcode.cpp)

Reads three floating-point values into members of the same union. Since the
members share storage, each input overwrites the previous one. On typical
systems, entering `1 2 3` leaves `3` in the union and prints `9` when that
value is read through all three member names. Reading a non-active union
member is not portable C++ behavior.

```text
enetr the numbers you want
1 2 3
the sum is 9
```

#### [`union/fun.cpp`](union/fun.cpp)

Reads a student's roll number and name, then stores either marks or a grade in
a union. This sample chooses marks. Input values are shown after each prompt.

```text
Enter Roll Number: 12
Enter Student Name: Alex
Choose Result Type (1 for Marks, 2 for Grade): 1
Enter Marks: 95

--- Student Details ---
Roll Number: 12
Name: Alex
Marks: 95
```

For a grade instead, choose `2` and enter a single character, such as `A`; the
details section will then print `Grade: A`.

#### [`union/size.cpp`](union/size.cpp)

Prints the sizes of the union's members and the union itself. Sizes depend on
the platform; this is a typical result on systems where `int` and `float` are
4 bytes and `char` is 1 byte.

```text
Size of int = 4 bytes
Size of float = 4 bytes
Size of char = 1 byte
Size of union = 4 bytes
```

#### [`union/student.cpp`](union/student.cpp)

Prints a roll number, then stores and prints marks in the same union.

```text
Roll Number = 101
Marks = 85.5
```
