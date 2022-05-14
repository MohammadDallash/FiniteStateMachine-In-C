
#ifndef HEADER_H_NAME
#define HEADER_H_NAME
typedef struct StateNoParameters
{
    f_pointer_void_void Enter;
    f_pointer_void_void Update;
    f_pointer_void_void Output;
    f_pointer_void_void Exit;
} StateNoParameters;

typedef struct StateOneEnterParameter_int
{
    f_pointer_void_int Enter;
    f_pointer_void_void Update;
    f_pointer_void_void Output;
    f_pointer_void_void Exit;
    int parameter;
} StateOneEnterParameter_int;


typedef struct StateOneEnterParameter_int_int
{
    f_pointer_void_int Enter;
    f_pointer_void_void Update;
    f_pointer_void_void Output;
    f_pointer_void_void Exit;
    int parameter1;
    int parameter2;
} StateOneEnterParameter_int_int;
#endif


