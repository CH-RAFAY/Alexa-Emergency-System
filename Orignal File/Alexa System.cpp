//                              -P20-0457, SE-2A, AbdulRafay Ather, Project code 60%, HPatient Online Appointment system-


//----------------------------------------"Patient Appointment system" / "Online clinic Application"---------------------------------------------------------

# include <iostream>
#include <string>
using namespace std;


//----------------------------------------Concept of Encapsulation ++(Public/Private/Constructor/distructor)-----------------------------------------------


class emergency                                                                                              // Class Emergency {};
{
private:
    string adress, contact;                                                                                           //--Data Members
    int option;

public:

    emergency(){                                                                                           //--Default Constructor
        cout<<"\n\n\n\n\t\t\t\t\t\t\t<< Emergency Services >>\n\n\n\n1. Road Accident\t\t\t\t\t2. Brain / Heart-Stroke\t\t\t\t\t3.Wild Attack\n\n\n\t\t\t\t\t\t\t  Service No: ";
        cin>>option;
        if(option==1){
            cout<<"\n\nEnter Location/Adress\t: ";
            cin>>adress;
            cout<<"Contact Number\t\t: ";
            cin>>contact;
        }
        else if(option==2){
            cout<<"\n\nEnter Location/Adress\t: ";
            cin>>adress;                                                                                   // --IF / Else Statement
            cout<<"Contact Number\t\t: ";
            cin>>contact;
        }
        else if(option==3){
            cout<<"\n\nEnter Location/Adress\t: ";
            cin>>adress;
            cout<<"\nContact Number\t\t: ";
            cin>>contact;
        }
        else{
            cout<<"Invalid Input";

        }
    }
    void print()                                                                                         // --Member Function
    {
        cout<<"\n\n\t\t\t\t  --> (GSM) Location Traced Successfuly! Aid Arriving in 2:00,  -(4km Away)...\n...";
    }

~emergency(){};                                                                                         // --Distructor

};

//----------------------------------------------------Creating Base class Doctor{}-----------------------------------------------------

class doctor                                                                                       //--Base Class Specialist {};                                                                                       
{
public:                                                                                         

    void spec(){                                                                                         
        cout<<"\n\n\n\t\t\t\t\t\t   --<< Available Specialists >>--\n\n\t\t\t\t\t\t\t1. Endocrinologist\n\n\t\t\t\t\t\t\t2. Dermatologist\n\n\t\t\t\t\t\t\t3. Cardiologist\n\n\t\t\t\t\t\t\t4. Gynacologist\n\n";

    }
                                                                                                      // Public: Member Function                                                                          
};



//------------------------------------------using Inheritance "is-a" Relation, Creating Derived specialist doctor{}----------------------------

class specialist: public doctor                                                                                                                                          
{

protected:                                                                // -- Keeping Data Members Protected

       int ask;
public:                                                                  // -- "is-a" Relationship Inheritance i-e (Doctor is a Specialist)
    
    
    void doc() {                                                        // --doc(){} Member function        

        cout<<"\n\t\t\t\t\t\t\tRequired Appointment: " ;                                                                 
        cin>>ask;
        if(ask==1)
        {
            int o;
            cout<<"\n\n\t\t\t\t\t\t\t<<--Endocrinologist-->>\n\n(1) Dr.Ali_Imran\t\t\t\t\t(2) Dr.Faisal_Iqbal\t\t\t\t\t(3) Dr.Zartaj_Gul\n\n\t\t\t\t\t\t\t Prescriber: ";
            cin>>o;
            if(o==1){
                cout<<"\n\n\t\t\t\t\t\tDr.Ali_Imran's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(4:00 pm)\n\t\t\t\t\t\t\t3. Friday \t(6:00 pm)";
                int oo;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>oo;
                if(oo==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Ali Imran]";}
                else if(oo==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednesday, 4:00 pm, [Prescriber: Dr.Ali Imran]";}
                else if(oo==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tFriday, 6:00 pm, [Prescriber: Dr.Ali Imran]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(o==2){
                cout<<"\n\n\t\t\t\t\t\tDr.Faisal_Iqbal's Available appointments:\n\n\t\t\t\t\t\t\t1. Tuesday \t(8:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Thursday \t(7:00 pm)";
                int os;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>os;
                if(os==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 8:00 am, [Prescriber: Dr.Faisal Iqbal]";}
                else if(os==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednestday, 11:00 am, [Prescriber: Dr.Faisal Iqbal]";}
                else if(os==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tThursday, 7:00 am, [Prescriber: Dr.Faisal Iqbal]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(o==3){
                cout<<"\n\n\t\t\t\t\t\tDr.Zartaj Gul's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t (10:00 am)\n\t\t\t\t\t\t\t2. Tuesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Sunday \t(6:00 pm)";
                int ss;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>ss;
                if(ss==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Zartaj Gul]";}
                else if(ss==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 11:00 am, [Prescriber: Dr.Zartaj Gul]";}
                else if(ss==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tSunday, 6:00 pm, [Prescriber: Dr.Zartaj Gul]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }

            else{cout<<"\n\n\t\t\t\t\t\tSorry, Limited Specialists available.";exit(0);}

        }
        //--------------------------------using Nested loops and IF-ELSE conditional statement------------------------------------------
        else if(ask==2)
        {

            int q;
            cout<<"\n\n\t\t\t\t\t\t\t<<--Dermatologist-->>\n\n(1) Dr.Zubair_Irfan\t\t\t\t\t(2) Dr.Asad_Omer\t\t\t\t\t(3) Dr.Fatima_khan\n\n\t\t\t\t\t\t\t Prescriber: ";
            cin>>q;
            if(q==1){
                cout<<"\n\n\t\t\t\t\t\tDr.Zubair_Irfan's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(4:00 pm)\n\t\t\t\t\t\t\t3. Friday \t(6:00 pm)";
                int qq;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>qq;
                if(qq==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Zubair Irfan]";}
                else if(qq==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednesday, 4:00 pm, [Prescriber: Dr.Zubair Irfan]";}
                else if(qq==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tFriday, 6:00 pm, [Prescriber: Dr.Zubair Irfan]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(q==2){
                cout<<"\n\n\t\t\t\t\t\tDr.Asad_Omer's Available appointments:\n\n\t\t\t\t\t\t\t1. Tuesday \t(8:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Thursday \t(7:00 pm)";
                int q1;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>q1;
                if(q1==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 8:00 am, [Prescriber: Dr.Asad Omer]";}
                else if(q1==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednestday, 11:00 am, [Prescriber: Dr.Asad Omer]";}
                else if(q1==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tThursday, 7:00 am, [Prescriber: Dr.Asad Omer]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(q==3){
                cout<<"\n\n\t\t\t\t\t\tDr.Fatima_khan's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Tuesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Sunday \t(6:00 pm)";
                int sq;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>sq;
                if(sq==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Fatima khan]";}
                else if(sq==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 11:00 am, [Prescriber: Dr.Fatima khan]";}
                else if(sq==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tSunday, 6:00 pm, [Prescriber: Dr.Fatima khan]";}
                else{cout<<"\n\n\t\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }

            else{cout<<"\n\n\t\t\t\t\t\tSorry, Limited Specialists available.";exit(0);}

        }

        //--------------------------------using Nested loops and IF-ELSE conditional statement------------------------------------------

        else if(ask==3)
        {


            int r;
            cout<<"\n\n\t\t\t\t\t\t\t<<--Cardiologist-->>\n\n\t\t\t\t\t(1) Dr.Arbab_Hassan\t\t\t\t\t(2) Dr.Fahad_Shakeel\t\t\t\t\t(3) Dr.Romaisa_khan\n\n\t\t\t\t\t\t\t Prescriber: ";
            cin>>r;
            if(r==1){
                cout<<"\n\n\t\t\t\t\t\tDr.Arbab_Hassan's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(4:00 pm)\n\t\t\t\t\t\t\t3. Friday \t(6:00 pm)";
                int rr;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>rr;
                if(rr==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Arbab_Hassan]";}
                else if(rr==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednesday, 4:00 pm, [Prescriber: Dr.Arbab_Hassan]";}
                else if(rr==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tFriday, 6:00 pm, [Prescriber: Dr.Arbab_Hassan]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(r==2){
                cout<<"\n\n\t\t\t\t\t\tDr.Fahad_Shakeel's Available appointments:\n\n\t\t\t\t\t\t\t1. Tuesday \t(8:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Thursday \t(7:00 pm)";
                int r1;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>r1;
                if(r1==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 8:00 am, [Prescriber: Dr.Fahad_Shakeel]";}
                else if(r1==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednestday, 11:00 am, [Prescriber: Dr.Fahad_Shakeel]";}
                else if(r1==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tThursday, 7:00 am, [Prescriber: Dr.Fahad_Shakeel]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }
            else if(r==3){
                cout<<"\n\n\t\t\t\t\t\tDr.Romaisa_khan's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Tuesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Sunday \t(6:00 pm)";
                int sr;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>sr;
                if(sr==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Romaisa_khan]";}
                else if(sr==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 11:00 am, [Prescriber: Dr.Romaisa_khan]";}
                else if(sr==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tSunday, 6:00 pm, [Prescriber: Dr.Romaisa_khan]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available";exit(0);}
            }

            else{cout<<"\n\n\t\t\t\t\tSorry, Limited Specialists available.";exit(0);}
        }

        //--------------------------------using Nested loops and IF-ELSE conditional statement------------------------------------------

        else if(ask==4)
        {


            int f;
            cout<<"\n\n\t\t\t\t\t\t\t<<--Dermatologist-->>\n\n\t\t\t\t\t(1) Dr.Farhan_Azam\\t\t\t\t\t(2) Dr.Sarvar_Ali\t\t\t\t\t(3) Dr.Zainab_khan\n\nPrescriber: ";
            cin>>f;
            if(f==1){
                cout<<"\n\n\t\t\t\t\t\tDr.Farhan_Azam's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n2\t\t\t\t\t\t\t. Wednesday \t(4:00 pm)\n\t\t\t\t\t\t\t3. Friday \t(6:00 pm)";
                int ff;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>ff;
                if(ff==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Farhan_Azam]";}
                else if(ff==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednesday, 4:00 pm, [Prescriber: Dr.Farhan_Azamn]";}
                else if(ff==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tFriday, 6:00 pm, [Prescriber: Dr.Farhan_Azam]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available"; exit(0);}
            }
            else if(f==2){
                cout<<"\n\n\t\t\t\t\t\tDr.Sarvar_Ali's Available appointments:\n\n\t\t\t\t\t\t\t1. Tuesday \t(8:00 am)\n\t\t\t\t\t\t\t2. Wednesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Thursday \t(7:00 pm)";
                int f1;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>f1;
                if(f1==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 8:00 am, [Prescriber: Dr.Sarvar_Ali]";}
                else if(f1==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tWednestday, 11:00 am, [Prescriber: Dr.Sarvar_Ali]";}
                else if(f1==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tThursday, 7:00 am, [Prescriber: Dr.Sarvar_Ali]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available"; exit(0);}
            }
            else if(f==3){
                cout<<"\n\n\t\t\t\t\t\tDr.Zainab_khan's Available appointments:\n\n\t\t\t\t\t\t\t1. Monday \t(10:00 am)\n\t\t\t\t\t\t\t2. Tuesday \t(11:00 am)\n\t\t\t\t\t\t\t3. Sunday \t(6:00 pm)";
                int sf;
                cout<<"\n\n\t\t\t\t\t\t\tSelect Timing: ";
                cin>>sf;
                if(sf==1){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tMonday, 10:00 am, [Prescriber: Dr.Zainab_khan]";}
                else if(sf==2){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tTuesday, 11:00 am, [Prescriber: Dr.Zainab_khan]";}
                else if(sf==3){cout<<"\n\n\t\t\t\t\tOppointment Confirmed :\tSunday, 6:00 pm, [Prescriber: Dr.Zainab_khan]";}
                else{cout<<"\n\n\t\t\t\t\tSorry! Only Limited Oppointments are available"; exit(0);}
            }

            else{cout<<"\n\n\t\t\t\t\tSorry, Limited Specialists available."; exit(0);}
        }
        else{cout<<"\n\n\t\t\t\t\tSorry! limited Specialists are available, Thanks"; exit(0);}

    }


};

//-------------------------------------------------------Inheritance (Derived Class) Patient from (Base Class) doctor{}------------------------------------------------------



class patient: public doctor                                              // --Using "is-a" Inheritance to Cobine classes data                          
{

protected:                                                               // --Data Members Protected            

    string name, id,gender,contact;
    int age, oppointment;

public:


    void data(){                                                         // --Public Member Function data(){}                   
       
       
        cout<<"\n\n\t\t\t\t\t\t<<--Oppointment Requirements-->> \n\n\t\t\t\t\t\t\tPatient name: ";
        cin>>name;
        cout<<"\t\t\t\t\t\t\tGender: ";
        cin>>gender;
        cout<<"\t\t\t\t\t\t\tID: ";
        cin>>id;
        cout<<"\t\t\t\t\t\t\tAge: ";                                                   // --Get DATA(){}                         
        cin>>age;
        cout<<"\t\t\t\t\t\t\tContact: ";
        cin>>contact;
        cout<<"\t\t\t\t\t\t\tOppointment no: ";
        cin>>oppointment;

    }
                                                                        // --Using Member Function to Confirm Details

    void confirmed(){
        cout<< "\n\n\t\t\t\t\t\t-> Oppointment confirmed successfully! <-\n\n\t\t\t\t\t\t\tPatient Details :- \n\n\t\t\t\t\t\t\tName\t\t: "<<name<<"\n\t\t\t\t\t\t\tGender\t\t: "<<gender<<"\n\t\t\t\t\t\t\tID\t\t: "<<id<<"\n\t\t\t\t\t\t\tAge\t\t: "<<age<<"\n\t\t\t\t\t\t\tContact\t\t: "<<contact<<"\n\t\t\t\t\t\t\tOppointment no\t: "<<oppointment<<"\n\n...";
    }
};




//-----------------------May use Composition "has-a" relatioship or polymorphism concept in following classes--------------------------------------------


class pharmacy                                                          // using Compisition and "Has-a"
{

protected:
int wallet;                                                           // --Data members

public:

                                                           
    pharmacy(){                                                        // --Constructor
        wallet=200;
    }

    pharmacy(int a){                                                   
        wallet=a;                                                      // --Assigning Variable to Wallet             
    }

                                                                      // --Member Function Products(){};
    void products(){
        cout<<"\n\n\t\t\t\t\t\t---||--- Welcome! to Alexa Pharmacy ---||---\n\n\t\t\t\t\t\t\t1. First-Aid Box\t$20\n\n\t\t\t\t\t\t\t2. Cac100\t\t$10\n\n\t\t\t\t\t\t\t3. Multi-Vitamin\t$8\n\n\t\t\t\t\t\t\t4. O-R-S\t\t$5\n\n\t\t\t\t\t\t\t5. Zinc++\t\t$6\n\n\t\t\t\t\t\t\t6. Purchase Done!\n\n\t\t\t\t\t\t\t  Press 0 to Exit!";
    }

    ~pharmacy(){};                                                      // --Distructor             

};

class medicines: public pharmacy                                       // --Usin Has-a Relationship i-e (Pharmacy has medicines)
{

protected:                                                            // --Protected: Data Members      

    int aid=0,cac=0,mv=0,ors=0,zinc=0;

    int choice;


public:

    pharmacy wal;                                                      // Creating Base Class Pharmacy{}; Object            
    int wa;

    medicines(int a): wal(a)                                          // Passing Variable through (Base) Object                         

    {

        wa=a;                                                        // Assigning Variable to Base Class Object 

    }


    void fo(){                                                       // Member Function Fo(){} 
        while (wallet>=0)

        {


            cout<<"\n\n\n\t\t\t\t\t\t\tWallet Credit: $ "<<wallet<<".\n\n";
            cout<<"\n\t\t\t\t\t\t\tSelect Items: ";
            cin>>choice;
            if(choice==1){
                aid++;
                wallet=wallet-20;                                             // Using Object Wallet
            }
            if(choice==2){
                cac++;
                wallet=wallet-10;
            }
            if(choice==3){
                mv++;
                wallet=wallet-8;
            }                                                               // using IF / Else Statement
            if(choice==4){
                ors++;
                wallet=wallet-5;
            }

            if(choice==5){
                zinc++;
                wallet=wallet-6;
            }
            if(choice==6){
                cout<<"\n\n\t\t\t\t\t\t\tYour Products will be Deliver in 2 days!\n\n\t\t\t\t\t\t__||___ Thanks for Shopping from Alexa Pharmacy __||___\n\n";
                //exit(0);
                break;
            }

            if(choice==0){cout<<"\n\n\t\t\t\t\t\t\tThanks for Visiting Alexa Pharmacy!\n\n"; exit(0);}

            cout<<"\n\n\n\t\t\t\t\t\t\t<----< Your Cart >---->: \n\n\n(+"<<aid<<") First-Aid Box\t\t\t(+"<<cac<<") Cac100\t\t\t(+"<<mv<<") Multi-Vitamin\t\t\t(+"<<ors<<") O-R-S\t\t\t(+"<<zinc<<") Zinc++\t\t\t";

        }
                    string vo;                                                
                    cout<<"\n\nReturn to Main Menu (Yes / No )? ";
                    cin>>vo;
    }
};


//------------------------------------------ Polymorphysm (Derived / Base -> Virtual)--------------------------------------------


class customer_services                                         // Creating Base Class 
{

public:                                                        // Data Type: Public

    void  represent(){                                        // Member function (1)- 

        cout<<"\n\n\t\t\t\t\t\t\t^___ Support Center ___^ \n\n\t\t\t\t\t\t\t1. Services Feedback\n\n\t\t\t\t\t\t\t2. Complaints\n\n\t\t\t\t\t\t\t3. Cancelation Request\n\n\t\t\t\t\t\t\t4. Helpline\n\n\t\t\t\t\t\t\t How we can Help you: ";

    }

    void virtual stored() {                                 // Member Function (2)- 
        cout<<"\n\n~\n\n";

    }


};
                                                          // Derived Class Feedback{};
class feedback: public customer_services
{
protected:                                                // Data Type: Protected
    int h;
    string c;                                             // Data Members          


public:

    void virtual represent(){                             // Using Virtual Function- Function (1) with Same name as in Base Class                         
        cout<<"\n\n~\n\n";

    }

    void  stored() {                                    // Using Virtual Function- Function (2) with Same name as in Base Class     
        cin>>h;
        string cc;
        if (h == 1) {
            int fe;
            cout
                    << "\n\n\n\t\t\t\t\t Do you want to give Feedback on Alexa Medical Services? : \n\n\n1. Emergency Services\t\t\t\t\t2. Pharmacy Service\t\t\t\t\t3. Complaint Response\n\n\n-Please Select Service for Feedback: ";
            cin >> fe;
            string co;
            if (fe == 1) {
                cout << "\n\n--Please Enter your Feedback \t-> Emergency Service <- :\n\n= ";
                cin >> co;
                cout<<"\n\n\t\t\t\t\tThanks for your Feedback! -[Alexa Assistant Support]\n\n...";
            } else if (fe == 2) {
                cout << "\n\n--Please Enter your Feedback \t-> Pharmacy Service <- :\n\n= ";
                cin >> co;
                cout<<"\n\n\t\t\t\t\tThanks for your Feedback! -[Alexa Assistant Support]\n\n...";
            } else if (fe == 3) {
                cout << "\n\n--Please Enter your Feedback \t-> Complaint Response <- :\n\n= ";
                cin >> co;
                cout<<"\n\n\t\t\t\t\tThanks for your Feedback! -[Alexa Assistant Support]\n\n...";
            }
                cout<<"\n\nReturn to Main Menu (Yes / No )? ";
                cin>>cc;

        }

        else if (h == 2) {
            int fu;
            string b;
            cout
                    << "\n\n\t\t\t\t\tDo you want to Register Complain? : \n\n1. Emergency Services\t\t\t\t2. Pharmacy Service\t\t3. Complaint Response\n\n Please Select Service for Feedback: ";
            cin >> fu;
            string cos;
            if (fu == 1) {
                cout << "\n\nPlease Enter Detailed Complain \t-> Emergency Services <- :\n\n= ";
                cin >> cos;
                cout << "\n\n\t\t\t\t\tComplain hasbeen Forwarded to Department! -[Alexa Assistant Support]\n\n...";
            } else if (fu == 2) {
                cout << "\n\nPlease Enter Detailed Compalin \t-> Pharmacy Services <- :\n\n= ";
                cin >> cos;

                cout << "\n\n\t\t\t\t\tComplain hasbeen Forwarded to Department! -[Alexa Assistant Support]\n\n...";
            } else if (fu == 3) {
                cout << "\n\nPlease Enter Detailed Compalin  \t-> Complaint Center <- :\n\n= ";
                cin >> cos;

                cout << "\n\n\t\t\t\t\tComplain hasbeen Forwarded to Department! -[Alexa Assistant Support]\n\n...";
            }
                cout<<"\n\nReturn to Main Menu (Yes / No )? ";
                cin>>b;           
        }

         else if (h == 3) {
                string a, za;
                int zk;
                cout<< "\n\n\t\t\t\t\t\t\t<<< Registered Services >>>\n\n\t\t\t\t\t\t\t 1. Order Cancel\n\n\t\t\t\t\t\t\t 2. Appointment Cancellation \n\n\t\t\t\t\t\t\t Service Cancellation: ";
                cin >> zk;

                if (zk == 1) {
                    cout << "\n\n\t\t\t\t\t\t\t Enter Contact No: ";
                    cin >> za;

                    cout << "\n\n\t\t\t\t\t\tYou may get Appointment cancellation SMS Soon!\n\n\t\t\t\t\t\t\tThanks for using our Services.\n\n";

                }
                else if (zk == 2) {
                    cout << "\n\n\t\t\t\t\t\t\t Enter Contact No: ";
                    cin >> za;

                    cout << "\n\n\t\t\t\t\t\tYou may get Appointment cancellation SMS Soon!\n\n\t\t\t\t\t\t\tThanks for using our Services.";

                }
                cout<<"\n\nReturn to Main Menu (Yes / No )? ";
                cin>>a;

            }

            else if (h == 4) {
                string ds;

                cout<< "\n\n\t\t\t\t\t\t\t<<A-M-S Contact Information>>\n\n\t\t\t\t\t\t\tWhatsapp: 0300-0457898\n\n\t\t\t\t\t\t\tG-mail: Alexamedics@gmail.com\n\n\t\t\t\t\t\t\tFor More: Please visit Alexa-Medical Service Center...\n\n...";
                cout<<"\n\nReturn to Main Menu (Yes / No )? ";
                cin>>ds;

            }




        }

    };






//-------------------------------------------Executeing Code (MAIN FUNCTION)-------------------------------------------





int main(){                                                // Creating Main Function-(Calling Functions)                                                 
    
    jump:                                                 // Using goto Logic                                           
    do{
    
    int a;
    cout<<"\n\n\t\t\t\t\t---<<< Welcome to ALEXA-VICTORIA Hospital online Services >>>--- \n\n\t\t\t\t\t\t\t1. Emergency\n\n\t\t\t\t\t\t\t2. Booking Oppointment\n\n\t\t\t\t\t\t\t3. Pharmacy\n\n\t\t\t\t\t\t\t4. Support Center\n\n\t\t\t\t\t\t\t5. Exit\n\n\t\t\t\t\t\t\tRequired Service: ";
    cin>>a;
    switch(a){                                             // --Using Switch Statement to Creat Main-Menu                                              
        case 1:{
            emergency e;                                  // --Creating Emergency Class Object      
            
            e.print();                                   // --Object Calling Class Function        
            break;
        }
        case 2:{
            specialist d;                                   // Member functions from base class call through derived class
            d.spec();                                            
            d.doc();                                   // Using IS-A Realtionship Inheritance           
            patient e;
            e.data();
            e.confirmed();                            // Member functions call from Derived class  
            break;
        }
        case 3:{
        medicines m(200);                            // --Composition/ Has-A Relationship Inheritance                  
        m.products();                             
        m.fo();                                     // -- Calling Functions By using Base Class object into Derived Class + Constructor

        goto jump;
        }

        case 4:{                                    // --Concept of Polymorphism

        customer_services *cs;                     // --Creating Pointer               
        feedback fb;                               // --Creating Object     

        cs=&fb;                                   // --Assign Adress to Pointer (Derived to Base Class)

        cs->represent();                                    
        cs->stored();                            //-- Calling Function By Using Pointer Objects        
        goto jump;
        }

        default:{
            cout<<"\nThanks! for using Alexa-Medical Services.\n...";
            exit(0);
        }

    }
        string again;
        cout<<"\n\nReturn to Main Menu (Yes / No )? ";
        cin>>again;
        if (again=="yes"&& "Yes"){
            continue;
        }
        else if(again=="no"&&"No"){
            cout<<"\nThanks! for using Alexa-Medical Services.\n...";
            break;
        }

        }

    while(true);
    return 0;
}


/*---------------------------------------------------------------------DONE!----------------------------------------------------------------------------------


-ALL OOP CONCEPTS HAS BEEN APPLIED:

○ At least five classes
○ At least four functionalities (features)
○ Encapsulation
○ Inheritance
○ Composition
○ Polymorphism
○ Operator Overloading 

THANKS */
