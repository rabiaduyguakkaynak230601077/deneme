# Sezar sifreleme
Sezar şifreleme yöntemi, belirli bir anahtar (kaydırma miktarı) kullanarak bir metni şifrelemek için kullanılan klasik bir yöntemdir. Bu yöntemde, her harf belirli bir sayı kadar kaydırılarak şifrelenir.

Örnek olarak, anahtar olarak 3 seçelim. Yani, her harfi 3 harf ileri kaydırarak şifreleme yapalım. İngiliz alfabesinde, A harfini 3 ileri kaydırdığımızda D harfi elde edilir. Bunu kullanarak bir metni şifreleyelim.

Metin: "HELLO WORLD"

Her bir harfi şifrelemek için anahtarı (kaydırma miktarını) kullanarak ileri kaydıralım:
H -> K (anahtar 3 olduğu için)
E -> H
L -> O
L -> O
O -> R
(boşluk karakteri değişmeden kalır)
W -> Z
O -> R
R -> U
L -> O
D -> G
Şifrelenmiş metin: "KHOOR ZRUOG"

Bu şekilde, her harf belirli bir sayı kadar kaydırılarak şifrelenir. Bu şifreleme yöntemi oldukça basittir ve çözülmesi de kolaydır. Özellikle, sadece 26 farklı anahtar varsa (A'dan Z'ye kadar olan her bir kaydırma miktarı), brute-force saldırıları ile hızlı bir şekilde çözülebilir.
