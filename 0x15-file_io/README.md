FILE I/O
File descriptor - is a process-unique identifier/small integer that represents an open file or data stream or other input/output resource such as pipe or network socket.
- typically have non-negative integer values with negative values being reserved to indicate 'no value' or error conditions.

Integer value	Name	<unistd.h> symbolic constant[1]	<stdio.h> file stream[2]
0	Standard input	STDIN_FILENO	stdin
1	Standard output	STDOUT_FILENO	stdout
2	Standard error	STDERR_FILENO	stderr

system calls
open - opens a file specified by a pathname. if it does not exist and O_CREATis specified i flags a file is created by open()

close - closes a file descriptor, so it no longer refers to any file and can be reused.
returns 0 on success, on error -1
Read - read a line from standard input
write - send message to another user
write utility allows you to communicate with other users by copying lines from your terminal to theirs

