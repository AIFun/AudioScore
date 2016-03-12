#ifndef SCORE
#define SCORE

#include <vector>
#include <string>

struct ScoreEntry{
	double similar;
	std::vector<std::string> words;
};

class Score{
private:
	ScoreEntry scoreEntry;	
	std:string standAudioPath;
	std::string userAudioPath;
	std::string words;

public:
	ScoreEntry getSimilaAndWords();
	bool update(std::string standAudioPath, std::string userAudioPath, std::string words);

};


#endif
