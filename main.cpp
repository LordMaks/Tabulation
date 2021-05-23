#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <cmath>

#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '

#define COND1(x) (x) <= 0
#define FUNC1(x) log(x + (sqrt(pow(x, 2) +1)))

#define COND2(x) (x) > 0 && (x) <= 5
#define FUNC2(x) sin(x+(2/(x-1)))
#define FUNC3(x) (-x) + 2

#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))

int main()
{
    double a = -6, b = 6.0, x, h = 0.3;

    printf("x:\t");
    for (x = a; x <= b; x += h)
    {
        printf("%6.2f%c", x, PUT_DELIM(x, h, b));
    }

    printf("y:\t");
    for (x = a; x <= b; x += h)
    {
        printf("%6.3f%c", FUNC(x), PUT_DELIM(x, h, b));
    }

    return 0;
}
