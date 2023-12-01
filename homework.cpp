#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    //* First
    cout << "1 задание: " << endl;
    float b1, b2, h, s;
    cout << "Введите первое основание: ";
    cin >> b1;
    cout << "Введите второе основание: ";
    cin >> b2;
    cout << "Введите высоту: ";
    cin >> h;
    s = (b1 + b2) / 2 * h;
    cout << "Площадь трапеции: " << s << endl;
    cout << "2 задание: " << endl;
    
    
    //*Second
    float r = 0.0;
    float pl, c;
    cout << "Введите радиус: ";
    cin >> r;
    float r_2 = pow(r, 2);
    double pi = 3.14;
    pl = pi * r_2;
    cout << "Площадь круга: " << pl << endl;
    c = 2 * pi * r;
    cout << "Длина окружности: " << c << endl;
    
    //*Third
    cout << "3 задание: " << endl;
    float a, b, gip, pll, a_2, b_2, c_2;
    cout << "Введите катет a: ";
    cin >> a;
    cout << "Введите катет b: ";
    cin >> b;
    pll = (a + b) / 2;
    cout << "Площадь равна: " << pll << endl;
    a_2 = pow(a, 2);
    b_2 = pow(b, 2);
    c_2 = a_2 + b_2;
    gip = sqrt(c_2);
    cout << "Гипотенуза равна: " << gip << endl;
    
    //*Fourth
    cout << "4 задание: " << endl;
    int num;
    cout << "Введите четырехзначное число: ";
    cin >> num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Сумма цифр: " << sum << endl;
    
    //*Fifth
    cout << "5 задание: " << endl;
    double x, y;
    cout << "Введите значение x: ";
    cin >> x;
    cout << "Введите значение y: ";
    cin >> y;
    double rr = std::sqrt(x*x + y*y);
    double theta = std::atan2(y, x);
    cout << "Радиус (rr): " << rr << endl;
    cout << "Угол(0) в радианах: " << theta << endl;
    
    //*Sixth
    cout << "6 задание: " << endl;
    double rrr, ttheta;
    cout << "Введите значение радиуса (rrr): ";
    cin >> rrr;
    cout << "Введите значение угла (θ) в радианах: ";
    cin >> ttheta;
    double xx = rrr * cos(ttheta);
    double yy = rrr * std::sin(ttheta);
    cout << "Координата xx: " << xx << endl;
    cout << "Координата yy: " << yy << endl;
    
    //*Seventh
    cout << "7 задание: " << endl;
    double m, e, k;
    cout << "Введите коэффициент m: ";
    cin >> m;
    cout << "Введите коэффициент e: ";
    cin >> e;
    cout << "Введите коэффициент k: ";
    cin >> k;
    
    
    double discriminant = e*e - 4*m*k;
    
    if (discriminant > 0) {
        
        double root1 = (-e + sqrt(discriminant)) / (2*m);
        double root2 = (-e - sqrt(discriminant)) / (2*m);
        cout << "Два корня: " << root1 << " и " << root2 << endl;
    } else if (discriminant == 0) {
        
        double root = -e / (2*m);
        cout << "Один корень: " << root <<endl;
    } else {
        
        double realPart = -e / (2*m);
        double imaginaryPart = sqrt(-discriminant) / (2*m);
        cout << "Два комплексных корня: " << realPart << " + i" << imaginaryPart
        << " и " << realPart << " - i" << imaginaryPart << endl;
        
    }
    //*Ninth
    cout << "9 задание: " << endl;
    int kk;
    cout << "Введите количество секунд k: ";
    cin >> kk;
    
    
    int hours = kk / 3600;
    int minutes = (kk % 3600) / 60;
    
    cout << "Прошло целых часов: " << hours << endl;
    cout << "Прошло целых минут: " << minutes << endl;
    
    //*Eleventh
    cout << "11 задание: " << endl;
    double purchaseAmount;
    cout << "Введите стоимость покупки в рублях: ";
    cin >> purchaseAmount;
    
    
    double discountRate = 0.10;
    double discountedAmount = purchaseAmount;
    
    if (purchaseAmount > 1000) {
        discountedAmount = purchaseAmount - purchaseAmount * discountRate;
        cout << "Применена скидка 10%." << endl;
    }
    cout << "Итоговая стоимость покупки: " << discountedAmount << " рублей." << endl;
    
    //*Tenth
    cout << "10 задание: " << endl;
    double a_a, b_b, c_c;
    cout << "Введите стороны треугольника a_a, b_b, c_c: ";
    cin >> a_a >> b_b >> c_c;
    if (a_a == b_b || b_b == c_c|| a_a == c_c) {
        cout << "Треугольник является равнобедренным." << endl;
    } else {
        cout << "Треугольник не является равнобедренным." << endl;
    }
    
    
    //*Twelveth
    cout << "12 задание: " << endl;
    double height, weight;
    cout << "Введите ваш рост в см: ";
    cin >> height;
    cout << "Введите ваш вес в кг: ";
    cin >> weight;
    

    double idealWeight = height - 100;
    

    if (weight < idealWeight) {
        cout << "Ваш вес меньше идеального. Рекомендуется набрать немного веса." << endl;
    } else if (weight > idealWeight) {
        cout << "Ваш вес больше идеального. Рекомендуется постараться похудеть." << endl;
    } else {
        cout << "Ваш вес идеальный. Продолжайте поддерживать здоровый образ жизни!" << endl;
    }
    
    //*13th
    cout << "13 задание: " << endl;
    
    srand(static_cast<unsigned int>(time(0)));
    
    int num1 = rand() % 9 + 1;
    int num2 = rand() % 9 + 1;
    int product = num1 * num2;
    cout << "Умножьте " << num1 << " на " << num2 << ": ";
    int userResult;
    cin >> userResult;
    if (userResult == product) {
        cout << "Правильно! Вы не ошиблись." << endl;
    } else {
        cout << "Ошибка. Правильный ответ: " << product << endl;
        
    }
    
    //*14th
    cout << "14 задание: " << endl;
    double duration;
    int dayOfWeek;
    
    cout << "Введите продолжительность разговора в минутах: ";
    cin >> duration;
    cout << "Введите день недели (число от 1 до 7, где 1 - понедельник, 7 - воскресенье): ";
    cin >> dayOfWeek;
    double cost = duration * 0.5;
    
    if (dayOfWeek == 6 || dayOfWeek == 7) {
        double discount = 0.20;
        cost -= cost * discount;
        cout << "Применена скидка 20% в выходной день." << endl;
    }
    cout << "Общая стоимость разговора: " << cost << " рублей." << endl;
    
    //*15th
    cout << "15 задание: " << endl;
    int monthNumber;
    cout << "Введите номер месяца (от 1 до 12): ";
    cin >> monthNumber;
    if (monthNumber < 1 || monthNumber > 12) {
        cout << "Некорректный номер месяца. Введите число от 1 до 12." << endl;
        return 1;
    }
    const char* monthNames[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    const char* season;
    if (monthNumber >= 3 && monthNumber <= 5) {
        season = "Весна";
    } else if (monthNumber >= 6 && monthNumber <= 8) {
        season = "Лето";
    } else if (monthNumber >= 9 && monthNumber <= 11) {
        season = "Осень";
    } else {
        season = "Зима";
    }
    cout << "Месяц: " << monthNames[monthNumber - 1] << endl;
    cout << "Время года: " << season << endl;
    
    //*17th
    cout << "17 задание: " << endl;
    int number;
    cout << "Введите число от 1 до 99: ";
    cin >> number;
    if (number < 1 || number > 99) {
        cout << "Некорректное число. Введите число от 1 до 99." << endl;
        return 1;
    }
    const char* wordForm;
    if (number >= 11 && number <= 19) {
        wordForm = "копеек";
    } else {
        int lastDigit = number % 10;
        switch (lastDigit) {
            case 1:
                wordForm = "копейка";
                break;
            case 2:
            case 3:
            case 4:
                wordForm = "копейки";
                break;
            default:
                wordForm = "копеек";
                break;
        }
    }
    
        cout << number << " " << wordForm << endl;
        return 0;
    }
