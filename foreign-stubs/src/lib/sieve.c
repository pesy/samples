#include <caml/mlvalues.h>
#include <stdio.h>
#include <stdlib.h>

int MAX = 1000000;

CAMLprim value caml_sieve_last_prime()
{
    int *numbers = (int *)calloc(MAX, sizeof(int));
    numbers[0] = 1;
    numbers[1] = 1;
    int number, latest_prime;
    for (number = 2; number <= MAX; number++)
    {
        if (!numbers[number])
        {
            latest_prime = number;
            int next = 2 * number;
            while (next <= MAX)
            {
                numbers[next] = 1;
                next += number;
            }
        }
    }
    free(numbers);
    return Val_int(latest_prime);
}
