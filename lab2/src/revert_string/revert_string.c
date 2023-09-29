#include "revert_string.h"
#include <stdio.h>

void RevertString(char s[])
{
int i,new;
int swap = 0;
for(new=0; s[new] != 0; new++);
for(i=0; i<new/2; i++)
{
    swap = s[i];
    s[i] = s[new - 1 - i];
    s[new -1 -i] = swap;
}
for (i = 0; i<new; i++)
    putchar(s[i]);
}	


