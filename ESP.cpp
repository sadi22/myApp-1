

/*
@description
Sent data via UART 16550 peripherals
@param
command           char array

@return


*/
// hold response
//u take any response randomly from here
// but a valid response is followed by OK substring
const char response[][40] = {"VAL  OK", "OK", "wifi HOME -86", "ERROR"};
char sent(char *command , int timeout =0)
{
    //wait timeout till

    // get response
    /*
        get a random response
        use rand function of c
        a successful response is followed by OK
    */
}
/*
@ Description
sent command "AT" to check device is ready
@ param
void

@return
void

*/

bool isAlive()
{
    sent("AT");
    // wait 3 sec

    /*
        if get OK response then return true
        otherwise false

    */
}
char* getFwVersion()
{
    sent("AT+GMR");
}
char* current_network()
{
    sent(" AT+CWJAP?");
}
/*
@Description
This is auth function connect with wifi AP
with user info SSID name and pass

@param

SSID           char array
password       char array

@param
return

void

*/
void connect2wifi(char *SSID , char *password)
{
    /*
    string containing "" so use escape char :)
    */
  //  sent("AT+CWJAP="",""")
}
int main()
{

}
