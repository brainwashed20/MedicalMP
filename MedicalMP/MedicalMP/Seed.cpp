#include "stdafx.h"

namespace MedicalMP
{
    void Seed(Context* context)
    {
        SeedDepartments(context);
        SeedDoctors(context);
        SeedPatients(context);
        SeedMedicalFiles(context);
    }


    void SeedDepartments(Context* context)
    {
        context->Departments.push_back(new Department(1, "Plastic Surgery"));
        context->Departments.push_back(new Department(2, "Scientific"));
        context->Departments.push_back(new Department(3, "Innuendo"));
        context->Departments.push_back(new Department(4, "Second floor"));
        context->Departments.push_back(new Department(5, "Michigan Emergency"));
        context->Departments.push_back(new Department(6, "First floor"));
        context->Departments.push_back(new Department(7, "Third floor"));
        context->Departments.push_back(new Department(8, "Fourth floor"));
        context->Departments.push_back(new Department(9, "Fifth floor"));
        context->Departments.push_back(new Department(10, "Illinois Mental"));

        context->Departments.push_back(new Department(1, "Chirurgie"));
        context->Departments.push_back(new Department(2, "Cardiologie"));
        context->Departments.push_back(new Department(3, "Hematologie"));
        context->Departments.push_back(new Department(4, "Neurologie"));
        context->Departments.push_back(new Department(5, "Ortopedie"));
        context->Departments.push_back(new Department(6, "Oftalmologie"));
    }

    void SeedDoctors(Context* context)
    {
        context->Doctors.push_back(new Doctor(1, 1, 33, Grade::Junior, "Remus", "Nicusor"));
        context->Doctors.push_back(new Doctor(2, 2, 35, Grade::Junior, "Horia", "Octavian"));
        context->Doctors.push_back(new Doctor(3, 2, 36, Grade::Middle, "Ilie", "Cristi"));
        context->Doctors.push_back(new Doctor(4, 2, 38, Grade::Junior, "Ciprian", "Matei"));
        context->Doctors.push_back(new Doctor(5, 1, 25, Grade::Entry, "Aurel", "Cristi"));
        context->Doctors.push_back(new Doctor(6, 3, 44, Grade::Middle, "Cezar", "David"));
        context->Doctors.push_back(new Doctor(7, 3, 40, Grade::Middle, "Dorin", "Stan"));
        context->Doctors.push_back(new Doctor(8, 1, 41, Grade::Middle, "Iuliu", "Iosif"));
        context->Doctors.push_back(new Doctor(9, 4, 57, Grade::Senior, "Mitica", "Costache"));
        context->Doctors.push_back(new Doctor(10, 4, 30, Grade::Junior, "Costin", "Costica"));

        context->Doctors.push_back(new Doctor(11, 4, 63, Grade::Senior, "Pompiliu", "Petre"));
        context->Doctors.push_back(new Doctor(12, 4, 65, Grade::Senior, "Remus", "Ion"));
        context->Doctors.push_back(new Doctor(13, 5, 56, Grade::Senior, "Andrei", "Iuliu"));
        context->Doctors.push_back(new Doctor(14, 5, 58, Grade::Senior, "Serafim", "Eduard"));
        context->Doctors.push_back(new Doctor(15, 6, 55, Grade::Senior, "Cristian", "Emilian"));
        context->Doctors.push_back(new Doctor(16, 6, 54, Grade::Middle, "Pompiliu", "Constantin"));
        context->Doctors.push_back(new Doctor(17, 6, 30, Grade::Junior, "Tiberiu", "Timotei"));
        context->Doctors.push_back(new Doctor(18, 7, 31, Grade::Junior, "Paul", "Costache"));
        context->Doctors.push_back(new Doctor(19, 7, 37, Grade::Junior, "Octavian", "Adrian"));
        context->Doctors.push_back(new Doctor(20, 7, 30, Grade::Junior, "Atanase", "Dan"));

        context->Doctors.push_back(new Doctor(100, 3, 47, Middle, "Augustin", "Cimbru"));
        context->Doctors.push_back(new Doctor(101, 5, 39, Middle, "Remus", "Petala"));
        context->Doctors.push_back(new Doctor(102, 1, 50, Middle, "Stefan", "Petrescu"));
        context->Doctors.push_back(new Doctor(103, 2, 60, Senior, "Marcela", "Horia"));
        context->Doctors.push_back(new Doctor(104, 6, 32, Junior, "Anton", "Balauta"));
        context->Doctors.push_back(new Doctor(105, 4, 55, Senior, "Neli", "Spataru"));
    }

    void SeedPatients(Context* context)
    {
        context->Patients.push_back(new Patient(1, 8, "Tudor", "Petru", false));
        context->Patients.push_back(new Patient(2, 18, "Simon", "Cezar", false));
        context->Patients.push_back(new Patient(3, 22, "Daniel", "Carol", false));
        context->Patients.push_back(new Patient(4, 55, "Dinu", "Veaceslav", true));
        context->Patients.push_back(new Patient(5, 60, "Dorin", "Petru", false));
        context->Patients.push_back(new Patient(6, 48, "Iancu", "Andrei", true));
        context->Patients.push_back(new Patient(7, 38, "Cristi", "Cornel", false));
        context->Patients.push_back(new Patient(8, 26, "Octavian", "Mitica", false));
        context->Patients.push_back(new Patient(9, 40, "Gavril", "Corneliu", true));
        context->Patients.push_back(new Patient(10, 50, "Cristian", "Carol", false));

        context->Patients.push_back(new Patient(11, 10, "Maria", "Silviu", false));
        context->Patients.push_back(new Patient(12, 18, "Gabi", "Augustin", true));
        context->Patients.push_back(new Patient(13, 33, "Dragomir", "Denis", false));
        context->Patients.push_back(new Patient(14, 54, "Octavian", "Vasile", false));
        context->Patients.push_back(new Patient(15, 11, "Iulian", "Serafim", true));
        context->Patients.push_back(new Patient(16, 72, "Simon", "Tiberiu", true));
        context->Patients.push_back(new Patient(17, 38, "Mihaita", "Eduard", true));
        context->Patients.push_back(new Patient(18, 7, "Ionut", "Dorin", false));
        context->Patients.push_back(new Patient(19, 5, "Haralamb", "Corneliu", false));
        context->Patients.push_back(new Patient(20, 60, "Alin", "Costel", false));

        context->Patients.push_back(new Patient(21, 12, "Nicu", "Horia", true));
        context->Patients.push_back(new Patient(22, 12, "Cristian", "Stefan", true));
        context->Patients.push_back(new Patient(23, 32, "Petrica", "Victor", true));
        context->Patients.push_back(new Patient(24, 55, "Paul", "Lucian", false));
        context->Patients.push_back(new Patient(25, 15, "Marian", "Eugen", false));
        context->Patients.push_back(new Patient(26, 75, "Andrei", "Traian", false));
        context->Patients.push_back(new Patient(27, 68, "Virgil", "Costin", false));
        context->Patients.push_back(new Patient(28, 17, "Emanuel", "Danut", false));
        context->Patients.push_back(new Patient(29, 15, "Dragomir", "Timotei", false));
        context->Patients.push_back(new Patient(30, 70, "Cornel", "Felix", true));

        context->Patients.push_back(new Patient(31, 20, "Iuliu", "Beniamin", false));
        context->Patients.push_back(new Patient(32, 20, "Vlad", "Remus", false));
        context->Patients.push_back(new Patient(33, 21, "Dionisie", "Flaviu", false));
        context->Patients.push_back(new Patient(34, 35, "Emanuel", "Vasilica", false));
        context->Patients.push_back(new Patient(35, 31, "Stelian", "Gabi", false));
        context->Patients.push_back(new Patient(36, 76, "Theodor", "Maria", false));
        context->Patients.push_back(new Patient(37, 86, "Ilie", "Mihail", true));
        context->Patients.push_back(new Patient(38, 56, "Miron", "Gabriel", true));
        context->Patients.push_back(new Patient(39, 58, "Anton", "Valeriu", true));
        context->Patients.push_back(new Patient(40, 71, "Eugen", "Corneliu", true));

        context->Patients.push_back(new Patient(41, 9, "Cosmin", "Mihail", false));
        context->Patients.push_back(new Patient(42, 11, "Darius", "Tiberiu", false));
        context->Patients.push_back(new Patient(43, 1, "Horea", "Virgil", false));
        context->Patients.push_back(new Patient(44, 5, "Bogdan", "Valerian", false));
        context->Patients.push_back(new Patient(45, 1, "Costin", "Gheorghe", false));
        context->Patients.push_back(new Patient(46, 74, "Virgil", "Horia", true));
        context->Patients.push_back(new Patient(47, 74, "Mihaita", "Pompiliu", false));
        context->Patients.push_back(new Patient(48, 71, "Doru", "Paul", false));
        context->Patients.push_back(new Patient(49, 79, "Gabriel", "Eugen", false));
        context->Patients.push_back(new Patient(50, 61, "Traian", "Marius", false));

        context->Patients.push_back(new Patient(100, 45, "Andrei", "Antoni", false));
        context->Patients.push_back(new Patient(101, 38, "Alexandru", "Mateescu", false));
        context->Patients.push_back(new Patient(102, 43, "Bogdan", "Musat", false));
        context->Patients.push_back(new Patient(103, 65, "Berta", "Bolini", true));
        context->Patients.push_back(new Patient(104, 29, "Bianca", "Rotaru", false));
        context->Patients.push_back(new Patient(105, 18, "Colin", "Draganu", false));
        context->Patients.push_back(new Patient(106, 23, "Costel", "Vasile", false));
        context->Patients.push_back(new Patient(107, 55, "Dan", "Caciula", false));
        context->Patients.push_back(new Patient(108, 53, "Daniela", "Matache", true));
        context->Patients.push_back(new Patient(109, 47, "Darius", "Adelei", false));
        context->Patients.push_back(new Patient(110, 33, "Erica", "Nicola", false));
    }

    void SeedMedicalFiles(Context* context)
    {
        tm time;

        time.tm_year = 2000;
        time.tm_mon = 5;
        time.tm_mday = 30;
        context->MedicalFiles.push_back(new MedicalFile(1, 1, 1, time, Disease::Acne));

        time.tm_year = 2001;
        time.tm_mon = 9;
        time.tm_mday = 10;
        context->MedicalFiles.push_back(new MedicalFile(2, 2, 1, time, Disease::BoneCancer));

        time.tm_year = 2005;
        time.tm_mon = 6;
        time.tm_mday = 22;
        context->MedicalFiles.push_back(new MedicalFile(3, 12, 5, time, Disease::RenalFatigue));

        time.tm_year = 2010;
        time.tm_mon = 8;
        time.tm_mday = 14;
        context->MedicalFiles.push_back(new MedicalFile(4, 4, 5, time, Disease::Deafness));

        time.tm_year = 2004;
        time.tm_mon = 3;
        time.tm_mday = 3;
        context->MedicalFiles.push_back(new MedicalFile(5, 4, 5, time, Disease::Depression));

        time.tm_year = 2001;
        time.tm_mon = 5;
        time.tm_mday = 5;
        context->MedicalFiles.push_back(new MedicalFile(6, 5, 6, time, Disease::DrugAbuse));

        time.tm_year = 2002;
        time.tm_mon = 11;
        time.tm_mday = 30;
        context->MedicalFiles.push_back(new MedicalFile(7, 6, 5, time, Disease::EatingDisorder));

        time.tm_year = 2002;
        time.tm_mon = 11;
        time.tm_mday = 29;
        context->MedicalFiles.push_back(new MedicalFile(8, 7, 2, time, Disease::Allergy));

        time.tm_year = 2003;
        time.tm_mon = 7;
        time.tm_mday = 15;
        context->MedicalFiles.push_back(new MedicalFile(9, 7, 10, time, Disease::BackPain));

        time.tm_year = 2003;
        time.tm_mon = 7;
        time.tm_mday = 15;
        context->MedicalFiles.push_back(new MedicalFile(10, 7, 19, time, Disease::Allzheimer));

        time.tm_year = 2005;
        time.tm_mon = 9;
        time.tm_mday = 16;
        context->MedicalFiles.push_back(new MedicalFile(11, 10, 4, time, Disease::Allzheimer));

        time.tm_year = 2009;
        time.tm_mon = 10;
        time.tm_mday = 23;
        context->MedicalFiles.push_back(new MedicalFile(12, 10, 5, time, Disease::EatingDisorder));

        time.tm_year = 2005;
        time.tm_mon = 10;
        time.tm_mday = 18;
        context->MedicalFiles.push_back(new MedicalFile(13, 10, 11, time, Disease::Allergy));

        time.tm_year = 2007;
        time.tm_mon = 10;
        time.tm_mday = 13;
        context->MedicalFiles.push_back(new MedicalFile(14, 11, 6, time, Disease::Scabies));

        time.tm_year = 2001;
        time.tm_mon = 4;
        time.tm_mday = 13;
        context->MedicalFiles.push_back(new MedicalFile(15, 17, 7, time, Disease::Smallpox));

        time.tm_year = 2001;
        time.tm_mon = 4;
        time.tm_mday = 12;
        context->MedicalFiles.push_back(new MedicalFile(16, 21, 8, time, Disease::Allergy));

        time.tm_year = 2000;
        time.tm_mon = 5;
        time.tm_mday = 5;
        context->MedicalFiles.push_back(new MedicalFile(17, 11, 4, time, Disease::Tuberculosis));

        time.tm_year = 2005;
        time.tm_mon = 9;
        time.tm_mday = 4;
        context->MedicalFiles.push_back(new MedicalFile(18, 13, 4, time, Disease::Tuberculosis));

        time.tm_year = 2005;
        time.tm_mon = 9;
        time.tm_mday = 6;
        context->MedicalFiles.push_back(new MedicalFile(19, 15, 1, time, Disease::Obesity));

        time.tm_year = 2010;
        time.tm_mon = 12;
        time.tm_mday = 22;
        context->MedicalFiles.push_back(new MedicalFile(20, 16, 3, time, Disease::Leukemia));

        time.tm_year = 2010;
        time.tm_mon = 12;
        time.tm_mday = 20;
        context->MedicalFiles.push_back(new MedicalFile(21, 16, 3, time, Disease::Headache));

        time.tm_year = 2009;
        time.tm_mon = 4;
        time.tm_mday = 17;
        context->MedicalFiles.push_back(new MedicalFile(22, 19, 12, time, Disease::HeelPain));

        time.tm_year = 2010;
        time.tm_mon = 8;
        time.tm_mday = 5;
        context->MedicalFiles.push_back(new MedicalFile(23, 14, 12, time, Disease::Vertigo));

        time.tm_year = 2010;
        time.tm_mon = 5;
        time.tm_mday = 5;
        context->MedicalFiles.push_back(new MedicalFile(24, 14, 12, time, Disease::Allergy));

        time.tm_year = 2010;
        time.tm_mon = 4;
        time.tm_mday = 1;
        context->MedicalFiles.push_back(new MedicalFile(25, 12, 12, time, Disease::Gonorrhea));

        time.tm_year = 2003; time.tm_mon = 10; time.tm_mday = 25;
        context->MedicalFiles.push_back(new MedicalFile(100, 100, 1, time, Cholesterol));
        time.tm_year = 2007; time.tm_mon = 11; time.tm_mday = 12;
        context->MedicalFiles.push_back(new MedicalFile(101, 101, 1, time, EatingDisorder));
        time.tm_year = 2004; time.tm_mon = 5; time.tm_mday = 16;
        context->MedicalFiles.push_back(new MedicalFile(102, 102, 1, time, Headache));
        time.tm_year = 2000; time.tm_mon = 8; time.tm_mday = 21;
        context->MedicalFiles.push_back(new MedicalFile(103, 103, 1, time, Tuberculosis));
        time.tm_year = 2008; time.tm_mon = 3; time.tm_mday = 15;
        context->MedicalFiles.push_back(new MedicalFile(104, 104, 1, time, Infertility));
        time.tm_year = 2011; time.tm_mon = 11; time.tm_mday = 12;
        context->MedicalFiles.push_back(new MedicalFile(105, 105, 1, time, Allergy));
        time.tm_year = 2012; time.tm_mon = 4; time.tm_mday = 7;
        context->MedicalFiles.push_back(new MedicalFile(106, 106, 1, time, Pneumonia));
        time.tm_year = 2004; time.tm_mon = 6; time.tm_mday = 8;
        context->MedicalFiles.push_back(new MedicalFile(107, 107, 1, time, Obesity));
        time.tm_year = 2006; time.tm_mon = 3; time.tm_mday = 27;
        context->MedicalFiles.push_back(new MedicalFile(108, 108, 1, time, LungCancer));
        time.tm_year = 2003; time.tm_mon = 10; time.tm_mday = 19;
        context->MedicalFiles.push_back(new MedicalFile(109, 109, 1, time, Migraine));
        time.tm_year = 2008; time.tm_mon = 5; time.tm_mday = 12;
        context->MedicalFiles.push_back(new MedicalFile(101, 101, 1, time, EarProblems));
    }
}