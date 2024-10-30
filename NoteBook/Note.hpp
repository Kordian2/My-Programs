#include <iostream>
#include <string>
class Note{
private:
    std::string m_content;
public:
    Note(std::string &content) : m_content(content){}
    void setNote(std::string s){
        m_content = s;
    }
    std::string getNote(void) const{
        return m_content;
    }
    
};