# 🚀 42 Header Kurulumu ve Faydalı Kaynaklar

Bu doküman, 42 Okulu projelerinde gerekli olan **Standart Header**'ın (başlık bloğu) **zsh** terminalinde kurulumunu ve öğrenme sürecine destek olacak bazı faydalı kaynakları içermektedir.

---

## 🛠️ Standart Header Kurulumu (Zsh İçin)

Bu adımlar, **42 Header**'ı `Vim` editöründe otomatik olarak kullanabilmek için gerekli ayarları yapmanızı sağlar. Bu kurulum sadece `zsh` kabuğunda geçerlidir.

### Ön Koşul

* Terminalde varsayılan kabuk olarak **Zsh** kullanmalısınız. (Kurulum adımlarında bu geçici olarak ayarlanacaktır.)

### Adım Adım Kurulum

| S.N. | Komut | Açıklama |
| :--- | :--- | :--- |
| **1.** | `zsh` | Terminalinizi açın ve **zsh** kabuğunu başlatın. |
| **2.** | `git clone https://github.com/42Paris/42header ~/Desktop/42header` | 42 Header Git deposunu Masaüstü'nüzdeki `42header` klasörüne klonlayın. |
| **3.** | `cd ~/Desktop/42header/` | Oluşturulan `42header` klasörüne geçiş yapın. |
| **4.** | `touch ~/.zshrc` | Eğer mevcut değilse, `.zshrc` dosyasını oluşturun. |
| **5.** | `./set_header.sh` | Kurulum betiğini çalıştırarak gerekli `Vim` eklentilerini ve ayarlarını otomatik olarak yapın. |
| **6.** | `cd ~/.vim/plugin` | `Vim` eklentilerinin bulunduğu klasöre gidin. |

### Header Bilgilerini Kişiselleştirme

6. adımdan sonra, header'da görünecek kullanıcı adı ve mail adresinizi ayarlamanız gerekir.

1.  `Vim` ile `stdheader.vim` dosyasını açın:
    ```bash
    vim stdheader.vim
    ```
2.  Aşağıdaki satırları **kendi kullanıcı adı** ve **mail adresiniz** ile değiştirin:
    * `let l:user = "marvin"`
    * `let l:mail = "marvin@42.fr"`
3.  Dosyayı kaydedip (`:w`) ve çıkın (`:q`).

### Kullanım ve Doğrulama

1.  Deneme amaçlı `Vim` ile rastgele bir dosya açın.