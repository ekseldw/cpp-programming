#include <iostream>
using namespace std;

#define PIPE_ORGAN

void PlayPipeOrgan();
void PlayPiano();

void main() {
#ifdef PIPE_ORGAN
	PlayPipeOrgan();
#else
	PlayPiano();
#endif
}

void PlayPipeOrgan() {
	cout << "PlayPipeOrgan" << endl;
}

void PlayPiano() {
	cout << "PlayPiano" << endl;
}