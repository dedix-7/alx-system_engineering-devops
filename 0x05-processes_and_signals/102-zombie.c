#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/**
 * infinite_while - an infinite while loop to sleep
 * no arguments
 * Return: 0 on sucess
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * childpro - a function to print the zombie processes
 * nor arguments
 * Return: void
 */
void childpro(void)
{
	pid_t child;

	child = fork();

	if (!(child))
		printf("Zombie process created, PID: %d\n", getpid());
}
/**
 * main - a program toi create 5 zombies
 * no arguments
 * Return: 0 on sucess
 */
int main(void)
{
	pid_t parent;
	int i;

	parent = getpid();
	for (i = 0; i < 5; i++)
	{
		if (getpid() == parent)
			childpro();
	}
	if (getpid() == parent)
		infinite_while();
	return (0);
}
