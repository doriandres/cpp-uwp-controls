#pragma once
#include "pch.h"
#include "RelayCommand.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Input;

namespace TheApp
{
	RelayCommand::RelayCommand(ExecuteDelegate^ execute, CanExecuteDelegate^ canExecute)
		: m_execute(execute), m_canExecute(canExecute)
	{
	}

	RelayCommand::RelayCommand(ExecuteDelegate^ execute) : m_execute(execute)
	{		
	}

	bool RelayCommand::CanExecute(Object^ parameter)
	{
		if (m_canExecute)
		{
			return m_canExecute(parameter);
		}
		return true;
	}

	void RelayCommand::Execute(Object^ parameter)
	{
		if (m_execute)
		{
			m_execute(parameter);
		}
	}
}