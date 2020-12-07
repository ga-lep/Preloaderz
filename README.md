# Preloaderz
A simple library to display arguments passed to functions

The code comes from https://code.woboq.org

## Usage

```
$ make
$ LD_PRELOAD=./preloaderz.so [path_to_your_binary]
```

## Implemented functions

- [strcmp](https://code.woboq.org/userspace/glibc/string/strcmp.c.html)
- [strncmp](https://code.woboq.org/userspace/glibc/string/strncmp.c.html)
- [strlen](https://code.woboq.org/userspace/glibc/string/strlen.c.html)
- [strrchr](https://code.woboq.org/userspace/glibc/string/strrchr.c.html)
