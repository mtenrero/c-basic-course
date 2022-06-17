# Arrays

## General Aspects

```c
//type name[];

int elements[] = {2,3,4,5};
int elements[4] = {2,3,4,5};
int elements[4];
```

1. List of elements with the same type
2. Maximum length has to be specified
4. Variables cannot be used for determining array length
5. Data colocated side-to-side in memory
6. All memory gets reserved
7. The variable contains the pointer to the first element
8. Index starts at 0
9. There is no hard boundaries!!
10. Can be passed into a function, but as reference

## Don't do this

```c
int list[];
int list[somevariable];
```