#include "threads/malloc.h"
#include "vm/page.h"

// struct supplementalPage * 
/*
If page_read_bytes equals PGSIZE, 
the page should be demand paged from the underlying file on its first access.

If page_zero_bytes equals PGSIZE, 
the page does not need to be read from disk at all because it is all zeroes. 
You should handle such pages by creating a new page consisting of all 
zeroes at the first page fault.

Otherwise, neither page_read_bytes nor page_zero_bytes equals PGSIZE. 
In this case, an initial part of the page is to be read from the underlying 
file and the remainder zeroed.
*/

