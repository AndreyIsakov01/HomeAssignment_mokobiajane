//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83
#include "Transformers.h"
#ifndef DINOBOT_H
#define DINOBOT_H
#include <iostream>
#include <string>

// добавить изменение описаные в autobot.h
class Dinobot : public Basetransformer{
    private:
    std::string dinosaurForm;
    std::string dangerous;
    
    
    public:
    //+1 when an object is created
    static int  dinobotCounter;
    //constructor
    Dinobot(){
        dinobotCounter++;
    }
    std::string getDinosaurForm() const;
    void setDinosaurForm(std::string newDinosaurForm);

    std::string getDangeorus() const;
    void setDangerous(std::string newDangerous);
    
    };
    
 #endif

 
