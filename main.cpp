#include <iostream>

class Parallelepiped {
private:
    double length;
    double width;
    double height;

public:
    // Конструктор
    Parallelepiped() {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }

    // Перевантажений конструктор з параметрами
    Parallelepiped(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Деструктор
    ~Parallelepiped() {
        std::cout << "Об'єкт Parallelepiped був знищений." << std::endl;
    }

    // Set-методи
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    // Get-методи
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    // Метод обчислення площі поверхні
    double calculateSurfaceArea() const {
        return 2 * (length * width + length * height + width * height);
    }

    // Метод обчислення суми довжин всіх ребер паралелепіпеда
    double calculateSumOfEdges() const {
        return 4 * (length + width + height);
    }

    // Функція для виводу інформації про об'єкт
    void printInfo() const {
        std::cout << "Довжина: " << length << " ширина: " << width << " висота: " << height << std::endl;
        std::cout << "Площа поверхні: " << calculateSurfaceArea() << std::endl;
        std::cout << "Сума довжин ребер: " << calculateSumOfEdges() << std::endl;
    }
};

int main() {

    Parallelepiped parallelepiped(4.0, 3.0, 7.0);

    // Виведення інформації про об'єкт
    parallelepiped.printInfo();

    return 0;
}
