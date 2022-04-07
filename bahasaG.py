#konversi string ke bahasa G tahun 90an
print("Masukan Kalimat : ")
txt = input()

def bahasaG(txt):
  dictionary = {'a': 'aga', 'e':'ege', 'i': 'igi', 'o': 'ogo', 'u': 'ugu', 'A': 'Aga', 'E':'Ege', 'I': 'Igi', 'O': 'Ogo', 'U': 'Ugu'}
  transTable = txt.maketrans(dictionary)
  txt = txt.translate(transTable)
  print(txt)
  
bahasaG(txt)
