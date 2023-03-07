#include <windows.h>
#include <iostream>
#include <locale.h>
#include <algorithm>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int kol = 100;
    int i = 0;
    int sdvig;
    char symbols[] = { 'А','Б','В','Г','Д','Е','Ё','Ж','З','И','Й','К','Л','М','Н','О','П','Р','С','Т','У','Ф','Х','Ц','Ч','Ш','Щ','Ъ','Ы','Ь','Э','Ю','Я','а','б','в','г','д','е','ё','ж','з','и','й','к','л','м','н','о','п','р','с','т','у','ф','х','ц','ч','ш','щ','ъ','ы','ь','э','ю','я',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','@','!','*','0','1','2','3','4','5','6','7','8','9' };
    char symbols2[kol];
    std::cout << "Введите текст умоляю (На строчные английские буквы не хватило бюджета и морали)" << std::endl;
    std::cin >> symbols2;
    std::cout << "На сколько символов сдивнуть буквы ну или символы:" << std::endl;
    std::cin >> sdvig;

    char* begin = symbols;
    char* end = symbols + sizeof(symbols);
    for (i=0; symbols2[i]; ++i)
    {
        char* finded = std::find(begin, end, symbols2[i]);
        if (finded != end) symbols2[i] = *(begin + (finded - begin + sdvig) % sizeof(symbols));
    }
    std::cout << "Результатыч :  " << std::endl;
    std::cout << symbols2 << std::endl;
    return 0;
}

