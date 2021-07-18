import random

Mac = ""

hex_char = ["1","2","3","4","5","6","7","8","9","0","a","b","c","d","e","f"]

for i in range(0,12,1):
  Mac = Mac + hex_char[random.randint(0, 15)]
print(Mac)
