Action()
{

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(18);

	web_submit_form("login.pl", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=21", ENDITEM, 
		"Name=login.y", "Value=3", ENDITEM, 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=A6AEF90CC96344DAA0D331AAB28C50F6&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=d93005dada154aa6a984828a2eac10f9&HASH=d930&LV=201908&V=4&LU=1565772800870; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=0E74AE4A1B9368B81B2FA3F21F936B3C; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20190813; DOMAIN=iecvlist.microsoft.com");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t3.inf", 
		EXTRARES, 
		"Url=https://iecvlist.microsoft.com/ie11blocklist/1401746408/versionlist.xml", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_think_time(9);

	web_submit_form("reservations.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=09/17/2019", ENDITEM, 
		"Name=arrive", "Value=Los Angeles", ENDITEM, 
		"Name=returnDate", "Value=09/18/2019", ENDITEM, 
		"Name=numPassengers", "Value=5", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=findFlights.x", "Value=44", ENDITEM, 
		"Name=findFlights.y", "Value=19", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=030;251;09/17/2019", ENDITEM, 
		"Name=reserveFlights.x", "Value=22", ENDITEM, 
		"Name=reserveFlights.y", "Value=7", ENDITEM, 
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=pass2", "Value=", ENDITEM, 
		"Name=pass3", "Value=", ENDITEM, 
		"Name=pass4", "Value=", ENDITEM, 
		"Name=pass5", "Value=", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=72", ENDITEM, 
		"Name=buyFlights.y", "Value=13", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_submit_form("reservations.pl_4", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=Book Another.x", "Value=80", ENDITEM, 
		"Name=Book Another.y", "Value=14", ENDITEM, 
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t8.inf", 
		LAST);

	return 0;
}