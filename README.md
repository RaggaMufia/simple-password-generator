# simple-password-generator

## Introduction
This program standard outputs some random strings for making passwords. You can get several passwords by just type ``pw`` on your terminal. The output passwords is three kind of type as combinations of (1) only numbers (2) numbers + alphabets (3) numbers + alphabets + signs, and you can choice a password as you like.

## How to use
When you set pw executable file in ~/bin, then call pw on your terminal as shown below.

```
$ ~/bin/pw
Simple Password Generator - 8 digits / 1 part
0-9            05112787 29163888 84840075 
0-9 + a-z + A-Z    R51KgFYo fZ9BGT2d BZ52Lry2 
0-9 + a-z + A-Z + sign    #g+YnHiw ?udKF&6* vy22^KO\ 
```

You can move pw file into any directory you like.


## How simple-password-generator makes passwords
+ prepare ascii characters table.
+ make random numbers as key of time
+ put random characters to stdout


## Make
gcc -o pw simplepwgen.c
