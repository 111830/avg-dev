#include <iostream>
#include <vector>
#include <functional>
#include <cmath>
#include <string>
#include <iomanip>

struct Ekuacioni {
    std::string emri;
    std::function<double(double)> f;
    double a;
    double b;
};

double pergjysmimi(std::function<double(double)> f, double a, double b,
                   double eps, int maxIter, int& iteracionet) {
    double fa = f(a);
    double fb = f(b);

    if (fa * fb >= 0) {
        iteracionet = 0;
        return NAN;
    }

    double c = (a + b) / 2.0;
    iteracionet = 0;

    while ((b - a) / 2.0 > eps && iteracionet < maxIter) {
        c = (a + b) / 2.0;
        double fc = f(c);

        if (std::fabs(fc) < eps) break;

        if (fa * fc < 0) {
            b  = c;
            fb = fc;
        } else {
            a  = c;
            fa = fc;
        }

        iteracionet++;
    }

    return c;
}

int main() {
    std::vector<Ekuacioni> ekuacionet = {
        { "x^3 - x - 2",       [](double x) { return x*x*x - x - 2.0; },       1.0, 2.0 },
        { "e^x - 3x",          [](double x) { return std::exp(x) - 3.0*x; },   0.0, 1.0 },
        { "cos(x) - x",        [](double x) { return std::cos(x) - x; },       0.0, 1.0 },
        { "x^2 - 5",           [](double x) { return x*x - 5.0; },             2.0, 3.0 },
        { "ln(x) + x - 2",     [](double x) { return std::log(x) + x - 2.0; }, 1.0, 2.0 },
        { "x*sin(x) - 1",      [](double x) { return x*std::sin(x) - 1.0; },   0.5, 2.0 }
    };

    const double eps = 1e-6;
    const int maxIter = 100;

    std::cout << std::fixed << std::setprecision(8);
    std::cout << "==================================================\n";
    std::cout << "     METODA E PERGJYSMIMIT - REZULTATET\n";
    std::cout << "==================================================\n";

    for (std::size_t i = 0; i < ekuacionet.size(); i++) {
        const Ekuacioni& ek = ekuacionet[i];
        int iter = 0;
        double rrenja = pergjysmimi(ek.f, ek.a, ek.b, eps, maxIter, iter);

        std::cout << "\nEkuacioni " << (i + 1) << ": f(x) = " << ek.emri << "\n";
        std::cout << "Intervali fillestar: [" << ek.a << ", " << ek.b << "]\n";

        if (std::isnan(rrenja)) {
            std::cout << "Kushti f(a)*f(b)<0 nuk plotesohet ne kete interval!\n";
        } else {
            std::cout << "Rrenja:               x = " << rrenja << "\n";
            std::cout << "f(rrenja):            "     << ek.f(rrenja) << "\n";
            std::cout << "Numri i iteracioneve: "     << iter << "\n";
        }
    }

    return 0;
}