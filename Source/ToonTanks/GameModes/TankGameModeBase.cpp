// 2020 Matthew Barham

#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
    // get references and game win/lose conditions

    // call HandleGameStart() to initialize the start countdown, turret activation, pawn check, etc.
}
void ATankGameModeBase::ActorDied(AActor *DeadActor)
{
    // check what type of Actor died; if turret, tally, if player, lose condition
}
void ATankGameModeBase::HandleGameStart()
{
    // initialize the start countdown, turret activation, pawn check, etc.
    // call Blueprint version GameStart()
}
void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
    // see if the player has destroyed all the turrets, show win result
    // else if turret destroyed player, show lose result
    // call blueprint version GameOver()
}