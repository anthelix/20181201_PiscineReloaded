#!/bin/sh
find . \( -name "*.sh" \) | sed "s/...$//g" | rev | cut -d / -f 1 | rev
