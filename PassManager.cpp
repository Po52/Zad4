//przeciązony operator '[]'
#include "PassManager.h"

void PassManager::addPass(const std::string& nazwa, const std::string& haslo)
{
    m_hasla[nazwa] = haslo;
}

bool PassManager::authenticate(const std::string& nazwa, const std::string& haslo) const
{
    auto it = m_hasla.find(nazwa);
    if (it != m_hasla.end()) {
        return it->second == haslo;
    }
    return false;
}

std::string PassManager::operator[](const std::string& nazwa) const
{
    auto it = m_hasla.find(nazwa);
    if (it != m_hasla.end()) {
        return it->second;
    }
    return "";
}
