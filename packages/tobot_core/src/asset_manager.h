#pragma once

#include "SDL.h"

namespace Tobot::Core {
    class AssetManager {
        public:
            static SDL_Surface * loadTexture(const char * path);
    };
} // namespace Tobot::Core
