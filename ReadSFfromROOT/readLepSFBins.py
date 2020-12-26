#!/usr/bin/python
from ROOT import *
import sys

if len(sys.argv)<4:
  print("Three arguments needed. #1 File Name #2 2D Hist Name #3 SF varialbe name")
else :
  print "Reading TFile "+sys.argv[1]

f=TFile.Open(sys.argv[1])
print "Get histogram "+ sys.argv[2]
hist = f.Get(sys.argv[2])

X = hist.GetXaxis()
Y = hist.GetYaxis()
swapXY = False
if "pt_abseta" in sys.argv[2]:
  swapXY = True
  X = hist.GetYaxis()
  Y = hist.GetXaxis()

nX = X.GetNbins()
nY = Y.GetNbins()

OutText = open(sys.argv[3]+"_"+sys.argv[2]+"_bins.txt", "w+")

nYwritten =0
for y in range(1,nY+1):
  pTUpEdge = Y.GetBinUpEdge(y)
  if Y.GetBinUpEdge(y)<30:
    continue 
  nYwritten+=1
  if(y==nY):
    OutText.write("else{ \r\n")
  elif(y==1 or nYwritten==1):
    OutText.write("if (leppt < %d){ \r\n" %(pTUpEdge))
  else:
    OutText.write("else if (leppt < %d){ \r\n" %(pTUpEdge))
  for x in range(1,nX+1):
    etaUpEdge = X.GetBinUpEdge(x)
    bincontent = hist.GetBinContent(x,y)
    if swapXY:
      bincontent = hist.GetBinContent(y,x)
    if (x==1) :
      OutText.write("    if( lepeta < %.3f) %s *= %f ;\r\n" %(etaUpEdge, sys.argv[3],bincontent))
    elif (x==nX):
      OutText.write("    else %s *= %f ;\r\n" %(sys.argv[3],bincontent))
    else:
      OutText.write("    else if( lepeta < %.3f) %s *= %f ;\r\n" %(etaUpEdge,sys.argv[3], bincontent))
  OutText.write("} \r\n")
OutText.close()

    
