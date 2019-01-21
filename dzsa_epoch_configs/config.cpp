/*
	Epoch Mod for DayZ Standalone
	
	FileName: config.cpp

	Authors: DayZ SA Epoch Dev Team and Community Contributors
	https://github.com/EpochModTeam/DayZ_SA_Epoch/blob/experimental/README.md	
	
	Licensing:
	https://github.com/EpochModTeam/DayZ_SA_Epoch/blob/experimental/LICENSE.md
*/

class CfgPatches
{
	class dzsa_epoch_configs
	{
		requiredAddons[] = {"DZ_Data", "dzsa_epoch_core"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgMods
{
	class EPOCH_Configs
	{
		dir = "Epoch";
		picture = "mod.paa";
		action = "http://epochmod.com";
		hideName = 1;
		hidePicture = 1;
		name = "Epoch";
		credits = "Epoch";
		author = "Epoch Mod Dev Team";
		authorID = "0"; 
		version = "1.0"; 
		extra = 0;
		type = "mod";
	};
};

#include "\emt\dzsa_epoch_configs\Configs\CfgVehicles.cpp"