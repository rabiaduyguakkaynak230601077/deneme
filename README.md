# deneme
Sezar şifreleme kodunu açıklamak içindir.
İlkel şifreleme yöntemlerinden birisidir. Basitçe şifrelenmek istenen metindeki her karakterin anahtara kadar kaydırılması ile şifrelenir (encrypt). Şifrenin açılmasında (decrypt) anahtar kadar her karakter geri kaydırılır.

Örnek Mesaj (plain text) : “baba dede”
Anahtar (Key) : 2
Şifreli Mesaj (cipher text) : “dcdc fgfg”

Saldırı yöntemi olarak anahtarların tamamı denenebilir. Örneğin 26 harf bulunna ingilizce için 25 ihtimal teker teker denenirse metine ulaşmak mümkündür.