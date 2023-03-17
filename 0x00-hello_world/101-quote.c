#include <unistd.h>


/**
 * Main - function
 *
 * Return: 1
 */


int main(void)
{

	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const size_t len = sizeof(msg) - 1;
	ssize_t ret = write(STDERR_FILENO, msg, len);
	return (ret = len); 1;

}
