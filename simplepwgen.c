/*
 * Simple Password Generator, written by emeda
 * Make passwords by using rand() function, and outputs to stdout.
 * 2008-02-08 ver. 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIGITS 8 /* the digit number of generated password */
#define LOOP 3 /* the number of password sets as one time */

/*
 * Make ascii table of 95 characters
 * chtable[0-9] = 0-9
 * chtable[10-35] = a-z
 * chtable[36-61] = A-Z
 * chtable[62-77] = sign mark 1 (' '-'/')
 * chtable[78-84] = sign mark 2 (':'-'@')
 * chtable[85-90] = sign mark 3 ('['-'`')
 * chtable[91-94] = sign mark 4 ('{'-'~')
 */
void make_chtable(char chtable[])
{
  int i;

  /* 0-9 (10) */
  for (i = 0; i < 10; i++) {
    chtable[i] = i + '0';/* chtable[0-9] */
  }
  /* a-z (26) */
  for (i = 0; i < 26; i++) {
    chtable[i + 10] = i + 'a'; /* chtable[10-35] */
  }
  /* A-Z (26) */
  for (i = 0; i < 26; i++) {
    chtable[i + 36] = i + 'A'; /* chtable[36-61] */
  }
  /* sign mark 1 (16) */
  for (i = 0; i < 16; i++) {
    chtable[i + 62] = i + ' '; /* chtable [62-77] */
  }
  /* sign mark 2 (7) */
  for (i = 0; i < 7; i++) {
    chtable[i + 78] = i + ':'; /* chtable [78-84] */
  }
  /* sign mark 3 (6) */
  for (i = 0; i < 6; i++) {
    chtable[i + 85] = i + '['; /* chtable [85-90] */
  }
  /* sign mark 4 (4) */
  for (i = 0; i < 4; i++) {
    chtable[i + 91] = i + '{'; /* chtable [91-94] */
  }
}

void stdout_password(int digits, int loop, int begin, int end)
{
  int rnd;
  int i, j;
  char chtable[95];

  make_chtable(chtable);
  for(i = 0; i < loop; i++){
    for(j =0; j < digits; j++){
      rnd = rand() % (end + 1) + begin;
      printf("%c", chtable[rnd]);
    }
    putchar(' ');
  }

}

int main()
{
  int rnd;
  int i, j;

  printf("Simple Password Generator - %d digits / 1 part\n", DIGITS);
  srand((unsigned)time(NULL));

  printf("0-9 \t\t\t");
  stdout_password(DIGITS, LOOP, 0, 9);
  putchar('\n');

  printf("0-9 + a-z + A-Z \t");
  stdout_password(DIGITS, LOOP, 0, 61);
  putchar('\n');

  printf("0-9 + a-z + A-Z + sign \t");
  stdout_password(DIGITS, LOOP, 0, 94);
  putchar('\n');

  return(0);
}
