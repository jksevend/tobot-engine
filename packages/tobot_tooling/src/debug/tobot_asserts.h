/**
 * @file tobot_asserts.h
 * @brief Contains test macro's regarding assertions
 */

#pragma once

#include "../logging/logger.h"
namespace Tobot::Tooling::Debug {
// Asserts are only defined for debug builds
#ifdef BUILD_TYPE_DEBUG
#define TOBOT_ASSERT(x)                               \
    {                                                 \
        if (!(x)) {                                   \
            LOG_ERROR_AT("Assertion Failed: %s", #x); \
            __debugbreak();                           \
        }                                             \
    }
#else
#define TOBOT_ASSERT(x)
#endif
} // namespace Tobot::Tooling::Debug