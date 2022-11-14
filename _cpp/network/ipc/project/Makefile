CC = gcc
CFLAGS = -Wall -Wextra
# DEPSRC = DLL/dll.c Mac-List/mac-list.c Routing-Table/routing-table.c Sync/sync.c
DEPSRC = api/dll_lib/dll.c

.PHONY: dll 

dll:
	$(CC) $(CFLAGS) -c api/dll_lib/src/dll.c -o api/dll_lib/bin/dll.o
	$(CC) $(CFLAGS) api/dll_lib/src/main.c api/dll_lib/src/dll.c -o api/dll_lib/bin/main

clean:
	rm -f api/dll_lib/bin/dll.o api/dll_lib/bin/main
#	rm -f client server DLL/dll.o Mac-List/mac-list.o Routing-Table/routing-table.o shm_ip.o