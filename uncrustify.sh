#!/bin/bash

find ./src -type f -name "*.[ch]" -exec uncrustify -c ./uncrustify.cfg --no-backup "{}" \;

#uncrustify -c ../uncrustify.cfg --no-backup src/loader.h ; norminette src/loader.h