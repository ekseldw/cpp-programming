class CRequest {
public:
	static void SLogin() {
		if (!s_bLogin) {
			// Login 贸府
			s_bLogin = true;
		}
	}

	void Request() {
		SLogin();
		// Request 贸府
	}

	char* m_RequestType;
	static bool s_bLogin;
};

bool CRequest::s_bLogin = false;

void main() {
	CRequest r1, r2, r3;

	r1.m_RequestType = "List";
	r1.Request();

	r2.m_RequestType = "Download";
	r2.Request();

	r3.m_RequestType = "Upload";
	r3.Request();
}