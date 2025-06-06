// <copyright file="PPERequester_DeathDarkening.c" author="Terje Bruoygard">
//     This repository does not provide full code of our mods need to be fully functional.
//     That's just interfaces and simple logic that may be helpful to other developers while using our mods as dependencies.
//     Modification, repackaging, distribution or any other use of the code from this file except as specified in the LICENSE.md is strictly prohibited.
//     Copyright (c) TerjeMods. All rights reserved.
// </copyright>

modded class PPERequester_DeathDarkening
{
	override protected void OnStart(Param par = null)
	{
		super.OnStart(par);
		SetTargetValueFloat(PPEExceptions.EXPOSURE,PPEExposureNative.PARAM_INTENSITY,false,-1000,PPEExposureNative.L_0_DEATH,PPOperators.SET);
	}
}