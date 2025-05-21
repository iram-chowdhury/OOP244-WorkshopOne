#ifndef SENECA_IO_H
#define SENECA_IO_H

namespace seneca {
  struct PhoneRec {
    char firstName[16];
    char lastName[26];
    long long phoneNumber;
  };

  void read(char name[]);

  void print(long long phoneNumber);

  void print(const PhoneRec &rec,  size_t &row, const char* filter = nullptr);

  bool read(PhoneRec &reference, FILE* openedFile);
  
  void print(PhoneRec* records[], int sizeOfArray, const char* filter = nullptr);

  void setPointers(PhoneRec* pointers[],  PhoneRec records[], int sizeOfArray);

  void sort(PhoneRec* records[], size_t size, bool byLastName);


}

#endif // !SENECA_IO_H