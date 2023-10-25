/*

     * * * * * *
    * * * * * *
   * * * * * *
  * * * * * *
 * * * * * *

 */
#include <stdio.h>
int main1()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/*

     * * * * * *
    * * * * * *
   * * * * * *
  * * * * * *
 * * * * * *

 */
#include <stdio.h>
int main2()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 6; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//-----------------
/*
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
 */
#include <stdio.h>
int main3()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//-----------------
/*
 * * * * * * * * * *
 * * * *     * * * *
 * * *         * * *
 * *             * *
 *                 *
 *                 *
 * *             * *
 * * *         * * *
 * * * *     * * * *
 * * * * * * * * * *
 */
#include <stdio.h>
int main4()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//-----------------
/*

* * * * * * * * * *
  * * * * * * * *
    * * * * * *
      * * * *
        * *
        * *
      * * * *
    * * * * * *
  * * * * * * * *
* * * * * * * * * *

 */
#include <stdio.h>
int main5()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i - 1; j++)
        {
            printf("  ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}

//-----------------
/*

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *

 */
#include <stdio.h>
int main6()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//-----------
/*

*
* *
* * *
* * * *
* * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>
int main7()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

//-----------

/*

         * *
       * * * *
     * * * * * *
   * * * * * * * *
 * * * * * * * * * *
 * * * * * * * * * *
   * * * * * * * *
     * * * * * *
       * * * *
         * *

*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        for (j = 1; j <= 6 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
