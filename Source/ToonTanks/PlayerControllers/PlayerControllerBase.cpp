// 2020 Matthew Barham


#include "PlayerControllerBase.h"

void APlayerControllerBase::SetPlayerEnabledState(bool SetPlayerEnabled)
{
    if(SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
        APlayerControllerBase::bShowMouseCursor = true;
    }
    else
    {
        GetPawn()->DisableInput(this);
        APlayerControllerBase::bShowMouseCursor = false;
    }
}