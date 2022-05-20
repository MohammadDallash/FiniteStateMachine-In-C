#include <stdio.h>
#include "FSMmanager.h"




int main()
{


     
   FSM_SetUp();
    
    CurretState = State_B;

    myStates.State_B.Enter(4);
    
    Update[CurretState]();


}