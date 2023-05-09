#include "gracz.h"

Gracz::Gracz()
    : m_nazwa(""), m_liczba_punktow(0)
{
}

Gracz::Gracz(const std::string& nazwa, int liczba_punktow)
    : m_nazwa(nazwa), m_liczba_punktow(liczba_punktow)
{
}

std::string Gracz::getNazwa() const
{
    return m_nazwa;
}

int Gracz::getLiczbaPunktow() const
{
    return m_liczba_punktow;
}

bool Gracz::operator<(const Gracz& other) const
{
    return m_liczba_punktow < other.m_liczba_punktow;
}

bool Gracz::operator==(const Gracz& other) const
{
    return m_nazwa == other.m_nazwa && m_liczba_punktow == other.m_liczba_punktow;
}
