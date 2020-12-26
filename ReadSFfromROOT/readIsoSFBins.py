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

nX = X.GetNbins()
nY = Y.GetNbins()

OutText = open(sys.argv[3]+"_"+sys.argv[2]+"_bins.txt", "w+")

nXwritten = 0
for x in range(1,nX+1):
  if X.GetBinUpEdge(x)<=0: 
    continue
  etaUpEdge = X.GetBinUpEdge(x)
  nXwritten+=1
  if (x==nX) :
    OutText.write("else{ \r\n")
  elif(x==1 or nXwritten==1):
    OutText.write("if(fabs(lepeta) < %f){ \r\n" %(etaUpEdge))
  else:
    OutText.write("else if(fabs(lepeta) < %f){ \r\n" %(etaUpEdge))
  for y in range(1,nY+1):
    if Y.GetBinLowEdge(y)<20:
      continue 
    pTUpEdge = Y.GetBinUpEdge(y)
    bincontent = hist.GetBinContent(x,y)
    if(y==1):
      OutText.write("    if (leppt < %d) %s *= %f ; \r\n" %(pTUpEdge, sys.argv[3],bincontent))
    elif (y==nY):
      OutText.write("    else %s *= %f ;\r\n" %(sys.argv[3],bincontent))
    else:
      OutText.write("    else if (leppt < %d) %s *= %f ; \r\n" %(pTUpEdge, sys.argv[3],bincontent))
  OutText.write("} \r\n")
OutText.close()

    
