#include <iostream>
#include <ctime>
#include <cwchar>
using namespace std;

const char * GetDay(struct tm * tm){

    switch (tm->tm_wday)
    {
        case 0:
            return "Sun";
        case 1:
            return "Mon";
        case 2:
            return "Tue";
        case 3:
            return "Wed";
        case 4:
            return "Thu";
        case 5:
            return "Fri";
        case 6:
            return "Sat";
        default: return "";
    }
}
void Monday(){
    cout << "----------Monday---------- " << endl;


        cout << "\n 1.  Свят и личност" << endl;
        cout << "\n 2.  Свят и личност" << endl;
        cout << "\n 3.  Програмиране на Web Design" << endl;
        cout << "\n 4.  Програмиране на Web Design" << endl;
        cout << "\n 5.  Български език" << endl;
        cout << "\n 6.  Български език" << endl;
        cout << "\n 7.  Час на класа" << endl;
        cout << "\n" << endl;



}

void Tuesday(){
        cout << "----------Tuesday---------- " << endl;


        cout << "\n 1.  English" << endl;
        cout << "\n 2.  English" << endl;
        cout << "\n 3.  Асемблиране на PC" << endl;
        cout << "\n 4.  Асемблиране на PC" << endl;
        cout << "\n 5.  Асемблиране на PC" << endl;
        cout << "\n 6.  Математика" << endl;
        cout << "\n 7.  Математика" << endl;
        cout << "\n" << endl;

}

void Wednesday(){


        cout << "----------Wednesday---------- " << endl;


        cout << "\n 1.  Български език" << endl;
        cout << "\n 2.  Български език" << endl;
        cout << "\n 3.  English" << endl;
        cout << "\n 4.  К.Практика" << endl;
        cout << "\n 5.  К.Практика" << endl;
        cout << "\n 6.  К.Практика" << endl;
        cout << "\n" << endl;



}

void Thursday(){

        cout << "----------Thursday---------- " << endl;


        cout << "\n 1.  Периферни у-ва/Упражнение " << endl;
        cout << "\n 2.  Периферни у-ва/Упражнение " << endl;
        cout << "\n 3.  Периферни у-ва/Упражнение " << endl;
        cout << "\n 4.  Математика" << endl;
        cout << "\n 5.  Математика" << endl;
        cout << "\n" << endl;

}

void Friday(){
        cout << "----------Friday---------- " << endl;


        cout << "\n 1.  Запаметяващи у-ва " << endl;
        cout << "\n 2.  Запаметяващи у-ва " << endl;
        cout << "\n 3.  Приложнен мрежови софтуер " << endl;
        cout << "\n 4.  Приложнен мрежови софтуер" << endl;
        cout << "\n" << endl;

}

int main(){
    time_t now = time(0);
    tm *ltm = localtime(&now);


    if (GetDay(ltm) == "Sun") Monday();
    else if(GetDay(ltm) == "Mon"){
        Monday();
        cout << "\n \n"<< endl;
        Tuesday();
        }
    else if(GetDay(ltm) == "Tue"){
        Tuesday();
        cout << "\n \n" << endl;
        Wednesday();
        }
    else if(GetDay(ltm) == "Wed"){
        Wednesday();
        cout << "\n \n" << endl;
        Thursday();
        }
    else if(GetDay(ltm) == "Thu"){
        Thursday();
        cout << "\n \n" << endl;
        Friday();
        }
    else if(GetDay(ltm) == "Fri")   Friday();
    else if(GetDay(ltm) == "Sat")   Monday();

    return 0;
}
