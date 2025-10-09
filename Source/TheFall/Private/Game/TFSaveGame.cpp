// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/TFSaveGame.h"
#include "Interface/SaveActorInterface.h"

void UTFSaveGame::SetSaveActorData(TMap<FGuid, FSaveActorData> Data)
{
	SaveableActorData = Data;
}

TMap<FGuid, struct FSaveActorData> UTFSaveGame::GetSaveActorData()
{
	return SaveableActorData;
}

void UTFSaveGame::SetCurrentLevel(const FName Level)
{
	CurrentlyLoadedLevel = Level;
}

FName UTFSaveGame::GetCurrentData()
{
	return CurrentlyLoadedLevel;
}

void UTFSaveGame::SetPlayerData(FSaveActorData Data)
{
	PlayerData = Data;
}

FSaveActorData UTFSaveGame::GetPlayerData()
{
	return PlayerData;
}
