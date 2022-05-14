typedef void (*f_pointer_void_void)(void);
typedef void (*f_pointer_void_int)(int);



typedef struct StateNoParameters
{
    f_pointer_void_void Enter;
    f_pointer_void_void Update;
    f_pointer_void_void Output;
    f_pointer_void_void Exist;
} StateNoParameters;

typedef struct StateOneEnterParameter_int
{
    f_pointer_void_int Enter;
    f_pointer_void_void Update;
    f_pointer_void_void Output;
    f_pointer_void_void Exist;
    int parameter;
} StateOneEnterParameter_int;

