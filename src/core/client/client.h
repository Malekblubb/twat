/*
 * Copyright (c) 2013 Christoph Malek
 * See LICENSE for more information.
 */

#ifndef CORE_CLIENT_CLIENT_H
#define CORE_CLIENT_CLIENT_H


namespace TWAT
{
	class CClient
	{
		class CComponentCore *m_core;
		class IConfig *m_config;
		class ITwMapExtract *m_twMapExtract;
		class ITwServerBrowser *m_twServerBrowser;
		class ITwServerTester *m_twServerTester;


	public:
		CClient();
		~CClient();
		void Init();
		static CClient *CreateClient() {return new CClient();}


		class CComponentCore *Core() const {return m_core;}
		class IConfig *Config() const {return m_config;}
		class ITwMapExtract *TwMapExtract() const {return m_twMapExtract;}
		class ITwServerBrowser *TwServerBrowser() const {return m_twServerBrowser;}
		class ITwServerTester *TwServerTester() const {return m_twServerTester;}

	private:
		void SetupComponents();
		void InitComponents();
	};
}

#endif // CORE_CLIENT_CLIENT_H
