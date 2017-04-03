#include "RT.Objects.Private\Header Files\NearlyEqual_Priv.hpp"



#pragma region Contructors & Destructor

// Default Constructor
NearlyEqual_Priv::NearlyEqual_Priv()
{
	epsilon = 0.0001L;
}

// Constructor
NearlyEqual_Priv::NearlyEqual_Priv(const long double p_epsilon)
{
	if (p_epsilon > 0.0L)
	{
		epsilon = p_epsilon;
	}
	else
	{
		epsilon = 0.0001L;
	}
}

// Copy Constructor
NearlyEqual_Priv::NearlyEqual_Priv(const NearlyEqual_Priv& p_thatNearlyEqual_Priv)
{
	epsilon = p_thatNearlyEqual_Priv.epsilon;
}

// Move Constructor
NearlyEqual_Priv::NearlyEqual_Priv(NearlyEqual_Priv&& p_thatNearlyEqual_Priv)
{
	if (this != &p_thatNearlyEqual_Priv)
	{
		// Release current object's resources.
		//epsilon = 0.0L;

		// Pilfer other's resources.
		epsilon = p_thatNearlyEqual_Priv.epsilon;

		// Reset other.
		p_thatNearlyEqual_Priv.epsilon = 0.0001L;
	}
}

// Destructor
NearlyEqual_Priv::~NearlyEqual_Priv()
{
}

#pragma endregion Contructors & Destructor



#pragma region Operators

// Assignment Operator
NearlyEqual_Priv& NearlyEqual_Priv::operator=(const NearlyEqual_Priv& p_thatNearlyEqual_Priv)
{
	if (this != &p_thatNearlyEqual_Priv)
	{
		NearlyEqual_Priv temp(p_thatNearlyEqual_Priv);

		swap(temp);
	}

	return *this;
}

// Move Assignment Operator
NearlyEqual_Priv& NearlyEqual_Priv::operator=(NearlyEqual_Priv&& p_thatNearlyEqual_Priv)
{
	if (this != &p_thatNearlyEqual_Priv)
	{
		// Release current object's resources.
		//epsilon = 0.0L;

		// Pilfer other's resources.
		epsilon = p_thatNearlyEqual_Priv.epsilon;

		// Reset other.
		p_thatNearlyEqual_Priv.epsilon = 0.0001L;
	}

	return *this;
}

#pragma endregion Operators



#pragma region Getters & Setters

long double NearlyEqual_Priv::GetEpsilon() const
{
	return epsilon;
}

bool NearlyEqual_Priv::SetEpislon(long double p_epsilon)
{
	if (p_epsilon > 0.0L)
	{
		epsilon = p_epsilon;
		return true;
	}
	else
	{
		return false;
	}
}

#pragma endregion Getters & Setters



void NearlyEqual_Priv::swap(NearlyEqual_Priv& p_thatNearlyEqual_Priv)
{
	using std::swap;

	swap(epsilon, p_thatNearlyEqual_Priv.epsilon);
}

bool NearlyEqual_Priv::test(long double p_number1, long double p_number2, long double p_customEpsilon = 0.0001L)
{
	long double tempEpsilon = epsilon;
	if ((p_customEpsilon != 0.0001L) && (p_customEpsilon > 0.0L))
	{
		tempEpsilon = p_customEpsilon;
	}
	const long double workingEpsilon = tempEpsilon;

	const long double absNumber1 = std::abs(p_number1);
	const long double absNumber2 = std::abs(p_number2);

	const long double difference = std::abs(absNumber1 - absNumber2);

	if (absNumber1 == absNumber2)
	{
		return true;
	}
	else if ((absNumber1 * absNumber2) == 0.0L)
	{
		//return (difference < (std::pow(workingEpsilon, 2.0L)));
		return (difference < (workingEpsilon * workingEpsilon));
	}
	else
	{
		return ((difference / (absNumber1 + absNumber2)) < workingEpsilon);
	}
}