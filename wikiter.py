import re

input_file = "out_converted.txt"
output_file = "out_wiki.txt"

with open(input_file, "r", encoding="utf-8") as src, \
     open(output_file, "w", encoding="utf-8") as dst:

    for line in src:
        stripped = line.strip()

        # Preserve blank lines
        if not stripped:
            dst.write("\n")
            continue

        # Preserve INVALID_ID or other standalone headers
        if stripped == "INVALID_ID":
            dst.write(stripped + "\n")
            continue

        # Lines without indentation are block names
        if line[0].isspace() is False:
            dst.write(f"[[File:{stripped}.jpg]]\n")
        else:
            # Indented lines are items: convert indentation to a wiki bullet
            dst.write(f"* {stripped}\n")

print(f"Wiki formatting complete: {output_file}")
