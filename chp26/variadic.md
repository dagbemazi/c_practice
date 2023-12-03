# Variadic Functions

When we declare functions with arguments, the number of arguments is
always fixed. Calling the function with fewer or more arguments will result in an error.

### LImitation with declaring a traditional function with arguments

```
int add(int a, int b)
```

The `add` function takes in exactly 2 arguments and returns a integer sum of `a` and `b`

Calling the function like this - `add(2, 3, 4)` or `add(1)` will result in:

```
error: too many/few arguments to function add()
```
What if we want to extend our `add` function to print the sum of 
an infinite amount of arguments. Then we would need to declare thousands of variables to store each integer.
But we know that isn't practical.

### Solution

Variadic functions come to the rescue! The C standard library provides the `stdarg.h` header which has macros to be used in declaring functions that will take any variable amount of arguments.

##### Declaring a Variadic Function

You can declare a variadic function like this:
```
#include <stdarg.h>

int add(int a, int b, ...)
```

The `...` is the prototype used to create a variable number of arguments to a function.

NB: A variadic functions takes at least one normal argument!

The C library provides the following macros to work with variadic functions:
```
va_start(va_list ap, paramsN);
va_arg(val_list, type);
va_copy(va_list dest, va_list src);
va_end(va_list ap);
``` 

The `va_list` is a type the `<stdarg.h>` library declares.

##### Usage

We would learn how some of these prototypes work by modifying our
`add` function to take variable arguments


