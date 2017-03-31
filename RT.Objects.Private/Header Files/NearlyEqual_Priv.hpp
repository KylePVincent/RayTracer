#pragma once



#ifndef RT_OBJECTS_PRIVATE_NEARLYEQUAL_PRIV
#define RT_OBJECTS_PRIVATE_NEARLYEQUAL_PRIV



	#include <cmath>



	class NearlyEqual_Priv
	{
		public:
			#pragma region Contructors & Destructor

			/// <summary>
			/// Constructor
			/// </summary>
			explicit NearlyEqual_Priv();

			/// <summary>
			/// Copy Constructor
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Priv">
			/// </param>
			explicit NearlyEqual_Priv(const NearlyEqual_Priv& p_thatNearlyEqual_Priv);

			/// <summary>
			/// Move Constructor
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Priv">
			/// </param>
			explicit NearlyEqual_Priv(NearlyEqual_Priv&& p_thatNearlyEqual_Priv);

			/// <summary>
			/// Copy Assignment Operator
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Priv">
			/// </param>
			NearlyEqual_Priv& operator=(const NearlyEqual_Priv& p_thatNearlyEqual_Priv);

			/// <summary>
			/// Destructor
			/// </summary>
			~NearlyEqual_Priv();

			#pragma endregion Contructors & Destructor



		private:
	};



#endif