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
        cout << "������� ���� ���  : ";
        cin >> Name;
        cout << "������� ���� �����: ";
        cin >> Adres;
        cout << "������� ���� ��������: ";
        cin >> Problem;
        cout << "�������� ������ ������������� �������: ";
        cin >> Doctor;
    }
};

class DepartureCity {
public:
    string cityName;

    void inputDepartureCity() {
        cout << "������� ����� : ";
        cin >> cityName;
    }
};

class Client {
public:
    string clientName;

    void inputClient() {
        cout << "������� ���� ��� � �������: ";
        cin >> clientName;
    }
};

class Number {
public:
    double clientNumber;

    void inputNumber() {
        cout << "��� ����� ��������: ";
        cin >> clientNumber;
    }
};

class Adres {
public:
    string Adress;

    void inputAdres() {
        cout << "������� ���� �����: ";
        cin >> Adress;
    }
};

class Doctor  {
public:
    string professionDoctor;

    void inputDoctor() {
        cout << " ��� �������: ";
        cin >> professionDoctor;
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
    
    cout << "�� ������������� ����� � �����" << endl;

    return 0;
}
