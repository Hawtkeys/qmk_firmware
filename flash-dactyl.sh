#!/usr/bin/env bash

side=${1:-left}   # default to "left" if no arg given

case "$side" in
    left|l)  blob=uf2-split-left ;;
    right|r) blob=uf2-split-right ;;
    *) echo "Usage: $0 left|right" >&2; exit 1 ;;
esac
echo "Flashing $blob to the Dactyl keyboard..."
qmk flash -kb hawtkeys/dactyl -km hardik -bl "$blob"