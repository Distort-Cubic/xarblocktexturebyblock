#pragma once

#include <cstdint>
#include <string>

// Block ID -> texture ID.
// UINT32_MAX means no mapping.
unsigned int BlockTexOfXarBlockType(int param_1);

// Texture ID -> texture name.
// This is the reconstructed source-level signature.
std::string TexIDToTexStr(int param_1);

int IsXarBlockVisiblySolid(int param_1);