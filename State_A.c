#include "State_A.h"
#include "FSMmanager.h"
void State_A_Enter()
{
    CurretState = State_A;
     printf("State_A_Entered\n");
}


void State_A_Update()
{
     printf("State_A_Updateing\n");
}


void State_A_Output()
{
     printf("State_A_output\n");
}



void State_A_Exist()
{
     printf("State_A_Exist\n");
}

void State_A_Init()
{
     myStates.State_A.Enter  = State_A_Enter;
     myStates.State_A.Update   = State_A_Update;
     myStates.State_A.Output = State_A_Output;
     myStates.State_A.Exist = State_A_Exist;
     Update[State_A] = myStates.State_A.Update;
}
