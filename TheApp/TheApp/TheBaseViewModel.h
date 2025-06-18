#pragma once
#include "pch.h"
#include "TheCommand.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml;

namespace TheApp
{
	public ref class TheBaseViewModel : public DependencyObject, public INotifyPropertyChanged
	{	
	protected:
		void OnPropertyChanged(String^ propertyName);

	public:
		virtual event PropertyChangedEventHandler^ PropertyChanged;
	};
}