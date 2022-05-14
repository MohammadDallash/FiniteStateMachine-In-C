
void FSM_int();


enum StatesEnum { State_A, State_B };
    
typedef enum StatesEnum StatesEnum;




typedef struct States
{
    StateNoParameters State_A;
    StateOneEnterParameter_int State_B;
}States;

extern States myStates ; //Extern tells the complier this variable exist and I am gonna use it but it is actually declared somewhere else

extern f_pointer_void_void* Update;

extern StatesEnum CurretState;



