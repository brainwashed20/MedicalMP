#include "stdafx.h"

namespace MedicalMP
{
    Patient::Patient(int id, int age, std::string firstName, std::string lastName, bool isDeceased)
        :Person(age, firstName, lastName)
    {
        _id = id;
        _isDeceased = isDeceased;
    }

    Patient::~Patient()
    {
    }

    int Patient::GetId()
    {
        return _id;
    }

    bool Patient::GetIsDeceased()
    {
        return _isDeceased;
    }

    void Patient::SetIsDeceased(bool value)
    {
        _isDeceased = value;
    }
}