#include "block_textures.h"

#include <map>
#include <vector>
#include <string>
#include <cstdint>
#include <iostream>

int main()
{
    constexpr int MAX_BLOCK_ID = 28131;
    constexpr int MAX_TEXTURE_ID = 250;

    // Texture name -> list of block IDs
    std::map<std::string, std::vector<int>> blocksByTexture;

    // Initialize every known texture name, including those with no blocks.
    for (int textureID = 0; textureID <= MAX_TEXTURE_ID; ++textureID)
    {
        std::string name = TexIDToTexStr(textureID);

        if (!name.empty())
            blocksByTexture.try_emplace(name);
    }

    // Build the reverse lookup: texture name -> block IDs.
    for (int blockID = 0; blockID < MAX_BLOCK_ID; ++blockID)
    {
        int textureID = BlockTexOfXarBlockType(blockID);

        // Skip invalid or unrecovered texture IDs.
        if (textureID < 0 || textureID > MAX_TEXTURE_ID)
            continue;

        std::string name = TexIDToTexStr(textureID);

        if (!name.empty())
            blocksByTexture[name].push_back(blockID);
    }

    // Print every texture name, even when no blocks use it.
    for (const auto& entry : blocksByTexture)
    {
        std::cout << entry.first << '\n';

        for (int blockID : entry.second)
            std::cout << "  " << blockID << '\n';

        std::cout << '\n';
    }

    return 0;
}