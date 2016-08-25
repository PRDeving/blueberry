# blueberry
simple and easy to use keylogger for linux

## THIS KEYLOGGER HAS BEEN DEVELOPED FOR LEARNING PROUPORSES, IT'S LICENSE IS OPEN, JUST DONT USE IT FOR EVILo


# HOW DOES IT WORK
- opens a stream to the keyboard event handler
- get's every key press
- logs them in log.txt file

blueberry writes in the .txt when RETURN is pressed or the buffer gets 250 characters

# COMPILING
It has been compiled in Linux 3.16.0-4-amd64 Debian Jessie, the binary may work in similar systems and archs.
If not, just run `$ make`

It's not intended to be cross platform, so not sure if it works in BSD, SOLARIS, MACOs, whatever.

# USAGE
It has to be ran as sudo, once done, it'll go to the background and won't be visible to the user, it'll just
log keystrokes silently :)

To kill it just press 'enter' once and type 'stop' anywhere, this will break the listener and kill the daemon
