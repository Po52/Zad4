//przeciązanie operatorów '<' i '=='
#ifndef GRACZ_H
#define GRACZ_H

#include <string>

class Gracz {
public:
    Gracz();
    Gracz(const std::string& nazwa, int liczba_punktow = 0);
    std::string getNazwa() const;
    int getLiczbaPunktow() const;
    bool operator<(const Gracz& other) const;
    bool operator==(const Gracz& other) const;
private:
    std::string m_nazwa;
    int m_liczba_punktow;
};

#endif // GRACZ_H
