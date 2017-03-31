#pragma once



#ifndef RT_OBJECTS_PUBLIC_NEARLYEQUAL_PUB
#define RT_OBJECTS_PUBLIC_NEARLYEQUAL_PUB



	#include <memory>
	#include <utility>

	#include "C:\SourceCode\GitHub\MSVS2015\RayTracer\RT.Objects.Private\Header Files\NearlyEqual_Priv.hpp"



	class NearlyEqual_Pub
	{
		public:
			#pragma region Contructors & Destructor

			/// <summary>
			/// Constructor
			/// </summary>
			explicit NearlyEqual_Pub();

			/// <summary>
			/// Copy Constructor
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Pub">
			/// </param>
			explicit NearlyEqual_Pub(const NearlyEqual_Pub& p_thatNearlyEqual_Pub);

			/// <summary>
			/// Move Constructor
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Pub">
			/// </param>
			explicit NearlyEqual_Pub(NearlyEqual_Pub&& p_thatNearlyEqual_Pub);

			/// <summary>
			/// Copy Assignment Operator
			/// </summary>
			///
			/// <param name="p_thatNearlyEqual_Pub">
			/// </param>
			NearlyEqual_Pub& operator=(const NearlyEqual_Pub& p_thatNearlyEqual_Pub);

			/// <summary>
			/// Destructor
			/// </summary>
			~NearlyEqual_Pub();

			#pragma endregion Contructors & Destructor



		private:
			std::unique_ptr<NearlyEqual_Priv> d_ptr;
	};



#endif