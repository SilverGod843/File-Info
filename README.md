## Description
A simple tool for viewing extended file properties. Provides extended information in a concise format

## Usage (+examples)
I will use the word **"private"** to denote changing parameters.
1) Usage:
```
file_info <file>
```
2) Output template:
```
Type: -
Size (in bytes): -
Blocks amount: -
Permissions: -
Inode: -
UID: -
GID: -
Last acsecc time: -
Last modification time: -
Last metadata change: -
```
3) Examples:
#### a.txt
```
abcd
```
##### input:
```
file_info a.txt
```
##### output:
```
Type: regular
Size (in bytes): 5
Blocks amount: 8
Permissions: private
Inode: private
UID: private
GID: private
Last acsecc time: private (Sat Sep 27 16:26:22 2025)
Last modification time: private (Sat Sep 27 16:26:22 2025)
Last metadata change: private (Sat Sep 27 16:26:22 2025)
```

#### b.sh
```
#!/bin/bash

echo "Hello, world!"
```
##### input:
```
file_info b.sh
```
##### output:
```
Type: regular
Size (in bytes): 34
Blocks amount: 8
Permissions: private
Inode: private
UID: private
GID: private
Last acsecc time: private (Sat Sep 27 16:36:45 2025)
Last modification time: private (Sat Sep 27 16:36:09 2025)
Last metadata change: private (Sat Sep 27 16:36:41 2025)
```

## Installing

1) Clone repo:
```
git clone https://github.com/SilverGod843/File-Info
```
2) Change directory:
```
cd File-Info
```
3) Run install.sh as root:
```
sudo ./install.sh
```
