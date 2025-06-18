#pragma once
#include "pch.h"


using namespace Platform;
using namespace Windows::UI::Xaml::Input;

namespace TheApp
{
    public delegate void ExecuteDelegate(Object^ parameter);
    public delegate bool CanExecuteDelegate(Object^ parameter);    

    public ref class RelayCommand sealed : ICommand
    {
    private:
		ExecuteDelegate^ m_execute;
		CanExecuteDelegate^ m_canExecute;

    public:

        RelayCommand(ExecuteDelegate^ execute, CanExecuteDelegate^ canExecute);
        RelayCommand(ExecuteDelegate^ execute);

        virtual event Windows::Foundation::EventHandler<Object^>^ CanExecuteChanged;
        virtual bool CanExecute(Object^ parameter);
        virtual void Execute(Object^ parameter);    
    };
}
