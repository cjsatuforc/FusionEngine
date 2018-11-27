#ifndef _INCLUDE_FILESYSTEM_FILESYSTEM_H_
#define _INCLUDE_FILESYSTEM_FILESYSTEM_H_

#include <filesystem/scene_loader.h>
#include <filesystem/scene_loader_adapter.h>

#include <memory>

namespace fs {


	// Filesystem class
	class Filesystem {
	public:
		explicit Filesystem();
		void load3DFile(const std::string& filepath);
		void loadPTXFile(const std::string& filepath);
		// Load 3D files
		// Load Video files
		// Load/Save Project's state
	private:
		std::shared_ptr<fs::SceneLoader> sceneLoader;
		// VideoLoader
		// PTX loader
		// StateLoader?
	};

	// Constructor
	Filesystem::Filesystem() {
		sceneLoader = std::make_shared<SceneLoaderAdapter>();
	}
	
	// loads 3D file
	void Filesystem::load3DFile(const std::string& filepath) {
		sceneLoader->loadFile(filepath);
	}

}	// !namespace fs
#endif	//!_INCLUDE_FILESYSTEM_FILESYSTEM_H_
