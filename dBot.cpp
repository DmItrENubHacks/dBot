#include <iostream> //основная библиотека си++
#include <conio.h> //получение клика с клавиатуры
#include <windows.h> //для воспроизведения звука клика
#define PlaySound
#define TEXT

using namespace std; //для cout cin и string

int Timer()
{   
    double time;
    for (double i = 0.0001; i += 0.0001;)
    {
        Sleep(0.0001);
        switch (getche())
        {
            case 1:
                time = i;
                return time;
            default:
                continue;
        }
    }
}

int main()
{
    setlocale(0, ""); //можно писать на русском
    const int size = 120; //максимальное количество кликов
    float arr[size * 2]; //массив с кликами
    cout << "What are you using speedhack?";
    float speedHack;
    cin >> speedHack;
    if (speedHack == 0) return 7;
    cout << "Press enter to clicks";
    switch (getche()) //получает нажатия с клавиатуры
    {
    case 13:
        break; //запускает запись кликов
    }
    for (int i = 1; i < size; i++) //запись кликов
    {
        arr[i - 1] = Timer(); // замеряет время перед кликом
        switch (getche())
        {
        case 1:
            arr[i] = VK_LBUTTON; //указание, что нужно сделать клик
        }
    }
    string randomSoundClick, randomSoundClickStop;//названия рандомных звуков кликов
    cout << "For clicks press F10";//запуск гдбота
    switch (getche())
    {
    case 79: // запускает клики
        for (int i = 0; i < size; i++) //гдбот
        {
            /*if (rand() % 2 = 1) //рандом кликов
            {
                randomSoundClick = "click.wav";
                randomSoundClickStop = "clickStop.wav";
            } else if (rand() % 3 = 0)
            {
                randomSoundClick = "click1.wav";
                randomSoundClickStop = "clickStop1.wav";
            } else if (rand() % 5 = 0)
            {
                randomSoundClick = "click2.wav";
                randomSoundClickStop = "clickStop2.wav";
            } else if (rand() % 7 = 0)
            {
                randomSoundClick = "click3.wav";
                randomSoundClickStop = "clickStop3.wav";
            } else if (rand() % 11 = 0)
            {
                randomSoundClick = "click4.wav";
                randomSoundClickStop = "clickStop4.wav";
            } else if (rand() % 13 = 0)
            {
                randomSoundClick = "click5.wav";
                randomSoundClickStop = "clickStop5.wav";
            } else if (rand() % 17 = 0)
            {
                randomSoundClick = "click6.wav";
                randomSoundClickStop = "clickStop6.wav";
            } else if (rand() % 19 = 0)
            {
                randomSoundClick = "click7.wav";
                randomSoundClickStop = "clickStop7.wav";
            } else if (rand() % 23 = 0)
            {
                randomSoundClick = "click8.wav";
                randomSoundClickStop = "clickStop8.wav";
            } else if (rand() % 29 = 0)
            {
                randomSoundClick = "click9.wav";
                randomSoundClickStop = "clickStop9.wav";
            } else if (rand() % 31 = 0)
            {
                randomSoundClick = "click10.wav";
                randomSoundClickStop = "clickStop10.wav";
            } else if (rand() % 37 = 0)
            {
                randomSoundClick = "click11.wav";
                randomSoundClickStop = "clickStop11.wav";
            } else if (rand() % 41 = 0)
            {
                randomSoundClick = "click12.wav";
                randomSoundClickStop = "clickStop12.wav";
            } else if (rand() % 43 = 0)
            {
                randomSoundClick = "click13.wav";
                randomSoundClickStop = "clickStop13.wav";
            } else if (rand() % 47 = 0)
            {
                randomSoundClick = "click14.wav";
                randomSoundClickStop = "clickStop14.wav";
            } else if (rand() % 49 = 0)
            {
                randomSoundClick = "click15.wav";
                randomSoundClickStop = "clickStop15.wav";
            } else if (rand() % 53 = 0)
            {
                randomSoundClick = "click16.wav";
                randomSoundClickStop = "clickStop16.wav";
            } else if (rand() % 57 = 0)
            {
                randomSoundClick = "click17.wav";
                randomSoundClickStop = "clickStop17.wav";
            } else if (rand() % 59 = 0)
            {
                randomSoundClick = "click18.wav";
                randomSoundClickStop = "clickStop18.wav";
            } else if (rand() % 61 = 0)
            {
                randomSoundClick = "click19.wav";
                randomSoundClickStop = "clickStop19.wav";
            } else if (rand() % 67 = 0)
            {
                randomSoundClick = "click21.wav";
                randomSoundClickStop = "clickStop21.wav";
            } else if (rand() % 71 = 0)
            {
                randomSoundClick = "click22.wav";
                randomSoundClickStop = "clickStop22.wav";
            } else if (rand() % 73 = 0)
            {
                randomSoundClick = "click23.wav";
                randomSoundClickStop = "clickStop23.wav";
            } else if (rand() % 79 = 0)
            {
                randomSoundClick = "click24.wav";
                randomSoundClickStop = "clickStop24.wav";
            } else if (rand() % 83 = 0)
            {
                randomSoundClick = "click25.wav";
                randomSoundClickStop = "clickStop25.wav";
            } else if (rand() % 89 = 0)
            {
                randomSoundClick = "click26.wav";
                randomSoundClickStop = "clickStop26.wav";
            } else if (rand() % 91 = 0)
            {
                randomSoundClick = "click27.wav";
                randomSoundClickStop = "clickStop27.wav";
            } else if (rand() % 101 = 0)
            {
                randomSoundClick = "click28.wav";
                randomSoundClickStop = "clickStop28.wav"
            } else if (rand() % 103 = 0)
            {
                randomSoundClick = "click29.wav";
                randomSoundClickStop = "clickStop29.wav";
            } else if (rand() % 107 = 0)
            {
                randomSoundClick = "click30.wav";
                randomSoundClickStop = "clickStop30.wav";
            } else if (rand() % 109 = 0)
            {
                randomSoundClick = "click31.wav";
                randomSoundClickStop = "clickStop31.wav";
            } else if (rand() % 113 = 0)
            {
                randomSoundClick = "click32.wav";
                randomSoundClickStop = "clickStop32.wav";
            }
            else
            {
                randomSoundClick = "click.wav";
                randomSoundClickStop = "clickStop.wav";
            }*/
            randomSoundClick = "click.wav";
            randomSoundClickStop = "clickStop.wav";
            Sleep(arr[i] / (1 / speedHack)); //необходимая функция для гдбота
            arr[i + 1]; // клик
            PlaySound(TEXT(randomSoundClick), NULL, SND_FILENAME); // начало клика (звук)
            PlaySound(TEXT(randomSoundClickStop), NULL, SND_FILENAME); // конец клика (звук)
        }
    }
    cout << "Work complete!";
    return 0;
}