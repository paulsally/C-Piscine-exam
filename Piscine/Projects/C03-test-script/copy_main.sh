#!/bin/bash

# Path to FOLDER_A
PATH_TO_FOLDER_A="$HOME/Piscine/"

# Check if argument provided
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <source_dir>"
    echo "Example: $0 C03 (set to search inside \$HOME/Piscine/, adjust as needed)"
    exit 1
fi

# Assign arguments to variables
source_dir="$1"   # C03

# Define folder B (current folder from where to run the script)
FOLDER_B="."

# Loop through each directory in source_dir
for dir in "$PATH_TO_FOLDER_A$source_dir"/*/; do
    if [[ "$(basename "$dir")" == ".git" ]]; then
        continue
    fi
    # Get the name of the subfolder
    subfolder_name=$(basename "$dir")
    
    # Path to main.c in the current subfolder
    source_file="$dir/main.c"
    
    # Target path in FOLDER_B
    target_dir="$FOLDER_B/$subfolder_name"

    # Check if main.c exists and target directory exists
    if [[ -f "$source_file" && -d "$target_dir" ]]; then
        cp "$source_file" "$target_dir/"
        echo "Copied main.c to $target_dir/"
    else
        echo "Skipped $subfolder_name (missing main.c or target dir)"
    fi
done
