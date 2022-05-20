#include "FSMmanager.h"
#include "State_A.h"
#include "State_B.h"
#include "StatesInstances.h"
#include "MethodsInstances.h"
#include <stdlib.h>
#define NOfStates 2


f_pointer_void_void* Update;


States myStates;

void FSM_SetUp()
{
    Update = (f_pointer_void_void*)calloc(NOfStates, sizeof(f_pointer_void_void));
    /*we cannot free the memory we allocated for the array as we are using it throughout
    the whole program which is running consciously as we are jumping from a state to another one*/
    State_A_SetUp();
    State_B_SetUp();

};

StatesEnum CurretState;