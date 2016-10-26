#include "vh/swap.h"
#include "threads/vaddr.h"
#include "filesys/file.h"
#include "lib/kernel/hash.h"

/* Managing supplemental page table */
struct supplementalPage {
	
	bool readOnly;
	
	/* Indicate what page type it is */
	/*
	bool isZeroPage;
	bool isFilePage;
	bool isSwapPage; */
	int location;
	
	struct file *file;
	int offset;
	
	size_t zero_bytes;
	size_t read_bytes;
	
	void *pageAddress;
	
	// If Swap
	size_t index;
	
	struct hash_elem supplementalHashTable;
};




