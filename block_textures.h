#pragma once

#include <cstdint>
#include <string>

// Block ID -> texture ID.
// UINT32_MAX means no mapping.
int BlockTexOfXarBlockType(int blockID);

// Texture ID -> texture name.
// This is the reconstructed source-level signature.
std::string TexIDToTexStr(int textureID);
