# installation steps

Use Debian for WSL to compile from Windows.

You will need the following packages.

`sudo apt-get install clang make g++-mingw-w64-x86-64 gcc-mingw-w64-x86-64 git unzip cmake`

Do this first if this is your first time using this code.

Then, grab the code.

`git clone [git link]`

Navigate to the "client" directory.

Build dependencies only once. Doing it multiple times will waste your time.

Do so with `make re` (linux) or `make re arch=win` (windows). Answer 'y' at every
prompt in the dependency build script.

To build for linux, use:

`make`

To build for windows (using WSL/debian):

`make arch=win`

Make sure you build dependencies before compiling.
