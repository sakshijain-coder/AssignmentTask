#include<iostream>
enum class note{middleC,Csharp,EFlat};
class Instrument
{
public:
	virtual void play(note) {
		std::cout << "instrument::play" << std::endl;
	}
	virtual std::string what()  {
		return "Instrument";
	}
	virtual void adjust(int){
		std::cout << "instrument::adjust" << std::endl;
	}
};
class Wind:public Instrument
{
	
public:
	void play(note) {
		std::cout << "Wind::play" << std::endl;
	}
	std::string what() const {
		return "Wind";
	}
	
};
class Percussion : public Instrument
{
public:
	void play(note) {
		std::cout << "Percussion::play" << std::endl;
	}
	std::string what() const {
		return "Percussion";
	}
	void adjust(int) {}
};
class Brass : public Wind
{
public:
	void play(note) {
		std::cout << "Brass::play" << std::endl;
	}
	std::string what() const {
		return "Brass";
	}
	
};
class Wind1 :public Wind
{
public:
	void play(note) {
		std::cout << "Wind1::play" << std::endl;
	}
};
void tune(Instrument&i)
{
	i.play(note::middleC);
}
void tune2(Instrument* i)
{
	i->play(note::middleC);
}
void f(Instrument& i) {
	i.adjust(1);
}
Instrument* A[] = { new Wind,new Percussion,new Brass };
int main()
{
	Wind flute;
	Instrument ins;
	Wind1 flute1;
	Percussion p;
	Brass brass;
	tune(flute);
	tune(ins);
	tune(flute1);
	tune(p);
	tune(brass);
	f(brass);
	std::cout << sizeof(Wind1);
	
	tune2(A[0]);
	tune2(A[1]);
	tune2(A[2]);
	return 0;
}
