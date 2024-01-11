#include <stdio.h>

int main()
{
    int d, m, y;
    printf("enter the date");
    scanf("%d",&d);
    printf("enter the month");
    scanf("%d",&m);
    printf("enter the year");
    scanf("%d",&y);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 9 || m == 12)
    {
        if (d == 31)
        {
            if (m == 12)
            {
                d = 1;
                m = 1;
                ++y;
            }
            else
            {
                d = 1;
                ++m;
            }
        }
        else
        {
            if (m == 4 || m == 6 || m == 10 || m == 11)
            {
                if (d == 30)
                {
                    d = 1;
                    ++m;
                }
            }
            else
            {
                if (y % 100 != 0 && y % 4 == 0)
                {
                    if (d == 29)
                    {
                        if (m == 2)
                        {
                            ++m;
                            d = 1;
                        }
                        else
                        {
                            ++d;
                        }
                    }
                    else
                    {
                        ++d;
                    }
                }
                else
                {
                    if (d == 28)
                    {
                        if (m == 2)
                        {
                            ++m;
                            d = 1;
                        }
                        else
                        {
                            ++d;
                        }
                    }
                    else
                    {
                        ++d;
                    }
                }
            }
        }

        printf("%d %d %d", d, m, y);
    }

    return 0;
}

