/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:35:53 by ybaudoui          #+#    #+#             */
/*   Updated: 2023/01/11 11:35:54 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {

    std::ifstream   infile;
    std::ofstream   infile2;
    std::string     infile_replace;
    std::string     str1;
    std::string     str2;
    std::string     tmp;
    std::string     line;

    if (argc != 4) {
        
        std::cout << "You must enter 3 parameters (filename, string1 and string2)" << std::endl;
        return (1);
    }
    str1 = argv[2];
    str2 = argv[3];
    infile.open(argv[1]);
    infile_replace = (std::string)argv[1] + ".replace";
    if (!infile.is_open()) {
        std::cout << "Unable to open file for reading!" << std::endl;
        return (1);
    }
    while (std::getline(infile, line))
        if (!line.empty())
            tmp.append(line + "\n");
    while ((int)tmp.find(str1) != -1) {
        int pos = tmp.find(str1);
        tmp.erase(pos,str1.length());
        tmp.insert(pos, str2);
    }
    infile2.open(infile_replace.c_str());
    if (!infile2.is_open()) {
        std::cout << "Unable to open file for writing!" << std::endl;
        return (1);
    }
    infile2 << tmp;
    infile.close();
    infile2.close();
}