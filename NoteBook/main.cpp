#include <iostream>

#include "Notebook.hpp"

int main(){
    Notebook notebook1;
    Note note1("Testowa notatka");
    notebook1.addNote(note1);
    notebook1.display();
}