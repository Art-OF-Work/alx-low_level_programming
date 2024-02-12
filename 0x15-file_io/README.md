# 0x15 C FILE I/O

## How to create, open, close, read and write files

1. Creating and Opening a File: 
You can create and open a file using the fopen function. It takes two arguments: the name of the file and the mode in which to open the file.
```

FILE *fp = fopen("file.txt", "w");

```

In this example, "file.txt" is the name of the file and "w" is the mode (write mode). If the file does not exist, it will be created.
2. Writing to a File:
You can write to a file using the fprintf or fputs function.
```

char *text = "Hello, World!";
fprintf(fp, "%s\n", text);

```
In this example, text is written to the file pointed to by fp

3. Reading from a File:
You can read from a file using the fscanf or fgets function.
```

char buffer[100];
fgets(buffer, 100, fp);

```
In this example, fgets reads up to 99 characters from the file pointed to by fp and stores them in buffer.

4. Closing a File
You can close a file using the fclose function.
```

fclose(fp);

```
In this example, fclose closes the file pointed to by fp.

Remember to always check the return values of these functions for error handling. For example, fopen returns NULL if the file cannot be opened, and fclose returns EOF if the file cannot be closed.

## What are file descriptors

File descriptors are an integral part of Unix and Unix-like operating systems such as Linux. They provide a primitive, low-level interface to input and output operations1. Here are some key points about file descriptors:

* File descriptors are represented as integers within your application2.
* They are abstract indicators or handles used to access a file or other input/output resources, such as a pipe or network socket2.
* When you open a file, the operating system creates an entry to represent that file and store the information about that opened file3. This entry is known as a file descriptor.
* Each open file is associated with its own file descriptor. So if there are 100 files opened in your operating system, then there will be 100 entries in the operating system, each representing a file descriptor3.
* File descriptors index into a per-process file descriptor table maintained by the kernel, which in turn indexes into a system-wide table of files opened by all processes2.
* File descriptors can refer to regular files, directories, block or character devices, sockets, pipes, or FIFOs1.

In C programming, functions like open(), read(), write(), and close() are used to manipulate file descriptors1.

|Integer value|Name|<unistd.h> symbolic constant|<stdio.h> file stream[2]|
|----|----|----|----|
|0|Standard input|STDIN_FILENO|stdin|
|1|Standard output|STDOUT_FILENO|stdout|
|2|Standard error|STDERR_FILENO|stderr|

[More](https://en.wikipedia.org/wiki/Standard_streams#Standard_input_(stdin))


## How to use the I/O system calls open, close, read and write
[image](./Untitled%20file.png)

## Permission flags

[image](./Untitled%20file%20(2).png)

## Summarize

[image](./Untitled%20file%20(1).png)