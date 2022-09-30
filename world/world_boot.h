#ifndef EQEMU_WORLD_BOOT_H
#define EQEMU_WORLD_BOOT_H

#include <string>
#include "../common/types.h"

class WorldBoot {
public:
	static void GMSayHookCallBackProcessWorld(uint16 log_category, std::string message);
	static bool HandleCommandInput(int argc, char **argv);
	static bool LoadServerConfig();
	static bool LoadDatabaseConnections();
	static void CheckForServerScript(bool force_download = false);
	static void CheckForXMLConfigUpgrade();
	static void KillZoneSidecar(bool from_signal = false);
	static void BootZoneSidecar();
	static void RegisterLoginservers();
	static bool DatabaseLoadRoutines(int argc, char **argv);
	static void CheckForPossibleConfigurationIssues();
};


#endif //EQEMU_WORLD_BOOT_H
