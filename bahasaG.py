#no 2 proyek praktikum pemrograman
#konversi string ke bahasa G tahun 90an
txt = input("Masukan Kalimat : ")

def bahasaG(txt):
  dictionary = {'a': 'aga', 'e':'ege', 'i': 'igi', 'o': 'ogo', 'u': 'ugu', 'A': 'Aga', 'E':'Ege', 'I': 'Igi', 'O': 'Ogo', 'U': 'Ugu'}
  transTable = txt.maketrans(dictionary)
  txt = txt.translate(transTable)
  print(txt)
  
bahasaG(txt)
