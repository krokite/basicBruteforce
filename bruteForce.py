#!/usr/bin/python
# Author : KroKite
# Description: Basic Password Bruteforcing Tool
# URL: http://facebook.com/r0ckysharma
# Python Version : 2.7

import subprocess
import re

fo = open("password.txt", 'r');
for lines in fo:
  password = lines.split('\n')
	brute = subprocess.Popen(["./vulnerableApp", "-f", "foo.txt", "-p", password[0]], stdout=subprocess.PIPE)
	if(re.search("Success", brute.communicate()[0])):
		print "Password Cracked and your Password is ", password[0]
		exit()
	else:
		print password[0], " is not Password"
