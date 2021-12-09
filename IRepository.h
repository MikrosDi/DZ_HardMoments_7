#pragma once

class IRepository {
    virtual void Open(std::string filename) = 0; // бинарная десериализация в файл
    virtual void Save() = 0; // бинарная сериализация в файл
};
