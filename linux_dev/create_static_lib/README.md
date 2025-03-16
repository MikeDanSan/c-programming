# Creating a Static Library Steps

In this example we a our main function in `program.c` and functions used in main are in `weatcherstats.c`

1. Create object file(s)

    `weatherstats.c` comes with `weatherstats.h` and after creating the object file with the command:

    ```bash
    gcc -c weatherstats.c -o weatherstats.o
    ```

2. Create archive of object file(s)

    Next is to create the archive with the `ar` command using the `rcs` flags

    An archive is essentially a collection of files bundled together in a specific structure, making it easy to manage multiple files as a single entity. Each file within the archive is referred to as a member of the archive. The ‘ar’ command is commonly used for creating static libraries, which are crucial in software development for linking compiled code into executable programs.


    cmd:
    - ar = command in Linux is a versatile tool used for creating, modifying, and extracting files from archives.
    options
    - r = insert files in archive.
    - c = do not warn if the library had to be created.
    - s = act as ranlib. (faster access)

    ```bash
    # this example has one ojbect file
    ar rcs libweather.a weatherstats.o
    ```

3. Create executable with the new static library

    To choose the static lib that was just created use the `-l` flag. Also, notice that since the new lib is not in the standard lib directory you need to use the `-L[path]` flag to set where the archive is located.

    You will also notice that when using `-l` you can omit the `lib` part of the name and `.a` extension.

    > Be sure to create your object file for your main in this case `program.o`
    ```bash
    gcc -o program program.o -L. -lweather
    ```