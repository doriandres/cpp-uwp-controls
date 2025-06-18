#pragma once
#include "pch.h"
#include "TheCommand.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Input;

namespace TheApp
{
	TheCommand::TheCommand(ExecuteDelegate^ execute, CanExecuteDelegate^ canExecute)
		: m_execute(execute), m_canExecute(canExecute)
	{
	}

	TheCommand::TheCommand(ExecuteDelegate^ execute) : m_execute(execute)
	{		
	}

	bool TheCommand::CanExecute(Object^ parameter)
	{
		if (m_canExecute)
		{
			return m_canExecute(parameter);
		}
		return true;
	}

	void TheCommand::Execute(Object^ parameter)
	{
		if (m_execute)
		{
			m_execute(parameter);
		}
	}
}