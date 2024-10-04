#include <stdio.h>
#include "patch.h"

int main(void)
{
#ifdef HAI
	printf("Enabled HAI define");
#endif
#ifdef HELLO
	printf("Enabled HELLO define");
#endif
#ifdef BYE
	printf("Enabled BYE define");
#endif

	return 0;
}	
