
input_file = "out_converted.txt"
output_file = "out_wiki.txt"

with open(input_file, "r", encoding="utf-8") as src:
    lines = src.readlines()

with open(output_file, "w", encoding="utf-8") as dst:
    i = 0

    while i < len(lines):
        line = lines[i]
        stripped = line.strip()

        # Preserve blank lines
        if not stripped:
            dst.write("\n")
            i += 1
            continue

        # Preserve INVALID_ID or other standalone headers
        if stripped == "INVALID_ID":
            dst.write(stripped + "\n")
            i += 1
            continue

        # Lines without indentation are block names
        if not line[0].isspace():
            dst.write(f"[[File:{stripped}.jpg]]\n")
            i += 1

            # Check whether the block has any indented entries
            if i >= len(lines) or not lines[i].strip():
                dst.write("None\n")
                continue

            if not lines[i][0].isspace():
                dst.write("None\n")
                continue

        else:
            # Indented lines are items: convert indentation to wiki bullets
            dst.write(f"* {stripped}\n")
            i += 1

print(f"Wiki formatting complete: {output_file}")
