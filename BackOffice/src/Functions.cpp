#include "Functions.hpp"

std::string toLower(const std::string& word){
  std::string lowerWord;
  std::for_each(word.begin(), word.end(), [&](char c){lowerWord += std::tolower(c);});
  return lowerWord;
}

std::vector<std::string> getWords(std::string s, char separator){
  std::vector<std::string> words;
  std::string w;

  std::for_each(s.begin(), s.end(), [&](char c) {
      if (c != separator){
        w += c;
      }
      else 
	{
	  if (w.length()) words.push_back(w);
	  w.clear();
	}
    });
  if(!w.empty()){
    words.push_back(w);    
  }

  return words;
}
