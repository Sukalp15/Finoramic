from subprocess import STDOUT, check_call, check_output, CalledProcessError
import os
import json
from pprint import pprint

data = json.load(open('load.json'))
for filetoinstall in data["Dependencies"]:
	try:
		str1=check_output(['sudo','-H','pip', 'install',  filetoinstall],stderr=STDOUT)
		print ("Successfully Done : "+filetoinstall)
	except CalledProcessError as grepexc:
print (" error with file : "+ filetoinstall)
