#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (!cents)
	{
		printf("0\n");
		return (0);
	}

	if (cents < TWENTY_FIVE_CENTS)
	{
		printf("%d\n", handle_ten_cents(cents, 0));
	}
	else
		printf("%d\n", handle_25_cents(cents, 0));

	return (0);
}

/**
 * handle_25_cents - calculates the minimum number of
 * coins required for 25 cents
 * @cents: the amount of money left in cents
 * @count: the current count of coins
 * Return: the minimum number of coins required for 25 cents
 */
int handle_25_cents(int cents, int count)
{
	/* Calculate the remainder after dividing by 25 cents */
	int rem = cents % TWENTY_FIVE_CENTS;

	/*
	 * If the remainder is not zero, handle
	 * the remaining coins with handle_ten()
	 */
	if (rem)
	{
		/* how many times does 25 cents go in cents*/
		int times = cents / TWENTY_FIVE_CENTS;
		/* subtract 25 that many times */
		cents -= TWENTY_FIVE_CENTS * times;
		return (handle_ten_cents(cents, times));
	}
	/* add the current coin count */
	return ((cents / TWENTY_FIVE_CENTS) + count);
}

/**
 * handle_ten_cents - calculates the minimum number
 * of coins required for 10 cents
 * @cents: the amount of money left in cents
 * @count: the current count of coins
 * Return: the minimum number of coins required for 10 cents
 */
int handle_ten_cents(int cents, int count)
{
	int rem;
	/*
	 * If the money is less than 10 cents,
	 * handle the remaining coins with handle_ten()
	 */
	if (cents < TEN_CENTS)
	{
		return (handle_five_cents(cents, count));
	}

	rem = cents % TEN_CENTS;

	if (rem)
	{
		int times;

		times = cents / TEN_CENTS;

		cents -= TEN_CENTS * times;
		return (handle_five_cents(cents, times + count));
	}
	return ((cents / TEN_CENTS) + count);
}

/**
 * handle_five_cents - calculates the minimum number
 * of coins required for 5 cents
 * @cents: the amount of money left in cents
 * @count: the current count of coins
 * Return: the minimum number of coins required for 5 cents
 */
int handle_five_cents(int cents, int count)
{
	int rem;

	if (cents < FIVE_CENTS)
		return (handle_two_cents(cents, count));

	rem = cents % FIVE_CENTS;

	if (rem)
	{
		int times = cents / FIVE_CENTS;

		cents -= FIVE_CENTS * times;
		return (handle_five_cents(cents, times + count));
	}
	return ((cents / FIVE_CENTS) + count);
}

/**
 * handle_two_cents - calculates the number
 * of 2-cent coins needed to make change
 * @cents: the total number of cents left to make change for
 * @count: the current count of coins
 * Return: the total count of coins needed to make change
 */
int handle_two_cents(int cents, int count)
{
	int rem;

	/*
	 * if it's less than two cents,
	 * return the amount of 1 cent coins
	 */
	if (cents < TWO_CENTS)
		return ((cents / ONE_CENT) + count);

	rem = cents % TWO_CENTS;

	if (rem)
	{
		int times = cents / TWO_CENTS;

		cents -= TWO_CENTS * times;
		return ((cents / ONE_CENT) + times + count);
	}
	return ((cents / TWO_CENTS) + count);
}
