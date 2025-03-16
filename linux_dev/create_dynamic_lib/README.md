# Creating a Dynamic Library Steps

In this example we a our main function in `program.c` and functions used in main are in `weatcherstats.c`

1. Create object file(s)

    `weatherstats.c` comes with `weatherstats.h` and after creating the object file with the command:

    
    **Purpose** of `-fpic`:

    **Position Independence**:
    - Code compiled with `-fpic` can be loaded at any memory address without modification.
    - This is crucial for shared libraries, which can be loaded at different addresses in different programs.

    **Efficiency**:
    - Position-independent code allows the same shared library to be used by multiple programs simultaneously, saving memory.
    - It also enables the operating system to share a single copy of the library in memory among different programs.

    cmd: 
    - gcc: compiler
    options
    - c = create object file instead of executable.
    - fpic = "Position Independent Code", used when compiling source files to generate object files that can be used to create shared (dynamic) libraries.
    - o = output file name.

    ```bash
    gcc -c -fpic weatherstats.c -o weatherstats.o
    ```

2. Create libary file.

    Next is to create the dynamic libary with the `gcc` command using the `-shared` flag and setting the outut file extension as `.so`

    cmd:
    - gcc = command in Linux is a versatile tool used for creating, modifying, and extracting files from archives.
    flag
    - shared = tells the compiler to produce a shared object file. This allows dynamic linking.
    extension
    - .so = stands for shared object

    ```bash
    gcc -shared -o libweather.so weatherstats.o
    ```

3. Create executable with the new static library

    To choose the static lib that was just created use the `-l` flag. Also, notice that since the new lib is not in the standard lib directory you need to use the `-L[path]` flag to set where the archive is located.

    You will also notice that when using `-l` you can omit the `lib` part of the name and `.a` extension.

    > Be sure to create your object file for your main in this case `program.o`
    ```bash
    gcc -o program program.o -L. -lweather
    ```

    Before you can run the newly created executable be sure to set your `LD_LIBRARY_PATH` environment variable. In Unix-like operating systems this specifies a list of directories where the system should look for dynamic libraries (.so files) at runtime.

    ```bash
    # This is only an example, be sure to set it to the path of where your .so file is located. 
    export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
    ```