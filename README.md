# epoch

A simple utility to display the current Unix epoch timestamp.

## Description

`epoch` prints the current Unix timestamp (seconds since January 1, 1970 00:00:00 UTC) to stdout.

## Installation
```bash
make
sudo make install
```

## Usage
```bash
# Display epoch timestamp
epoch

# Display epoch timestamp with newline
epoch -nl
```

## Options

- `-nl` - Print a newline after the timestamp

## Examples
```bash
$ epoch
1739658420
$ epoch -nl
1739658420

$ echo "Timestamp: $(epoch)"
Timestamp: 1739658420
```

## Building

Requires:
- GCC or compatible C compiler
- Make
```bash
# Compile
make

# Install to /usr/bin
sudo make install

# Clean build files
make clean

# Uninstall
sudo make uninstall
```
