#include "RT.Objects.Public\Header Files\NearlyEqual_Pub.hpp"



NearlyEqual_Pub::NearlyEqual_Pub()
	: d_ptr(new NearlyEqual_Priv())
{
}

NearlyEqual_Pub::NearlyEqual_Pub(const NearlyEqual_Pub& p_thatNearlyEqual_Pub)
	: d_ptr(new NearlyEqual_Priv(*p_thatNearlyEqual_Pub.d_ptr))
{
}

NearlyEqual_Pub::NearlyEqual_Pub(NearlyEqual_Pub&& p_thatNearlyEqual_Pub) = default;

NearlyEqual_Pub& NearlyEqual_Pub::operator=(const NearlyEqual_Pub& p_thatNearlyEqual_Pub)
{
	//*d_ptr = *p_thatNearlyEqual_Pub.d_ptr;
	std::swap(*d_ptr, *p_thatNearlyEqual_Pub.d_ptr);
	return *this;
}

NearlyEqual_Pub::~NearlyEqual_Pub() = default;