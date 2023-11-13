#include "shell.h"
/**
 * stringcpy - copy a string
 * @char_ptr1: destination string
 * @char_ptr2: source string
 * Return: pointer to the destination string
 */
char *stringcpy(char *char_ptr1, const char *char_ptr2)
{
char *dest = char_ptr1; /*Save the start of the destination string*/
while ((*char_ptr1++ = *char_ptr2++))/*Copy char until null terminator*/
	;
return (dest); /*Return the start of the destination string*/
}

