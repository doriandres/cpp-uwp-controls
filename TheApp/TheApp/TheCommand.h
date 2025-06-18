#pragma once
#include "pch.h"


using namespace Platform;
using namespace Windows::UI::Xaml::Input;

namespace TheApp
{
    public delegate void ExecuteDelegate(Object^ parameter);
    public delegate bool CanExecuteDelegate(Object^ parameter);    

    public ref class TheCommand sealed : ICommand
    {
    private:
		ExecuteDelegate^ m_execute;
		CanExecuteDelegate^ m_canExecute;

    public:

        TheCommand(ExecuteDelegate^ execute, CanExecuteDelegate^ canExecute);
        TheCommand(ExecuteDelegate^ execute);

        virtual event Windows::Foundation::EventHandler<Object^>^ CanExecuteChanged;
        virtual bool CanExecute(Object^ parameter);
        virtual void Execute(Object^ parameter);    
    };
}
