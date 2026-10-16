
input_file = "out_converted.txt"
output_file = "out_wiki.txt"

# Texture names that need custom image filenames.
special_files = {
    "block_dan_house_library": "Block_dan_house_library.png",
    "block_glass": "Block glass.png",
    "block_upgrade_station": "ent_upgrade_station.jpg",
    "block_red_heart_black_back": "block_red_heart_black_background.jpg",
    "block_key_yellow": "key_yellow.jpg",
    "block_key_blue": "key_blue.jpg",
    "block_key_green": "key_green.jpg",
}


def texture_to_filename(texture_name):
    """Return the correct image filename for a texture."""
    return special_files.get(texture_name, f"{texture_name}.jpg")


with open(input_file, "r", encoding="utf-8") as f:
    lines = f.readlines()

output_lines = []
current_texture = None
current_items = []


def write_texture(texture, items):
    """Write a texture and its associated items."""
    if texture is None or texture == "INVALID_ID":
        return

    filename = texture_to_filename(texture)
    output_lines.append(f"[[File:{filename}]]")

    if items:
        for item in items:
            output_lines.append(f"* {item}")
    else:
        output_lines.append("None")


for raw_line in lines:
    line = raw_line.rstrip("\r\n")

    # Preserve blank lines between sections.
    if not line.strip():
        write_texture(current_texture, current_items)
        current_texture = None
        current_items = []

        if output_lines and output_lines[-1] != "":
            output_lines.append("")
        continue

    # Skip INVALID_ID completely.
    if line.strip() == "INVALID_ID":
        write_texture(current_texture, current_items)
        current_texture = None
        current_items = []
        continue

    # Indented lines are items belonging to the current texture.
    if line[0].isspace():
        item_name = line.strip()
        if item_name:
            current_items.append(item_name)
    else:
        # A new texture name begins.
        write_texture(current_texture, current_items)
        current_texture = line.strip()
        current_items = []

# Write the final texture, if there is one.
write_texture(current_texture, current_items)

# Remove excess blank lines at the end.
while output_lines and output_lines[-1] == "":
    output_lines.pop()

with open(output_file, "w", encoding="utf-8", newline="\n") as f:
    f.write("\n".join(output_lines) + "\n")

print(f"Finished! Output written to {output_file}")
