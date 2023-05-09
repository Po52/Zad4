#ifndef PASSMANAGER_H
#define PASSMANAGER_H

#include <string>
#include <unordered_map>

class PassManager {
public:
    void addPass(const std::string& nazwa, const std::string& haslo);
    bool authenticate(const std::string& nazwa, const std::string& haslo) const;
    std::string operator[](const std::string& nazwa) const;
private:
    std::unordered_map<std::string, std::string> m_hasla;
};

#endif // PASSMANAGER_H
