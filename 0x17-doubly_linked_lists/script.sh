#!/bin/bash

directory="/alx-low_level_programming/0x17-doubly_linked_lists"  # Replace with your target directory
command_to_run="betty"   # Replace with your desired command

for file in "$directory"/*; do
    if [ -f "$file" ]; then
        "$command_to_run" "$file"
    fi
done