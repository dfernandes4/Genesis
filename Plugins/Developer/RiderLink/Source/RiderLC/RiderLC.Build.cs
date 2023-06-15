﻿using UnrealBuildTool;

public class RiderLC : ModuleRules
{
    public RiderLC(ReadOnlyTargetRules Target) : base(Target)
    {
#if UE_4_22_OR_LATER
        PCHUsage = PCHUsageMode.NoPCHs;
#else
		PCHUsage = PCHUsageMode.NoSharedPCHs;
#endif

        bUseRTTI = true;

        PrivateDefinitions.Add("_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING");
        PrivateDefinitions.Add("_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS");
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Engine",
                "RiderLink",
                "LiveCoding",
                "RD"
            }
        );
    }
}