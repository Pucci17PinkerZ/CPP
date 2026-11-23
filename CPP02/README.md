*This project has been created as part of the 42 curriculum by nfiora-d.*

# CPP 02

![42 Badge](https://img.shields.io/badge/42-Project-black?style=flat-square&logo=42)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Author](https://img.shields.io/badge/Author-nfiora--d-success?style=flat-square)
---

## description
**CPP02** is the second module of the CPP language in the 42 common core. In this module we discover **ad-hoc polymorphism**, **operator overloading** and the **Orthodox Canonical Form** by building our own fixed-point number class (`Fixed`) and progressively making it more useful.

### ex00 — My First Class in Orthodox Canonical Form
A minimal `Fixed` class written in Orthodox Canonical Form: default constructor, copy constructor, copy assignment operator and destructor, plus `getRawBits` and `setRawBits`.

### ex01 — Towards a more useful fixed-point number class
Adds the `int` and `float` constructors, the `toFloat` / `toInt` conversions and the `<<` stream insertion operator, so a `Fixed` can be printed as a float.

### ex02 — Now we're talking
Overloads the comparison (`>`, `<`, `>=`, `<=`, `==`, `!=`), arithmetic (`+`, `-`, `*`, `/`) and increment / decrement (`++`, `--`) operators, and adds static `min` / `max` helpers.

## instruction
first clone this repo
```bash
git clone https://github.com/Pucci17PinkerZ/CPP.git &&
cd CPP/CPP02
```

Every ex directory has its own Makefile, feel free to explore!:
```bash
make
```
> The available Makefile rules are: `make`, `make clean`, `make fclean`, `make re`.

## ressource
### links given by the subject
* https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html
* https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
* https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html
* https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html

### other links
* https://cppreference.com/
* https://cplusplus.com/reference/
* https://www.learncpp.com/

## IA mention
IA was used only to deeply understand some CPP mechanics,
and to learn how to build classes with rigor, nothing else.

## Thanks to have read this far ! <3
