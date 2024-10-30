#include <iostream>
#include <string>
#include <vector>
#include "Note.hpp"
class Notebook {
private:
    std::vector<std::string> m_notes;
public:
    Notebook(std::vector<std::string> &notes):m_notes(notes){}
    void displayNotebook(void){
        for(int i = 1;i!=size(m_notes);i++){
            std::cout<<m_notes[i]<<std::endl;
        }
    }
    void addNote(Note note){
        m_notes.push_back(note.getNote());
    }
};