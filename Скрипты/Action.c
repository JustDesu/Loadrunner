Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("DNT", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=134911.917942487zQDQfDVpHHQVzzzHtVzDHpVQAzHf", ENDITEM, 
		"Name=username", "Value=Jotaro", ENDITEM, 
		"Name=password", "Value=Dio", ENDITEM, 
		"Name=login.x", "Value=58", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(13);

	web_submit_form("reservations.pl", 
		"Snapshot=t52.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=10/12/2022", ENDITEM, 
		"Name=arrive", "Value=Frankfurt", ENDITEM, 
		"Name=returnDate", "Value=10/13/2022", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t53.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=010;386;10/12/2022", ENDITEM, 
		"Name=reserveFlights.x", "Value=58", ENDITEM, 
		"Name=reserveFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_revert_auto_header("DNT");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(24);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jotaro", ENDITEM, 
		"Name=lastName", "Value=Kujo", ENDITEM, 
		"Name=address1", "Value=LinLin", ENDITEM, 
		"Name=address2", "Value=Paris", ENDITEM, 
		"Name=pass1", "Value=Jotaro Kujo", ENDITEM, 
		"Name=creditCard", "Value=1111 1111 1111 1111", ENDITEM, 
		"Name=expDate", "Value=02/21", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=010;386;10/12/2022", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=64", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_form("reservations.pl_4", 
		"Snapshot=t56.inf", 
		ITEMDATA, 
		"Name=Book Another.x", "Value=24", ENDITEM, 
		"Name=Book Another.y", "Value=10", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("DNT");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(4);

	web_url("canonical.html_8", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	return 0;
}