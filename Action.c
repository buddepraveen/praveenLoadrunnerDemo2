Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://cdn.mxpnl.com/libs/mixpanel-2.2.min.js", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=84", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIfCU35IjnBRbgwEgkN541ADhIAGgASCQ3OQUx6EgAaAA==?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("decide", 
		"URL=https://api.mixpanel.com/decide/?verbose=1&version=1&lib=web&token=94b5c311692e7c9d03cef9c9a7a32eaf&ip=1&_=1595560989560", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"chrome-extension://mbopgmdnpcbohhpnfglgohlbhfongabi");

	web_custom_request("track", 
		"URL=https://api.mixpanel.com/track/?ip=1&_=1595560992122", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"Body=data="
		"eyJldmVudCI6ICIkd2ViX2V2ZW50IiwicHJvcGVydGllcyI6IHsiJG9zIjogIldpbmRvd3MiLCIkYnJvd3NlciI6ICJDaHJvbWUiLCIkY3VycmVudF91cmwiOiAiY2hyb21lLWV4dGVuc2lvbjovL21ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpL19nZW5lcmF0ZWRfYmFja2dyb3VuZF9wYWdlLmh0bWwiLCIkYnJvd3Nlcl92ZXJzaW9uIjogODQsIiRzY3JlZW5faGVpZ2h0IjogODY0LCIkc2NyZWVuX3dpZHRoIjogMTUzNiwibXBfbGliIjogIndlYiIsIiRsaWJfdmVyc2lvbiI6ICIyLjM4LjAiLCIkaW5zZXJ0X2lkIjogInZxYWkwd2dvYWxhOXA5Z3UiLCJ0aW1lIjogMTU5NTU2MDk5Mi4xMiwiZGlzdGluY3RfaWQiOiAxMDIxOTIyLCIkZGV2aWNlX2lkIj"
		"ogIjE3MzcwNDhlNDkwMTI1LTA2MzU0NjU2OGE0NzYyLTQzNTM3NjAtMTQ0MDAwLTE3MzcwNDhlNDkxNWMiLCIkaW5pdGlhbF9yZWZlcnJlciI6ICIkZGlyZWN0IiwiJGluaXRpYWxfcmVmZXJyaW5nX2RvbWFpbiI6ICIkZGlyZWN0IiwiJHVzZXJfaWQiOiAxMDIxOTIyLCIkdGl0bGUiOiAiIiwiJGV2ZW50X3R5cGUiOiAicGFnZXZpZXciLCIkY2VfdmVyc2lvbiI6IDEsIiRob3N0IjogIm1ib3BnbWRucGNib2hocG5mZ2xnb2hsYmhmb25nYWJpIiwiJHBhdGhuYW1lIjogIi9fZ2VuZXJhdGVkX2JhY2tncm91bmRfcGFnZS5odG1sIiwidG9rZW4iOiAiOTRiNWMzMTE2OTJlN2M5ZDAzY2VmOWM5YTdhMzJlYWYifX0=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=129247.548400162zztiVHApHHAiDDDDDQiiQpActzcf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}