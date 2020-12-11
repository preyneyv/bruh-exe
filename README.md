# The Bruh Button
Have you ever felt disappointed in a person or a thing and wanted an outlet to
express it, only to be further disappointed that the thing does not exist?

Well, look no further than The Bruh Button! It serves the single purpose of
vocalizing your disappointment with society!

## Features
- Endless hours of enjoyment, bruh!
- Supports multiplayer with speakers (not included), bruh!
- Instant disappointment with yourself or others around you, bruh!

## Convinced?
I thought so. Head over to [Releases] to get the latest version of The Bruh
Button completely for free!

## Compilation Instructions
You don't trust me. It's fine. I get it. ( ._.)

But no matter. We cannot let trust issues get in the way of the society's
greatest revelation.

You must have MinGW installed. This program only works on Windows x64, x32 has
not been tested.

Do the following in a terminal.
```console
g++ main.cpp -c main.o
windres -i resources.rc -o resources.res -O coff
gpp main.o resources.res -o bruh.exe -static-libgcc -static-libstdc++ -lwinmm -Wl,-subsystem,windows
```

