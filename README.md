# ASCII Box Maker
A program to draw a box in the terminal of specified width (w) and height (h) using ASCII characters.

The files inlcuded in this Directory include:

`main.c` - source code including the box maker using ASCII characters

`Makefile` - to easily compile and execute

### Getting Started
1. Obtain a copy of the Git Repository from GitHub

    `git clone https://github.com/rikeshhirani1/ASCIIBoxMaker.git`

3. Go to the root folder of the Cloned Repository `ASCIIBoxMaker`

    `cd ASCIIBoxMaker`

4. Compile C program 

    `make`
    
5. Execute program

    `./draw`

### Input
In the terminal/console you will be prompted to input a Width(w) and Height(h) greater than 1. These parameters will help to build a box from ASCII characters of specified Width and Height.

### Examples
- An input of Width = 5 and Height = 3 should produce a box:

```
┌ ─ ─ ─ ┐
│       │
└ ─ ─ ─ ┘
```

(However, in the terminal the rows and rows would be conjoined rather than spaced.)


- An input of Width = 10 and Height = 10 should produce a box:

```
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
```
