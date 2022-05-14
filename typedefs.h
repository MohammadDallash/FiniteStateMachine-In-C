typedef void (*f_pointer_void_void)(void);
typedef void (*f_pointer_void_int)(int);

typedef void (*f_pointer_void_int_int)(int, int);



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


