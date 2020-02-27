#include <caml/mlvalues.h>                                                                            
#include <stdio.h>                                                                                    
                                                                                                      
CAMLprim value                                                                                        
caml_bar(value a) {                                                                                   
    int c_a = Int_val(a);                                                                             
    printf("bar received: %d", c_a);                                                                  
    return Val_unit;                                                                                  
} 
