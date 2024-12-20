// <copyright file="TerjeSettingsCollection.c" author="Terje Bruoygard">
//     This repository does not provide full code of our mods need to be fully functional.
//     That's just interfaces and simple logic that may be helpful to other developers while using our mods as dependencies.
//     Modification, repackaging, distribution or any other use of the code from this file except as specified in the LICENSE.md is strictly prohibited.
//     Copyright (c) TerjeMods. All rights reserved.
// </copyright>

modded class TerjeSettingsCollection
{
	static int RADIATION_COMMON_DEC_PER_SEC;
	static int RADIATION_MEDS_DEC_PER_SEC;
	static int RADIATION_CRITICAL_DMG_MULTIPLIER;
	static int RADIATION_LIGHT_SYMPTOM_CHANCE;
	static int RADIATION_HEAVY_SYMPTOM_CHANCE;
	static int RADIATION_VOMIT_FORCE_MODIFIER;
	static int RADIATION_TRANSFER_PER_SEC;
	static int RADIATION_TRANSFER_MOD;
	static int RADIATION_TRANSFER_GEAR;
	static int RADIATION_BUFFER_COMMON_DEC_PER_SEC;
	static int RADIATION_BUFFER_MEDS_DEC_PER_SEC;
	static int RADIATION_BUFFER_LIGHT_DISEASE_THRESHOLD;
	static int RADIATION_BUFFER_HEAVY_DISEASE_THRESHOLD;
	static int RADIATION_BUFFER_CRITICAL_DISEASE_THRESHOLD;
	static int RADIATION_BUFFER_LIGHT_DISEASE_INCREMENT;
	static int RADIATION_BUFFER_HEAVY_DISEASE_INCREMENT;
	static int RADIATION_BUFFER_CRITICAL_DISEASE_INCREMENT;
	static int RADIATION_IMMUNITY_EXP_GAIN;
	static int RADIATION_AREAS_POWER_MOD;
	static int RADIATION_DAMAGE_ZOMBIES;
	static int RADIATION_DAMAGE_ANIMALS;
	static int RADIATION_DO_ITEMS_ACCUMULATE;
	static int RADIATION_DO_VEHICLES_ACCUMULATE;
	static int RADIATION_TRANSFER_WITH_PARENT;
	static int RADIATION_ITEM_LOSE_PER_SEC;

	override void OnInit()
	{
		super.OnInit();
		RegisterRegion("Radiation", "General settings");
		RADIATION_COMMON_DEC_PER_SEC = RegisterSettingFloat("Radiation.CommonDecPerSec", "Radiation", "The number of radiation disease agents the player loses every second without drugs.", 0.001, true);
		RADIATION_MEDS_DEC_PER_SEC = RegisterSettingFloat("Radiation.MedsDecPerSec", "Radiation", "The number of radiation disease agents the player loses every second with drugs.", 0.003, true);
		RADIATION_CRITICAL_DMG_MULTIPLIER = RegisterSettingFloat("Radiation.CriticalDmgMultiplier", "Radiation", "Damage modifier received by a player during terminal stage of zombie virus.", 1.5, true);
		RADIATION_LIGHT_SYMPTOM_CHANCE = RegisterSettingFloat("Radiation.LightSymptomChance", "Radiation", "Chance to make light (level 2+) radiation symptoh. Value from 0 to 1.", 0.005, true);
		RADIATION_HEAVY_SYMPTOM_CHANCE = RegisterSettingFloat("Radiation.HeavySymptomChance", "Radiation", "Chance to make heavy (level 3) radiation symptoh. Value from 0 to 1.", 0.004, true);
		RADIATION_VOMIT_FORCE_MODIFIER = RegisterSettingFloat("Radiation.VomitForceModifier", "Radiation", "Modifier responsible for the strength of vomiting. The higher value make more draining of water and energy the player will receive.", 1.0, true);
		RADIATION_TRANSFER_GEAR = RegisterSettingFloat("Radiation.TransferFromGear", "Radiation", "Determines the conversion modifier for converting a single rengen accumulated in the player's equipment into the body.", 1.0, true);
		RADIATION_BUFFER_COMMON_DEC_PER_SEC = RegisterSettingFloat("Radiation.BufferCommonDecPerSec", "Radiation", "Determines the value of radiation decrement from player body (from buffer, not from radiation disease) for one second without antirad.", 0.25, true);
		RADIATION_BUFFER_MEDS_DEC_PER_SEC = RegisterSettingFloat("Radiation.BufferMedsDecPerSec", "Radiation", "Determines the value of radiation decrement from player body (from buffer, not from radiation disease) for one second. This value will be multiplied by the antirad level.", 1.0, true);
		RADIATION_BUFFER_LIGHT_DISEASE_THRESHOLD = RegisterSettingFloat("Radiation.BufferLightDiseaseThrshld", "Radiation", "Determines the value that must accumulate in the radiation buffer for a light form of radiation sickness is beginning.", 100.0, true);
		RADIATION_BUFFER_HEAVY_DISEASE_THRESHOLD = RegisterSettingFloat("Radiation.BufferHeavyDiseaseThrshld", "Radiation", "Determines the value that must accumulate in the radiation buffer for a heavy form of radiation sickness is beginning.", 500.0, true);
		RADIATION_BUFFER_CRITICAL_DISEASE_THRESHOLD = RegisterSettingFloat("Radiation.BufferCriticalDiseaseThrshld", "Radiation", "Determines the value that must accumulate in the radiation buffer for a critical form of radiation sickness is beginning.", 1500.0, true);
		RADIATION_BUFFER_LIGHT_DISEASE_INCREMENT = RegisterSettingFloat("Radiation.BufferLightDiseaseIncrement", "Radiation", "Determines the value that will be added per second to radiation sickness when the light threshold is reached in the radiation buffer.", 0.005, true);
		RADIATION_BUFFER_HEAVY_DISEASE_INCREMENT = RegisterSettingFloat("Radiation.BufferHeavyDiseaseIncrement", "Radiation", "Determines the value that will be added per second to radiation sickness when the heavy threshold is reached in the radiation buffer.", 0.015, true);
		RADIATION_BUFFER_CRITICAL_DISEASE_INCREMENT = RegisterSettingFloat("Radiation.BufferCriticalDiseaseIncrement", "Radiation", "Determines the value that will be added per second to radiation sickness when the critical threshold is reached in the radiation buffer.", 0.05, true);

		RegisterRegion("Radiation", "ImmunitySkill");
		RADIATION_IMMUNITY_EXP_GAIN = RegisterSettingInt("Radiation.ImmunityExpGain", "Radiation", "Sets the value of experience points that the player will gain after the radiation disease is completely cured. This parameter is also affected by 'ExperienceGainModifier'.", 100, true);

		RegisterRegion("Radiation", "TerjeScriptableAreas");
		RADIATION_AREAS_POWER_MOD = RegisterSettingFloat("Radiation.AreasPowerMod", "Radiation", "Power modifier for all radioactive areas.", 1.0, true);
		RADIATION_DAMAGE_ZOMBIES = RegisterSettingBool("Radiation.DamageZombies", "Radiation", "Determines whether radiation do damage to zombies. Default values is false.", false, true);
		RADIATION_DAMAGE_ANIMALS = RegisterSettingBool("Radiation.DamageAnimals", "Radiation", "Determines whether radiation do damage to animals. Default values is true.", true, true);
		RADIATION_DO_ITEMS_ACCUMULATE = RegisterSettingBool("Radiation.DoItemsAccumulate", "Radiation", "Determines whether radiation will accumulate by items inside the radioactive area. Default values is true.", true, true);
		RADIATION_DO_VEHICLES_ACCUMULATE = RegisterSettingBool("Radiation.DoVehiclesAccumulate", "Radiation", "Determines whether radiation will accumulate by vehicles inside the radioactive area. Default values is true.", true, true);
		RADIATION_TRANSFER_WITH_PARENT = RegisterSettingBool("Radiation.TransferWithParent", "Radiation", "Determines whether radiation can be transfered between object to its parent. Default values is true.", true, true);
		RADIATION_ITEM_LOSE_PER_SEC = RegisterSettingFloat("Radiation.ItemLosePerSec", "Radiation", "How many rentgens of radiation accumulated in the item will it lose per second.", 0.1, true);
	}
}
