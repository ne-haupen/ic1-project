# ic1-project
# Instructions
## how to compile
This compiles the code into binaries that can be found in levels folder.
```shell
make
```
## how run
Each level can be executed alone.
```shell
./unprotected/<binary>
```
or you can run main script containing all three levels.
```shell
make run
```
## how to remove compiled binaries
```shell
make clean
```
# Levels
## First level - int overflow
To complete the first level you have to win enough points.
After each bet you have a random chance to win.
To beat the program you have to enter large negative number.
## Second level
This level requires a key that can be taken from reverse engineering
the binary. Other way to find the code can be brute forcing different combination.
## Third level
Third level is about stack overflow. You need to enter password
that is 15 character string. If you enter longer text than 15
characters you will get access without password.