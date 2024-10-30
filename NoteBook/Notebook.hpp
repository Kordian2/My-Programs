#include <iostream>
#include <string>
#include <vector>
#include "Note.hpp"
class Notebook {
private:
    std::vector<std::string> m_notes;
public:
    
    void display(void){
        for(int i = 0;i<size(m_notes);i++){
            std::cout<<m_notes[i]<<std::endl;
        }
    }
    void addNote(Note note){
        m_notes.push_back(note.getNote());
    }
};