#include "gotl_html.h"

::gotl::error_t			gotl::generateHTTPHeaders	(::std::string & headers	)	{ 
	headers					= "Content-Type: text/html\r\n" ; 
	return 0; 
}

const char *	options []	= 
	{	"Start"
	,	"Exit"
	};

const char *	scripts []	= 
	{	""
	,	""
	};

::gotl::error_t			gotl::generateHTMLOutput	(::std::string & output		)	{ 
	output					= "<html>" ; 
	output					+= "\n<head><title>CGI World</title></head>" ; 

	output					+= "\n<body>" ; 
	output					+= "\n<table><tr>" ; 
	for(uint32_t iOption = 0; iOption < ::std::size(options); ++iOption) 
		output					+= "\n<td>" + ::std::string(options[iOption])+ "</td>" ; 
	output					+= "\n</tr></table>" ; 
	output					+= "\n</body>" ; 

	for(uint32_t iScript = 0; iScript < ::std::size(scripts); ++iScript) 
		output					+= "\n<script>" + ::std::string(scripts[iScript])+ "</script>" ; 
	output					+= "\n</html>" ; 
	return 0; 
}
