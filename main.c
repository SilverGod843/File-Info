#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <limits.h>
#include <unistd.h>
#include <time.h>


int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Usage: file_info <file>\n");
		return 1;
	}

	struct stat fileStat;
	if (stat(argv[1],&fileStat) < 0) {
		perror("stat");
		return 1;
	}
	

	printf("Type: ");
	if (S_ISREG(fileStat.st_mode)) {
		printf("regular\n");
	} else if (S_ISDIR(fileStat.st_mode)) {
		printf("directory\n");
	} else if (S_ISLNK(fileStat.st_mode)) {
		printf("symbolic link\n");
	} else if (S_ISFIFO(fileStat.st_mode)) {
		printf("FIFO\n");
	} else if (S_ISCHR(fileStat.st_mode)) {
		printf("POSIX\n");
	} else if (S_ISBLK(fileStat.st_mode)) {
		printf("block special device\n");
	} else if (S_ISSOCK(fileStat.st_mode)) {
		printf("socket\n");
	} else {
		printf("unknown\n");
	}
	
	if (S_ISREG(fileStat.st_mode)) {
		printf("Size (in bytes): %ld\n", (long)fileStat.st_size);
	}
	printf("Blocks amount: %ld\n", (long)fileStat.st_blocks);
	printf("Permissions: %u\n",fileStat.st_mode & 0777);
	printf("Inode: %ld\n",(unsigned long)fileStat.st_ino);
	printf("UID: %ld\n", fileStat.st_uid);
	printf("GID: %d\n", fileStat.st_gid);
	printf("Last acsecc time: %s", ctime(&fileStat.st_atime));
	printf("Last modification time: %s", ctime(&fileStat.st_mtime));
	printf("Last metadata change: %s", ctime(&fileStat.st_ctime));


	return 0;

}
