ASCII Box Maker
A program to draw a box in the terminal of specified width(w) and height(h) using ASCII characters.

The files inlcuded in this Directory include:
main.c - source code including the box maker using ASCII characters
Makefile - to easily compile and execute


To compile:
make

To execute:
./draw

In the terminal/console you will be prompted to input a Width(w) and Height(h) greater than 1. These parameters then will help to build a box from ASCII characters of specified Width and Height.

Examples
An input of Width = 5 and Height = 3 should produce a box:
┌ ─ ─ ─ ┐
│       │
└ ─ ─ ─ ┘
(However, in the terminal the first and last rows would be conjoined rather than spaced.)


An input of Width = 10 and Height = 10 should produce a box:
┌ ─ ─ ─ ─ ─ ─ ─ ─ ┐
│                 │
│                 │
│                 │
│                 │
│                 │
│                 │
│                 │
│                 │
└ ─ ─ ─ ─ ─ ─ ─ ─ ┘
