#include <iostream>
#include <fstream>
using namespace std;

// note function
float getLength(int n) {
    return 4. / (float)n; // txt.file : 4->4분음표, 8->8분음표, 16->16분음표
}

// frequency function
float getFrequency(char f) {
    // txt.file : char f ->
    // Octave 3
    if (f == 'C') return 130.81; // 도
    else if (f == 'D') return 146.83; // 레
    else if (f == 'E') return 164.81; // 미
    else if (f == 'F') return 174.61; // 파
    else if (f == 'G') return 196.00; // 솔
    else if (f == 'A') return 220.00; // 라
    else if (f == 'B') return 246.94; // 시
}

// amplitude function, 음 세기 입력
float getAmplitude(int a) {
    // 중간 5000, 크게 10000 정도
    return a * 1000; // txt.file : 5->5000, 10->10000
}


int main() {
    ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::in | ios::binary);
    if (!xx) return 999;
    char header[44];

    xx.read(header, 44); // "Beatles.wav" header 44bytes read
    short* n;  n = (short*)(header + 22); // NumChannels
    int* fs;   fs = (int*)(header + 24); // SampleRate
    int* b;    b = (int*)(header + 28); // ByteRate

    int N = fs[0] * 10;  // samples for 10 seconds
    short* data;
    data = new short[N]; // allocate meory for 10 seconds mono
    for (int i = 0; i < N; i++) data[i] = 0;

    const float pi = 3.141592;
    float dt = 1. / fs[0];

    *n = 1; // NumChannels = 1, mono
    *b = n[0] * fs[0] * sizeof(short); // ByteRate = NumChannels * SampleRate * sizeof(short);


    // read note, frequency, amplitude for text file
    ifstream yy("mtrabbit.txt");
    if (!yy) return 777;

    int nn, eu, ss;
    float f, ff, a, T;
    char hh;
    int z = 0;

    yy >> nn; // count note
    for (int i = 0; i < nn; i++) {
        yy >> eu >> hh >> ss;  // eu:note, hh:frequency, ss:amplitude
        T = getLength(eu);
        f = getFrequency(hh);
        a = getAmplitude(ss);
        ff = f * 1.5;

        for (int ii = 0; ii < T * fs[0]; ii++) {
            data[z + ii] += (short)(a * sin(2.0 * pi * f * ii * dt) + a * sin(2.0 * pi * ff * ii * dt));
        }
        z += T * fs[0];
    }
    yy.close();


    // write wav. file
    ofstream zz("mtrabbit.wav", ios::binary | ios::out);
    if (!zz) return 666;
    zz.write(header, 44 * sizeof(char));
    zz.write((char*)data, N * sizeof(short));
    zz.close();
    return 222;
}
