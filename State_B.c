#include "State_B.h"
#include "FSMmanager.h"

void State_B_Enter(int parameter)
{
     CurretState = State_B;
     myStates.State_B.parameter=parameter;
     printf("State_B_Entered and the enter Parameter is %i \n", myStates.State_B.parameter);
}


void State_B_Update()
{
     printf("State_B_Updateing\n");
}


void State_B_Output()
{
     printf("State_B_output\n");
}





void State_B_Exist()
{
     printf("State_B_Exist\n");
}


void State_B_Init()
{
     myStates.State_B.Enter  = State_B_Enter;
     myStates.State_B.Update   = State_B_Update;
     myStates.State_B.Output = State_B_Output;
     myStates.State_B.Exist = State_B_Exist;
     Update[State_B] = myStates.State_B.Update;

}
