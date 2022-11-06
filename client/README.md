# installation steps

Use Debian for WSL to compile from Windows.

You will need the following packages.

`sudo apt-get install make g++-mingw-w64-x86-64 gcc-mingw-w64-x86-64 git`

Do this first if this is your first time using this code.

Then, grab the code.

`git clone [git link]`


Navigate to the "client" directory.
To build for linux, use:

`make re`

To build for windows (using WSL/debian):

`make re arch=win`
