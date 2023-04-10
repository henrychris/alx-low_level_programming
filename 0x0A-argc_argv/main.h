#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

const int TWENTY_FIVE_CENTS = 25;
const int TEN_CENTS = 10;
const int FIVE_CENTS = 5;
const int TWO_CENTS = 2;
const int ONE_CENT = 1;

int handle_ten_cents(int cents, int count);
int handle_25_cents(int cents, int count);
int handle_five_cents(int cents, int count);
int handle_two_cents(int cents, int count);
#endif
