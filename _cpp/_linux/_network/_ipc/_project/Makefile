CC = gcc
CFLAGS = -Wall -Wextra
# DEPSRC = DLL/dll.c Mac-List/mac-list.c Routing-Table/routing-table.c Sync/sync.c
DEPSRC = api/dll_lib/dll.c

#.PHONY: database controller dll

all: dll database controller

dll: 
	$(CC) $(CFLAGS) -c api/dll_lib/src/dll.c -o api/dll_lib/bin/dll.o
	$(CC) $(CFLAGS) api/dll_lib/src/main.c api/dll_lib/src/dll.c -o api/dll_lib/bin/main

database: dll
	$(CC) $(CFLAGS) -c api/database/src/db_table.c -o api/database/bin/db_table.o

controller: dll
	$(CC) $(CFLAGS) -c api/controller/src/sync.c -o api/controller/bin/sync.o

clean:
	rm -f api/dll_lib/bin/* api/dll_lib/bin/* api/database/bin/* api/controller/bin/*