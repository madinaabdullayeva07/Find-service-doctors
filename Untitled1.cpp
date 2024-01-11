#include <iostream>
#include <string>

using namespace std;

class FindDoctor {
public:
    string Name;
    string Adres;
    string Problem;
    string Doctor;

    void inputDoctorDetails() {
        cout << "Введите свое имя  : ";
        cin >> Name;
        cout << "Введите свой адрес: ";
        cin >> Adres;
        cout << "Введите свою пробдему: ";
        cin >> Problem;
        cout << "Выберите нужную специальность доктора: ";
        cin >> Doctor;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "Введите город : ";
        cin >> cityName;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "Введите ваше Имя и Фамилию: ";
        cin >> clientName;
    }
};

class Number {
public:
    double clientNumber;

    void inputNumber() {
        cout << "Ваш номер телефона: ";
        cin >> clientNumber;
    }
};

class Adres {
public:
    string Adress;

    void inputAdres() {
        cout << "Введите свой адрес: ";
        cin >> Adress;
    }
};

class Doctor  {
public:
    string professionDoctor;

    void inputDoctor() {
        cout << " Тип доктора: ";
        cin >> professionDoctor;
    }
};

class ApppointmentDays {
public:
    string apppointmentDays;

    void inputapppointmentDays() {
        cout << " Выберите день приема к врачу: ";
        cin >> apppointmentDays;
    }
};


int main() {
  setlocale(LC_ALL, "Russian");
    FindDoctor myFindDoctor;
    myFindDoctor.inputDoctorDetails();

    DepartureCity departure;
    departure.inputDepartureCity();
    
    Client client;
    client.inputClient();
    
    Number number;
    number.inputNumber();
    
    Adres adres;
    adres.inputAdres();
    
    Doctor doctor;
    doctor.inputDoctor();
   
    ApppointmentDays apppointmentDays;
    apppointmentDays.inputapppointmentDays();
    
    cout << "Вы забронировали прием к врачу" << endl;

    return 0;
}
git
