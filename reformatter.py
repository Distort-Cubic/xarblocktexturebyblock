
import re

# Input and output files
input_file = "out.txt"
mapping_file = "xar_builtin_noc_list.txt"
output_file = "out_converted.txt"

# Build ID -> name mapping
id_to_name = {}

with open(mapping_file, "r", encoding="utf-8") as f:
    for line in f:
        line = line.strip()
        match = re.match(r"^(\d+)\s+(\S+)", line)

        if match:
            item_id = int(match.group(1))
            name = match.group(2)

            # Remove XAR_ prefix
            name = name.removeprefix("XAR_")
            id_to_name[item_id] = name

# Convert out.txt
missing_ids = set()

with open(input_file, "r", encoding="utf-8") as src, \
     open(output_file, "w", encoding="utf-8") as dst:

    for line in src:
        stripped = line.strip()

        # Replace lines containing only a numeric ID
        if stripped.isdigit():
            item_id = int(stripped)

            if item_id in id_to_name:
                # Preserve original indentation
                indent = line[:len(line) - len(line.lstrip())]
                dst.write(indent + id_to_name[item_id] + "\n")
            else:
                dst.write(line)
                missing_ids.add(item_id)
        else:
            # Preserve group names, blank lines, and INVALID_ID
            dst.write(line)

print(f"Conversion complete: {output_file}")

if missing_ids:
    print("Warning: IDs not found in mapping file:")
    print(", ".join(map(str, sorted(missing_ids))))
