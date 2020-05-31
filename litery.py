test_str = "TralaLaLaCaLaTGA"
count = 0
  
for i in test_str: 
    if i == 'a': 
        count = count + 1
  
if count > 4:
	print (str(count)+" liter")
	
elif count==1:
	print (str(count)+" litera")

else:
	print (str(count)+" litery")
