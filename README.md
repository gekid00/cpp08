# CPP Module 08

42 school C++ module focusing on templated containers, iterators, and algorithms.
Covers STL usage patterns including `std::find`, `std::sort`, container adapters,
and iterator exposure through inheritance.

## Technologies

- C++98
- Makefile
- STL (Standard Template Library)

## Build Instructions

Each exercise is compiled independently from its own directory:

```bash
cd ex00 && make    # easyfind
cd ex01 && make    # span
cd ex02 && make    # mutantstack
```

Available Makefile targets: `make`, `make clean`, `make fclean`, `make re`.

## Exercises

### ex00 -- Easy Find

A function template `easyfind(T& container, int value)` that searches for an
integer in any STL container using `std::find`. Throws on failure.

```bash
cd ex00 && make && ./easyfind
```

### ex01 -- Span

A `Span` class that stores up to N integers and computes the shortest and longest
span (difference) between stored values. Supports bulk insertion via `addRange`.

```bash
cd ex01 && make && ./span
```

### ex02 -- MutantStack

A `MutantStack` class that inherits from `std::stack` and exposes iterators
to the underlying `std::deque` container, making the stack iterable.

```bash
cd ex02 && make && ./mutantstack
```

## Key Concepts

- Function and class templates
- STL containers (`std::vector`, `std::stack`, `std::deque`)
- STL algorithms (`std::find`, `std::sort`, `std::min_element`, `std::max_element`)
- Iterator types and range-based operations
- Container adapter internals (accessing `std::stack::c`)
- Orthodox Canonical Form
