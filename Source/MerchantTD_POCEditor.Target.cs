// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MerchantTD_POCEditorTarget : TargetRules
{
	public MerchantTD_POCEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "MerchantTD_POC" } );
	}
}
