# simple-password-generator

## Introduction
This program standard outputs some random strings for making passwords. You can get several passwords by just type `pw` on your terminal. The output passwords is three kind of type as combinations of (1) only numbers (2) numbers + alphabets (3) numbers + alphabets + signs, and you can choice a password as you like.

## Install and how to use
1. `make` or compile as `gcc -o pw simplepwgen.c`, then `pw` excecutable file is maked.
2. Move `pw` excecutable file into any directory which the path is added into $PATH, such as */usr/bin*, *~/bin*.
3. Open a terminal, and call `pw` (There is no option, so just type the file name)
4. A real example of output as shown below.

```
$ pw
Simple Password Generator - 8 digits / 1 part
0-9                     05112787 29163888 84840075 
0-9 + a-z + A-Z         R51KgFYo fZ9BGT2d BZ52Lry2 
0-9 + a-z + A-Z + sign  #g+YnHiw ?udKF&6* vy22^KO\ 
```

## How simple-password-generator makes passwords
1. Prepare a table of ascii characters, which align of 0-9, a-z, A-Z, and signs.
2. Make random numbers as a key of executed time.
3. Choice a character by the ascii table and the random number.
4. Repeat choicing a random character several times.
5. Put random characters to stdout

## For Windows user who has no compiler
Please use `pw.exe` file that I checked it works on Windows XP, VISTA, 7.
