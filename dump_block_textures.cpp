
#include "block_textures.h"

#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

int main()
{
    constexpr int MAX_BLOCK_ID = 28131;
    constexpr int MAX_TEXTURE_ID = 243;

    std::ofstream out("out.txt");

    if (!out.is_open())
    {
        std::cerr << "Failed to open out.txt for writing.\n";
        return 1;
    }

    // Texture ID -> texture name
    std::map<int, std::string> textureNames;

    // Texture ID -> list of block IDs
    std::map<int, std::vector<int>> blocksByTexture;

    // Initialize every known texture, including textures with no blocks.
    for (int textureID = 0; textureID <= MAX_TEXTURE_ID; ++textureID)
    {
        std::string name = TexIDToTexStr(textureID);

        if (!name.empty())
        {
            textureNames[textureID] = name;
            blocksByTexture[textureID] = {};
        }
    }

    // Build the reverse lookup: texture ID -> block IDs.
    for (int blockID = 0; blockID <= MAX_BLOCK_ID; ++blockID)
    {
        int textureID = BlockTexOfXarBlockType(blockID);

        // Skip invalid or unrecovered texture IDs.
        if (textureID < 0 || textureID > MAX_TEXTURE_ID)
            continue;

        // Only include IDs corresponding to known texture names.
        if (textureNames.find(textureID) != textureNames.end())
        {
            blocksByTexture[textureID].push_back(blockID);
        }
    }

    // Write output sorted by texture ID, then block ID.
    for (auto& entry : blocksByTexture)
    {
        int textureID = entry.first;
        std::vector<int>& blockIDs = entry.second;

        // Sort block IDs in ascending order.
        std::sort(blockIDs.begin(), blockIDs.end());

        // Print texture name.
        out << textureNames[textureID] << '\n';

        // Print associated block IDs.
        for (int blockID : blockIDs)
        {
            out << "  " << blockID << '\n';
        }

        out << '\n';
    }

    out.close();

    std::cout << "Successfully wrote sorted output to out.txt\n";

    return 0;
}
