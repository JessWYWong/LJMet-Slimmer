import json
import sys
from  collections import OrderedDict

SFType = "lepIdSF"
inputFile="RunABCD_SF_ID.json"
ID = "NUM_TightID_DEN_TrackerMuons"
outputFile = inputFile.split('.')[0]+"_"+ID+".txt"

if len(sys.argv)>1:
  SFType = argv[1]

if len(sys.argv)>2:
  inputFile = argv[2]

if len(sys.argv)>3:
  ID = argv[3]

if len(sys.argv)>4:
  outputFile = argv[4]

OutText = open(outputFile, "w+")

with open(inputFile, 'r') as json_file:
    data = json.load(json_file)
    data_ID = data[ID]
    axis = data_ID.keys()[0]
    data_ID = data[ID][axis]
    bins = data_ID.keys()
    bins.sort() 
    for ibin in bins:
	X = ibin.split(':')[0]
	if "abs" in X : X = X.split('abs')[-1]
        X = "lep"+X
        X_down = ibin[ibin.find('[')+1:ibin.find(',')]
        X_up = ibin[ibin.find(',')+1:ibin.find(']')]
        if (ibin == bins[0]):
            OutText.write("if (%s < %s){ \r\n" %(X,X_up))
        elif (ibin == bins[-1]):
	    OutText.write("else{ \r\n")
        else:
	    OutText.write("else if (%s < %s){ \r\n" %(X,X_up))
	
	Ybins = data_ID[ibin].keys()
	Ybins.sort()
	for jbin in Ybins:
	    Y = jbin.split(':')[0]
	    if "abs" in Y : Y = Y.split('abs')[-1]
	    Y = "lep"+Y
	    Y_down = jbin[jbin.find('[')+1:jbin.find(',')]
	    Y_up = jbin[jbin.find(',')+1:jbin.find(']')]
	    value = float(data_ID[ibin][jbin]["value"])
	    if (jbin == Ybins[0]):
		OutText.write("    if( %s < %s) %s *= %.3f ;\r\n" %(Y, Y_up, SFType, value))
	    elif (jbin == Ybins[-1]):
		OutText.write("    else %s *= %.3f ;\r\n" %(SFType, value))
	    else:
		OutText.write("    else if( %s < %s) %s *= %.3f ;\r\n" %(Y, Y_up, SFType, value))
	OutText.write("} \r\n")
OutText.close()
exit()
        

