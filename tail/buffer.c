#define ALLOCSIZE 5000 /* Total size of buffer */

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){ /* return pointer to n characters */
    if(allocbuf + ALLOCSIZE - allocp >= n){ /* it fits */
        allocp += n;
        return allocp - n; /* old p */
    } else /* not enough space */
        return 0;
}

