#include "gotl_html.h"

int main(){
	::std::string		headers	= "";
	::std::string		output	= "";

	::gotl::generateHTTPHeaders	(headers	);
	::gotl::generateHTMLOutput	(output		);
	printf("%s", &headers[0]);
	printf("\r\n");
	printf("%s", &output[0]);
	return 0;
}