#include <caml/mlvalues.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

CAMLprim value caml_is_prime(value m_p)
{
    int maybe_prime = Int_val(m_p), factor;
    for (factor = 2; factor < (int)floor(sqrt(maybe_prime)); factor++)
    {
        if (maybe_prime % factor == 0)
            return Val_false;
    }
    return Val_true;
}
