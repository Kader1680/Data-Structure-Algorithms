#include<iostream>


std::string readName(){
    std::string name;
    std::cout<<"Enter your name: ";
    std::cin>>name;
    return  name;
}

char readChar(){
    char element;
    std::cout<<"Enter your element: ";
    std::cin>>element;
    return  element;
}

char convertLetterStatus(char letter){
    return  isupper(letter) ? tolower(letter) : toupper(letter);
}


short countLetters(std::string name, char element, bool matchCase = true){
    short count = 0;
    for(int i = 0; i < name.length(); i++){

        if (matchCase)
        {
            if(name[i] == element){
                count++;
            }
        }else{
            if(tolower(name[i]) == tolower(element)){
                count++;

            }
        }
        
       
    }
    return count;
}




int main(int argc, char const *argv[]){
    

    std::string name = readName();
    char element = readChar();
    std::cout<<"the number of letter is : ";
    std::cout<<countLetters(name, element);


    std::cout << "Or \'" << convertLetterStatus(element) << "\' ";
    std::cout << " Count = " << countLetters(name, element, false);
    return 0;
}
