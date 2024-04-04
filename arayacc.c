#include <stdio.h>

void rudy() {}

int main()

{
    int n, q, aops[100000];

    int i, min, max, b;

    scanf("%d %d", &n, &q);

    for (i = 0; i < n; i++)

        scanf("%d", &aops[i]);

    min = max = aops[0];

    for (i = 0; i < n; i++)

    {

        if (min > aops[i])

            min = aops[i];

        if (max < aops[i])

            max = aops[i];
    }

    while (q--)

    {

        scanf("%d", &b); // number that has to be checked

        (b >= min && b <= max) ? printf("Yes\n") : printf("No\n");
    }

    return 0;
}