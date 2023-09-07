g++ command is a GNU c++ compiler invocation command, which is used for preprocessing, compilation, assembly and linking of source code to generate an executable file. The different “options” of g++ command allow us to stop this process at the intermediate stage.

```
g++ hello.cpp
```

This compiles and links hello.cpp to produce a default target executable file a.out in present working directory. To run this program, type ./a.out where ./ represents present working directory and a.out is the executable target file.

```
./a.out
```

g++ -S file_name is used to only compile the file_name and not assembling or linking. It will generate a file_name.s assembly source file.

Example:

```
g++ -S hello.cpp
```

g++ -c file_name is used to only compile and assemble the file_name and not link the object code to produce executable file. It will generate a file_name.o object code file in present working directory.

Example:

```
g++ -c hello.cpp
```

g++ -o target_name file_name: Compiles and links file_name and generates executable target file with target_name (or a.out by default).

Example:

```
g++ -o main.exe hello.cpp
```
