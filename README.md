# ModuleMapGenerator
Make Ghidra Understand Missed Symbols!

## Background 
I was analyzing some themida packed application with full-dump binary. 

i dropped .dmp to ghidra, and wait to ghidra to finish auto analyzing. and i was expecting ghidra successfully resolve some dll symbols correctly.

but after auto analyzing finished, i felt terrible. because My ghidra doesn't understand unpacked binarie's shared symbols..

i don't want fully runnable binary, no fuckn original code stuffs, what i need is just exported function symbol of shared libraries

i searched a lot, but i can't find anything that really help me. so i thought, if there are no solution, then let's make it.

so i started this projects ;P

## TODO 
- [ ] Make Shared Library List from *.dmp
- [ ] Make list of `BaseModule, FunctionRvaRelativeToModule, FunctionName` from Shared Library List
- [ ] Make Ghidra Script that resolving every modules'exporting symbol
