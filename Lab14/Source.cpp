#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string zapis(){
	string filep;
	getline(cin,filep);
	return filep;
}
void main(){
	char b1=0,b2=0;
	char *buf1 = &b1,*buf2= &b2;
	fstream file;
	fstream file2;
	ofstream file3;
	//запись первого файла
	short kolvo=0;
	cout<<"Amount of lines in file: ";cin>>kolvo;
	file.open("source1.txt",ios::out|ios::trunc|ios::binary);
	for (short k=0;k<kolvo+1;k++){
		if (k==0)zapis();else{
			cout<<"Enter line number "<<k<<": ";
			file<<zapis()<<'\n';}}
	file.close();
	//запись второго файла
		cout<<"Amount of lines in file: ";kolvo=0;cin>>kolvo;
	file2.open("source2.txt",ios::out|ios::trunc|ios::binary);
	for (short k=0;k<kolvo+1;k++){
		if (k==0)zapis();else{cout<<"Enter line number "<<k<<": ";
			file2<<zapis()<<'\n';}}
	file2.close();
	//чтение и поиск совпадающих
	file2.open("source2.txt",ios::in|ios::binary);
	file.open("source1.txt",ios::in|ios::binary);
	file3.open("destination.txt",ios::binary);

	while(!file.eof() && !file2.eof()){
		
		
	file.read(buf1,1);file2.read(buf2,1);
	if(*buf1==*buf2)file3.write((char *)&*buf1,1);

	}
	file.close();
	file2.close();
	file3.close();

system("pause");}