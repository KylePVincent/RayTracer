#pragma once



#ifndef RT_OBJECTS_PRIVATE_NEARLYEQUAL_PRIV
#define RT_OBJECTS_PRIVATE_NEARLYEQUAL_PRIV



	#include <cmath>
	#include <utility>



	class NearlyEqual_Priv
	{
		public:
			#pragma region Contructors & Destructor

			/// <summary>
			/// Default Constructor
			/// </summary>
			explicit NearlyEqual_Priv();

			/// <summary>
			/// Constructor
			/// </summary>
			///
			/// <param name="p_epsilon">
			/// </param>
			explicit NearlyEqual_Priv(const long double p_epsilon);

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
			/// Destructor
			/// </summary>
			~NearlyEqual_Priv();

			#pragma endregion Contructors & Destructor



			#pragma region Operators

			/// <summary>
			/// Assignment Operator
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Priv">
			/// </param>
			NearlyEqual_Priv& operator=(const NearlyEqual_Priv& p_thatNearlyEqual_Priv);

			/// <summary>
			/// Move Assignment Operator
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Priv">
			/// </param>
			NearlyEqual_Priv& operator=(NearlyEqual_Priv&& p_thatNearlyEqual_Priv);

			#pragma endregion Operators



			#pragma region Getters & Setters

			long double GetEpsilon() const;

			bool SetEpislon(long double p_epsilon);

			#pragma endregion Getters & Setters



			void swap(NearlyEqual_Priv& p_thatNearlyEqual_Priv);

			bool test(long double p_number1, long double p_number2, long double p_customEpsilon = 0.0001L);

		private:
			long double epsilon;
	};



#endif