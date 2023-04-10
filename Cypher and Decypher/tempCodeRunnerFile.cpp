Myfile.open("Encrypted.txt", ios::out);
    if(Myfile.is_open()) {
        for(i=0; i<size; i++) {
            string line = lineArr[i];
            for(j=0; j<line.length(); j++)  {
                Myfile << (int)line[j] << " ";
            }
            Myfile << endl;
        }

    }