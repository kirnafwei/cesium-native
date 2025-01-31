// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Cesium3DTiles/BoundingVolume.h"
#include "Cesium3DTiles/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <optional>
#include <string>

namespace Cesium3DTiles {
/**
 * @brief Metadata about the tile's content and a link to the content.
 */
struct CESIUM3DTILES_API Content final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "Content";

  /**
   * @brief An optional bounding volume that tightly encloses tile content.
   * tile.boundingVolume provides spatial coherence and
   * tile.content.boundingVolume enables tight view frustum culling. When this
   * is omitted, tile.boundingVolume is used.
   */
  std::optional<Cesium3DTiles::BoundingVolume> boundingVolume;

  /**
   * @brief A uri that points to tile content. When the uri is relative, it is
   * relative to the referring tileset JSON file.
   */
  std::string uri;
};
} // namespace Cesium3DTiles
