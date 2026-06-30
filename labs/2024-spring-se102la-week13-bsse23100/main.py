# main.py
from CommercialMeter import CommercialMeter
from ElectricityMeter import ElectricityMeter
from IndustrialMeter import IndustrialMeter
from NonCommercialMeter import NonCommercialMeter
from SinglePhaseMeter import SinglePhaseMeter
from ThreePhaseMeter import ThreePhaseMeter

print(" single phase meter ")
sMeter = SinglePhaseMeter()
sUnits = int(input("Enter the number of units = "))
sBill = sMeter.calculate_bill(sUnits)
print("The bill amount is:", sBill)

print(" three phase meter ")
tMeter = ThreePhaseMeter()
tUnits = int(input("Enter the number of units = "))
tBill = tMeter.calculate_bill(tUnits)
print("The bill amount is:", tBill)

print(" commercial meter ")
cMeter = CommercialMeter()
cUnits = int(input("Enter the number of units = "))
cBill = cMeter.calculate_bill(cUnits)
print("The bill amount is:", cBill)

print(" non commercial meter ")
nMeter = NonCommercialMeter()
nUnits = int(input("Enter the number of units = "))
nBill = nMeter.calculate_bill(nUnits)
print("The bill amount is:", nBill)

print(" industrial meter ")
iMeter = IndustrialMeter()
iUnits = int(input("Enter the number of units = "))
iBill = iMeter.calculate_bill(iUnits)
print("The bill amount is:", iBill)
