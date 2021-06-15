#include <iostream>

using namespace std;

int main()
{
    //Building a Digital Time Converter Program
    cout << "HELLO AND WELOCME TO {THIS THING}. DO YOU WANT TO__" << endl;
    cout << "1. Convert TO seconds ? " << endl;
    cout << "2. Convert FROM seconds ? "<< endl;
    cout << "( to / from )" << endl;
    string ansinput;
    cout << endl;
    cin >> ansinput;

    if(ansinput == "to"){
        cout << endl;
        cout << "Please enter the data to convert to seconds: " << endl;
        cout << "Days   : " << flush;
        int daysinput;
        cin >> daysinput;

        cout << "Hours  : " << flush;
        int hoursinput;
        cin >> hoursinput;

        cout << "Minutes: " << flush;

        int minutinput;
        cin >> minutinput;

        cout << "Seconds: " << flush;
        int secsinput;
        cin >> secsinput;

        int totalsecs;

        totalsecs =  ((daysinput * 86400)+(hoursinput * 3600)+(minutinput*60)+(secsinput * 1));
        cout << endl;
        cout << "Total seconds of this time is: " << totalsecs << endl;

        cout << endl;
        cout << endl;

        }else{
        cout << endl;
        cout << "Please enter the seconds to convert: " << endl;

        int secinput;
        cin >> secinput;

        cout << endl;
        cout << endl;

        int days = secinput / 86400;

        if(secinput > 86400){
            secinput %= 86400;

            cout << "Days   : " << days << endl;
        }else{
            cout << "Days   : " << days << endl;
        }

        cout << endl;

        int hours = secinput / 3600;
        cout << "Hours  : " << hours << endl;

        cout << endl;

        int minutes = secinput / 60;

        if(minutes >= 60){
            minutes %= 60;
            cout << "minutes: " << minutes << endl;
        }else{
            cout << "minutes: " << minutes << endl;
        }

        cout << endl;

        int andseconds = secinput %= 60;
        cout << "seconds: " << andseconds << endl;

        cout << endl;
        cout << endl;

    }

    const string positivefeedback = "yes" ;
    const string negetivefeedback = "no";
    string inputs;

    cout << "===============================================" << endl;
    cout << "===============================================" << endl;
    cout << "Was the program a success ?? " << endl;
    cout << "yes / no " << endl;

    string input;
    cin >> input;

    if(input == positivefeedback){
        cout << "Would you like to give any suggestions? " << endl;
        cout << "yes / no" << endl;
        string inputs;
        cin >> inputs;

        if(inputs == "yes"){
                cout << endl;
            cout << "Wonderful" << endl;
            cout << "Here is all how you can contact the coder" << endl;
            cout << "Drop any suggestions in here" << endl;
            cout << endl;
            cout << "Reddit === u/thoughtguru23" << endl;
            cout << endl;
            cout << "Linkedin === Pranav Bhargav" << endl;
            cout << endl;
            cout << "Gmail === pranavkpfreedom@gmail.com" << endl;
        }

    }else if(input == negetivefeedback){

        cout << endl;
        cout << "Would you like to give any suggestions? " << endl;
        cout << "yes / no" << endl;
        string inputs;
        cin >> inputs;

        if(inputs == "yes"){
            cout << endl;
            cout << "Wonderful" << endl;
            cout << "Here is all how you can contact the coder" << endl;
            cout << "Drop any suggestions in here" << endl;
            cout << endl;
            cout << "Reddit === u/thoughtguru23" << endl;
            cout << endl;
            cout << "Linkedin === Pranav Bhargav" << endl;
            cout << endl;
            cout << "Gmail === pranavkpfreedom@gmail.com" << endl;
        }
        cout << endl;
        cout << endl;
    }

    cout << endl;
    cout << "Have A Great Day Thank You" << endl;

    return 0;
}
