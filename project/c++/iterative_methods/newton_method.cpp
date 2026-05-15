#include <iostream>
#include <vector>
#include <functional>
#include <cmath>
#include <string>
#include <iomanip>

struct Ekuacioni {
    std::string emri;
    std::function<double(double)> f;
    std::function<double(double)> df;
    double x0;
};

double njutoni(std::function<double(double)> f, std::function<double(double)> df,
               double x0, double eps, int maxIter, int& iteracionet, bool& deshtoi) {
    double x = x0;
    iteracionet = 0;
    deshtoi = false;

    while (iteracionet < maxIter) {
        double fx  = f(x);
        double dfx = df(x);

        if (std::fabs(dfx) < 1e-12) {
            deshtoi = true;
            return NAN;
        }

        double x_ri = x - fx / dfx;

        if (std::fabs(x_ri - x) < eps) {
            x = x_ri;
            iteracionet++;
            return x;
        }

        x = x_ri;
        iteracionet++;
    }

    return x;
}

int main() {
    std::vector<Ekuacioni> ekuacionet = {
        { "x^3 - x - 2",
          [](double x) { return x*x*x - x - 2.0; },
          [](double x) { return 3.0*x*x - 1.0; },
          1.5 },

        { "e^x - 3x",
          [](double x) { return std::exp(x) - 3.0*x; },
          [](double x) { return std::exp(x) - 3.0; },
          0.5 },

        { "cos(x) - x",
          [](double x) { return std::cos(x) - x; },
          [](double x) { return -std::sin(x) - 1.0; },
          0.5 },

        { "x^2 - 5",
          [](double x) { return x*x - 5.0; },
          [](double x) { return 2.0*x; },
          2.5 },

        { "ln(x) + x - 2",
          [](double x) { return std::log(x) + x - 2.0; },
          [](double x) { return 1.0/x + 1.0; },
          1.5 },

        { "x*sin(x) - 1",
          [](double x) { return x*std::sin(x) - 1.0; },
          [](double x) { return std::sin(x) + x*std::cos(x); },
          1.0 }
    };

    const double eps = 1e-6;
    const int maxIter = 100;

    std::cout << std::fixed << std::setprecision(8);
    std::cout << "==================================================\n";
    std::cout << "     METODA E NJUTONIT - REZULTATET\n";
    std::cout << "==================================================\n";

    for (std::size_t i = 0; i < ekuacionet.size(); i++) {
        const Ekuacioni& ek = ekuacionet[i];
        int iter = 0;
        bool deshtoi = false;
        double rrenja = njutoni(ek.f, ek.df, ek.x0, eps, maxIter, iter, deshtoi);

        std::cout << "\nEkuacioni " << (i + 1) << ": f(x) = " << ek.emri << "\n";
        std::cout << "Vlera fillestare:     x0 = " << ek.x0 << "\n";

        if (deshtoi) {
            std::cout << "Derivati u be shume i vogel - metoda deshtoi!\n";
        } else {
            std::cout << "Rrenja:               x = " << rrenja << "\n";
            std::cout << "f(rrenja):            "     << ek.f(rrenja) << "\n";
            std::cout << "Numri i iteracioneve: "     << iter << "\n";
        }
    }

    return 0;
}