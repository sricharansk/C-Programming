#include <stdio.h>

void main()
{
    static x=3;
    x++;
    if(x<=5)
    {
    printf("hAI");
    main();
    }
}